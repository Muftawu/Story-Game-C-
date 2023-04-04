#if !defined(Profiles)
#define Profiles

#include <iostream>
#include <string>
#include <fstream>

#include "ch001.h"

using namespace std;

class player_profile {
    protected:
        string player_name;
        string password;
        char p_response;
        string userdata[100], line_string;
        string log_data[100], log_string;

    public:
        player_profile () {
            cout << "\n\t\t...Welcome to C++ Story game...\n\n";
        }

        // Check for player authenticity
        void check_player_status () {
            cout << "\n\t\tEnter e for existing user or n to create a new user\n";
            cin >> p_response;

            while (true) {
                if (p_response == 'e') {
                    player_login();
                    break;
                }
                else if (p_response == 'n') {
                    cout << "\n...Creating New User...\n";
                    create_new_user();
                    break;
                }
                else {
                    cout << "Read carefully\n";
                }      
                cin >> p_response;
            }
        }
        
        // create new user profile 
        void create_new_user () {
            cout << "Enter name: \n";
            cin >> player_name;

            cout << "Enter password, mininum length is 4: \n";
            cin >> password;

            ofstream database;
            database.open("dataBase.txt", ios::app);

            database << player_name << "," << password << ",";
            database.close();

            cout << "\n" <<  player_name << " created successfully.\n";
            cout << "\n\t...Game initializing. Please wait...\n\n";
            chapter_1 chp1;
            chp1.start_chapter();
        }

        // Authenticate an existing user
        void player_login () {
            
            cout << "\n\t\tEnter username: \n";
            cin >> player_name;

            ifstream database;
            database.open("dataBase.txt");
            int count = 0;
            int user_id;
            bool verified_username = false;

            // check username 
            while (getline(database, line_string, ',')) {
                userdata[count] = line_string;
                if (line_string == player_name && count % 2 == 0) {
                    user_id = count;
                    verified_username = true;
                }
                count ++;
            }

            // check password
            if (verified_username) {
                cout << "\n\t\tEnter password\n";
                cin >> password;

                if (userdata[user_id+1] == password) {
                    cout << "\n\t\t...Authenticated...\n" << endl;
                    cout << "\n\t...Game initializing. Please wait...\n\n";
                    check_for_progres();
                }
                else {
                    cout << "\n\t\t\a...Invalid credentials...\n\n"; 
                }
                database.close();
                
            }
            else{
                cout << "\n\t\t\a...No record in database...\n\n";
            }
            this->check_player_status();
        }

        void list_all_players () {
            for (int z=0; z<10; z+=2)
                cout << userdata[z] << "\t" << endl;
        }

        void check_for_progres () {
            bool fetch_progress_state = false;
            ifstream quitlog;
            quitlog.open("quitSheet.txt");
            int count = 0;
            int log_id;

            // check username 
            while (getline(quitlog, log_string, ',')) {
                log_data[count] = log_string;
                if (log_string == this->player_name && count % 2 == 0) {
                    log_id = count;
                    fetch_progress_state = true;
                    cout << log_data[log_id];
                }
                count ++;
            }
            if (fetch_progress_state) {
                cout << "\n\t\t...Starting game from\n";
            }
            else{
                cout << "\n\t\t\a...No user progress data found..." << endl;
                chapter_1 ch1;
                ofstream quitlog;

                quitlog.open("quitSheet.txt", ios::app);
                quitlog << player_name << ",";
                cout << player_name;
                quitlog.close();

                ch1.start_chapter();
            }
        }
        
};



#endif // Profiles

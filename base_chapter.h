#if !defined(base_chapter)
#define base_chapter


#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

class base{

    protected:
        char response;
        bool start = true;
        string chapter_name;
    
    public:
        base () {
            cout << "\n\t\t\t\t\t...---------------------...\n" ;
            cout << "\n\t\t\t\t\t...Lost in the Wilderness...\n";
            cout << "\n\t\t\t\t\t...---------------------...\n" ;
            cout << "\n\t\tYou are a young adventurer who set out on a journey to explore a vast and mysterious wilderness. ";
            cout << "\n\t\tAs you hike through the dense forest, you suddenly realize that you have lost your way. "; 
            cout << "\n\t\tNight is approaching fast, and you have no idea where you are or how to get back on track.";
            cout << "\n\t\tYou must rely on your wits and survival skills to find your way back home.\n";
        }

        void start_chapter () {
            cout << "\n\t\t...Starting chapter..." << this->chapter_name << endl;
        }

        void save_progress () {
            ofstream quitlog;
            quitlog.open("quitSheet.txt", ios::app);
            quitlog << this->chapter_name << ",";
            quitlog.close(); 

            cout << "\n\t\tYou progress has been saved. Thanks for playing...\n";
            start = false;
        }

        void re_prompt_user () {
            cout << "\t\t!!!!Read carefully\n";
        }

        void end_chapter () {
            save_progress();
            cout << "\n\t\t...End of Chapter..." << this->chapter_name << endl;
            cout << "\n\n\t\t...Good. You have made it this far." << endl;
            exit(3);
        }
            
        
    
};

#endif // Chapter2

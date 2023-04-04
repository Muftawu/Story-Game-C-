#if !defined(Chapter1)
#define Chapter1

#include <iostream>
#include <string.h>
#include <stdlib.h>

// include base chapter class
#include "base_chapter.h"
#include "player_profile.h"

using namespace std;// #include "player_profile.h"

class chapter_1: public base {
    
    public:       
        void start_chapter () {
            chapter_name = "Survival Mode";

            cout << "\n\t\tOption1:  Stay where you are and build a shelter for the night.";
            cout << "\n\t\tOption2:  Follow the river downstream in the hopes of finding civilization.";
            cout << "\n\t\tOption3:  Climb a nearby tree to get a better view of your surroundings.";
            cout << "\n\t\tOption4:  Light a fire to signal for help.\n";

            cout << "\n\t\tSelect an option by pressing 1, 2, 3 or 4" << endl;
            cin >> response;

            while (start) {
                if (response == '1') {
                    cout << "\n\tYou decide to stay where you are and build a shelter for the night";
                    cout << "\n\tYou gather some branches and leaves and start to construct a makeshift shelter";
                    cout << "\n\tAs you work, you hear some rustling in the bushes nearby.";
                    cout << "\n\tYou pause, your heart racing, and wonder if it's a wild animal. What do you do?\n";
                    
                    cout << "\n\tA. Stay still and quiet, hoping the animal will leave.";
                    cout << "\n\tB. Make noise to scare the animal away.";
                    cout << "\n\tC. Investigate the source of the sound\n";

                    cout << "\n\tPress A, B or C to select an option" << endl;
                    cin >> response;

                    while (true) {
                        if (response == 'A' || response == 'a') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else if (response == 'B' || response == 'b') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else if (response == 'C' || response == 'c') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else {
                            cout << "\t\t!!!Read carefully\n";
                        }
                        cin >> response;
                        }
                        start = false;
                        break;
                    }
            

                else if (response == '2') {
                    cout << "\n\tYou decide to follow the river downstream in the hopes of finding civilization.";
                    cout << "\n\tYou walk along the riverbank, keeping an eye out for any signs of human activity.";
                    cout << "\n\tAfter a while, you come across a clearing with a small cabin. Do you:";

                    cout << "\n\tA. Approach the cabin and knock on the door.";
                    cout << "\n\tB. Keep walking downstream. ";
                    cout << "\n\tC. Investigate the cabin from a distance.";

                    cout << "Select an option by pressing A, B or C" << endl;
                    cin >> response;

                    while (true) {
                        if (response == 'A' || response == 'a') {
                            cout << "\t\t!!!Pass. \n";
                            break;
                        }
                        else if (response == 'B' || response == 'b') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else if (response == 'C' || response == 'c') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else {
                            cout << "\t\t!!!Read carefully\n";
                        }
                        cin >> response;
                        }
                        start = false;
                        break;
                    }

                else if (response == '3') {
                    cout << "\n\tYou climb a nearby tree to get a better view of your surroundings.";
                    cout << "\n\tFrom up high, you can see a faint glow in the distance. It might be a campfire!";
                    cout << "\n\tDo you: \n";

                    cout << "\n\tA. Climb down and head towards the light";
                    cout << "\n\tB. Stay put and wait for morning.";
                    cout << "\n\tC. Try to shout for help.";

                    cout << "Select an option by entering A, B, or C. \n";
                    cin >> response;

                    while (true) {
                        if (response == 'A' || response == 'a') {
                            cout << "\t\t!!!Pass. \n";
                            break;
                        }
                        else if (response == 'B' || response == 'b') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else if (response == 'C' || response == 'c') {
                            cout << "Pass.\n";
                            break;
                        }
                        else {
                            cout << "\t\t!!!Read carefully\n";
                        }
                        cin >> response;
                        }
                        start = false;
                        break;
                    }
                
                else if (response == '4') {
                    cout << "\n\tYou light a fire to signal for help. You gather some dry twigs and leaves and start a small fire.\n";
                    cout << "\n\tYou hear a helicopter in the distance, but it's too dark for the pilot to see you. Do you:\n";

                    cout << "\n\tDo you: \n";
                    cout << "\n\tA. Keep the fire going and hope the helicopter comes back in the morning.";
                    cout << "\n\tB. Try to make your way towards the helicopter";
                    cout << "\n\tC. Use the fire to light your way as you try to find your way out of the wilderness.\n";

                    cout << "\n\tSelect an option by pressing A, B or C \n";
                    cin >> response;

                    while (true) {
                        if (response == 'A' || response == 'a') {
                            cout << "\t\t!!!Pass. \n";
                            break;
                        }
                        else if (response == 'B' || response == 'b') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else if (response == 'C' || response == 'c') {
                            cout << "\t\t!!!Pass.\n";
                            break;
                        }
                        else {
                            cout << "\t\t!!!Read carefully\n";
                        }
                        cin >> response;
                        }
                        start = false;
                        break;
                    }
                
                else if (response == 'Q' || response == 'q') {
                    save_progress();
                    break;
                }

                else {
                    re_prompt_user();
                }
                cin >> response;
            }

           end_chapter();
            
        }
};



#endif // Chapter1

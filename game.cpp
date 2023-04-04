#include <iostream>
#include <fstream>
#include <string>

// header file for profiles
#include "player_profile.h"

// header files for game chapters
#include "ch001.h"
#include "ch002.h"
#include "base_chapter.h"


using namespace std;


int main () {
    
    // Game start
    player_profile ppf;
    ppf.check_player_status();

    return 0;
}

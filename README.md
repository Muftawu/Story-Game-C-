This is a story line game implemented in C++ OOP programming paradigm. 

Games works by setting various scenes to the user in text format.
The program prompts the user to select an option in order to 
proceed. 

The course of the game is completely determined by the 
users choice/actions. 


	--------------------------
	PROJECT FILES AND CLASSES
	-------------------------

	CLASSES AND HEADERS 

	- Player Profile Class - [player_profile.h]
		* A class to store the player details. 
		* Stores the username and password into the dataBase.txt file

	- Base Chapter Class - [base_chapter.h]
		* A parent class that initializes the scene.
		* Derived classes from this base class inherit the opening scene
		  and each of them have their own prompts and options.

	DATABASES
		-dataBase.txt
			* The dataBase.txt is used to store user profiles.
			* Stores the username and password separated by a comma

		- quitSheet.txt
			* The database to store progress data 
			* This operation occurs when a user quits or finishes a chapter

	Main Game Script 
		- game.cpp 
	



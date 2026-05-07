// Jessi Lowery Coding 1 Final Assignment
// cl /EHsc main.cpp && main

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    while(true) {
        cout << "What do you want to do?\n";
        cout << "Do you want to: feed, train, listen, or battle?\n";

        getline(cin, input);

        if(input == "feed") {
            cout << "That's yummy!\n";
        }

        else if(input == "train") {
            cout << "Let's get swole!\n";
        }

        else if(input == "listen") {
            cout << "Here are my digits!\n";
        }

        else if(input == "battle") {
            cout << "An enemy challenger!\n";
        }

    

        else {
            cout << "I did not understand that command, please try again.\n";
        }
            
    

        return 0;
    }
    
    
// name a 'critter' (or 'monster', or 'robot', or 'slime', or 'puppy' - whatever you like!)
// feed their critter
// train their critter (chance to increase health or damage)
// listen to their critter (display health, damage, and hunger)
// battle other critters, with options to
// attack
// heal
// run away
}

// Your program needs the following features

// a randomized list of names must be read from a separate text file
// setters and getters must be implemented for all class variables (class variables should be private)
// critter class must have a constructor
// each battle or training adds 1 to the critter's hunger.
// if their hunger is greater than 10, they can't train or battle.
// if their hunger is greater than 5, they'll mention it each time they train or battle
// Jessi Lowery
// let's create a list of favorites

// cl /EHsc favs.cpp && favs

#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>



using namespace std;

int main() {
    vector<string> favGames;
    string input;
    while(true) {
        cout << "What would you like to do?\n";
        cout <<  "You can 'add', 'edit', 'remove', 'show', or 'quit'.\n";

        
        getline(cin, input);

        if(input == "quit") {
            cout << "Thanks for playing.\n";
            break;
        }
       
        else if(input == "add") {
                cout << "Please add your favorite games: ";
                getline(cin, input);

                favGames.push_back(input);
            

            
            
        }

        else if(input == "show") {
            cout << "\nHere are your favorite Games:\n";
            for(vector<string>::iterator iter = favGames.begin(); iter != favGames.end(); iter ++) {
                cout << *iter << endl;
            }
        }

        else {
            cout << "I don't recognize that input.\n";
        }

    }
}
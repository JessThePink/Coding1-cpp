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
        } // end of "quit"
       
        else if(input == "add") {
                cout << "\nPlease add your favorite games: ";
                getline(cin, input);

                favGames.push_back(input);
        
        } // end of "add"

        else if(input == "show") {
            cout << "\nHere are your favorite Games:\n";
            for(vector<string>::iterator iter = favGames.begin(); iter != favGames.end(); iter ++) {
                cout << *iter << endl;
            }
        } // end of "show"






        // don't know how to do this

        // else if(input == "edit") {
        //     cout << "\nHere are your favorite Games:\n";
        //     for(vector<string>::iterator iter = favGames.begin(); iter != favGames.end(); iter ++) {
        //         cout << *iter << endl;
        //     }
        //     cout << "\nPlease choose a Game to edit!\n";

        //     chosenGame = find(favGames.begin(), favGames.end(), input);

        //     if(chosenGame != favGames.end()) {

        //     cout << "Let's edit " << *chosenGame << " today!\n";
        //     }
        //     else {  
        //         cout << "I couldn't find " << input << " in your games.\n";
        //     }
        //         cout << "Let's change " << *chosenGame << " to something else!\n";
        //         cin >> input;
        //         *chosenGame = input;

        //         cout << "New game is now " << *chosenGame << ".\n";
        // } // end of "edit"




        else if(input == "remove") { 
             favGames.sort(favGames.begin(), favGames.end());
            for(int i = 0; i < favGames.size(); i++) {
                cout << favGames[i] << endl;
            }

           
            cout << "What game should we remove from favs?\n";
            string input;
            cin >> input;

            auto iter = find(favGames.begin(), favGames.end(), input);

            if(iter != favGames.end()) {
                cout << "Found it!\n";
                // remove an element from the vector
                // at the place the iterator is pointing at. 
                favGames.erase(iter);
                
            }
            else {
                cout << "I could not find that Game in favs.\n";
            }
        
        } // end of "remove""
        


        else {
            cout << "I don't recognize that input.\n";
        }
    }
}
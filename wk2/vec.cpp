// Jessi Lowery Coding 1 Spring 2026
// Vectors, iterators, and algorithms

// cl /EHsc vec.cpp
// vec

// cl /EHsc vec.cpp && vec

#include <iostream>
#include <string>
#include <vector>       // for vectors
#include <algorithm>

using namespace std;

int main() {
    cout << "\nLet's learn about Vectors!\n";

    // for chapter 4
    vector<string> favs = {"Zelda", "Mario", "Metroid"};

    do { 

        int chapter = 0;
        cout << "What program would you like to run?\n";
        cout << "\nPress 1 for Vectors.\n";
        cout << "Press 2 for push_back() and pop_back().\n";
        cout << "Press 3 for algorithms\n";
        cout << "Press 4 for removing.\n";

        cin >> chapter;

        if(chapter == 1) {
            // collection initializer
            vector<string> names = {"Finn",
                                    "Jake", 
                                    "Bubblegum",   
                                    "Marceline", 
                                    "Shelby"};

            cout << "There are " << names.size() << " in the vector.\n";                        
            cout << "Here are your names:\n";

            for(int i = 0; i < names.size(); i++) {
                cout << i + 1 << ". " << names[i] << "\n";
            }

            cout << "the first name in the vector is " << *(names.begin()) << ".\n";

            // creating our first iterator. it's a pointer to an element in a vector.
            vector<string>::iterator iter;
                        
            iter = names.begin() +2;

            // dereference the iter with an asterisk at the beginning.
            // what's with that word "dereference"? a pointer can be thought of as a nickname
            // a "reference" to something else. when we de-reference it, we get the value
            // that is at that point
            cout << "iter is pointing at " << *iter << ".\n";


        } // end of chapter 1
        if(chapter == 2) {
            cout << "Let's use push_back() and pop_back().\n";

            vector<string> favMovies;

            while(favMovies.size() < 3) {
                cout << "please add a favorite movie: ";
                string input;
                cin >> input;

                favMovies.push_back(input);
            }

            cout << "\nHere are your favorite movies:\n\n";
            for(vector<string>::iterator iter = favMovies.begin(); iter != favMovies.end(); iter ++) {
                cout << *iter << endl;
            }
            
        } // end of chapter 2
        if(chapter == 3) {
            vector<string> friends;

            friends.push_back("Joey");
            friends.push_back("Monica");
            friends.push_back("Pheobe");
            friends.push_back("Ross");
            friends.push_back("Chandler");
            friends.push_back("Rachel");

            cout << "Here are your friends:\n\n"; 
            for(int i = 0; i < friends.size(); i ++) {
                cout << friends[i] << ".\n";
            }

            cout << "\nPlease choose a friend to go visit:\n";
            vector<string>::iterator chosenFriend = friends.begin();

            string input;
            cin >> input; 

            chosenFriend = find(friends.begin(), friends.end(), input);

            if(chosenFriend != friends.end()) {
                // displays the name of chosenFriend if we found one
                cout << "Let's talk to " << *chosenFriend << " today!\n";
            }
            else {  
                cout << "I couldn't find " << input << " in your friends.\n";
            }
                cout << "Let's give " << *chosenFriend << " a new name!\n";
                cin >> input;
                *chosenFriend = input;

                cout << "Their names is now " << *chosenFriend << ".\n";
            
            else {
            cout << chapter << " isn't one of the options.\n";
            }
            
        } // end of chapter 3
        if(chapter == 4) {
            cout << "Let's remove an element from a global vector. (well, global-ish)\n";

            // create a vector of strings at the top of main()
            // show favs

            favs.sort(favs.begin(), favs.end());
            for(int i = 0; i < favs.size(); i++) {
                cout << favs[i] << endl;
            }

            // use cin to find the name to remove.
            cout << "What name should we remove from favs?\n";
            string input;
            cin >> input;

            auto iter = find(favs.begin(), favs.end(), input);

            if(iter != favs.end()) {
                cout << "Found it!\n";
                // remove an element from the vector
                // at the place the iterator is pointing at. 
                favs.erase(iter);
                
            }
            else {
                cout << "I could not find that name in favs.\n";
            }
            // use vec.erase(iter) to remove a name.
        } // end of chapter 4

    } while (true);
}
// Jessi Lowery
// Arrays, Loops, and Vectors
    // for and foreach Loops
    // algorithms?
// cl /EHsc arr.cpp


#include <iostream>
#include <string>
#include <cstdlib>          //for rand and srand
#include <ctime>            // for srand(time(0))

using namespace std;

int main() {
    srand(time(0));

        cout << "\nLet's learn about arrays!\n";


        // arrays in C++ have a defined size
        // arrays don't have a way to count how many things are in them.


        cout << "\nCreating an array of high scores.\n";

        //declaring a new integer array with a size of 5
        int highScores[5];

        highScores[0] = 4550;       // the first high score is at index 0
        highScores[1] = 2215;
        highScores[4] = 11;         // the last high score is at indeex 4

        cout << "The first score is " << highScores[0] << ".\n";

        int index = 0;
        while(index < 5) {
                cout << highScores[index] << "\n";
                index++;
        }

        cout << "Let's learn about for loops to show the scores again.\n";

        // for (initialization; test; action)
        // for (create the variable; how long do we loop for; how are we counting)
        for(int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << highScores[i] << "\n";
        }


        // let's create a list of names and let the user choose the names.
        // we'll create the string array 
        string names[10];

        // we'll create the input string variable 
        string input;

       index = 0;       // reset index to 0;
        // we'll start a while loop (or a do-while)
        while(index < 10) {
        // ask the player for a name (or to type 'done')
        cout << "What name would you ike to add, or type 'done' to stop. \n";
        cin >> input;

        if(input == "done") {
            cout << "We are done entering names.\n";
            break;          // this gets us out of the loop
        }

        // add the name to the array of names
        names[index++] = input;
      
        // display the list of names
    }
    
    cout << "Here are your names:\n";
    for(int i = 0; i < 10; i++) {
        if (names[i] == "") {
                continue;       // skip lines that are blank
        }
        cout << i + 1 << ". " << names[i] << "\n";
    }


    // pick a random name and save it
   

    string name = names[rand() % index];

    cout << "Let's talk about " << name << ".\n";

    // use a switch statement to pick one random response
    switch(rand() % 4) {
            case 0:
                cout << "I love " << name << ".\n";
                break;
            case 1:
                cout << "I like " << name << ".\n";
                break;
            case 2:
                cout << "I don't like " << name << ".\n";
                break;
            case 3: 
                cout << "I loathe " << name << ".\n";
                break;
    }

        return 0;
}
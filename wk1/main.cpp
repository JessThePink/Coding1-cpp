// Jessi Lowery Coding 1 Spring 2026
// using VS Codium and it's integrated terminal
// to Learn about variables and logic

// compile in Developer Command Prompt with
// 'cl EHsc main.cpp'

#include <iostream>
using namespace std;

int main() {
    // '\n' or 'backslash n' makes a new line.
    cout << "\n\n\nAll variables and logic!\n\n\n";

    // declaring a variable means it exists!
    // defining a variable means giving it a value.
    int playerAge = -1;             // integeres are whole numbers
    string playerName = "Bobby";    // strings are for words/letters
    float playerHeight = 1.8f;      // height in meters
    bool playAgain = true;          // booleans are true or false

    // an if statement is a branch in unreal engine
    // if(test is true) do this thing. otherwise....skip it!
    if(playerAge == -1) {
            cout << "How old are you?\n";
            cin >> playerAge;

            if(playerAge < 13) {
                    cout << "I'm sorry, this game is too cool for you.\n";
            }
            else {
                cout << "Wow! That's old!\n";

            }
    }

    // can I test to see if the player name is "bobby" and if it is
    // ask the player what their name is, and assign their response 
    // to playerName

    if (playerName == "Bobby") {
        cout << "Is your name Bobby?\n(yes/no) ";
        string input;
        cin >> input;

        if(input == "yes") {
            cout << "Well, that's convinent!\n";

        }
        else {
                cout << "What is your name?\n";
            cin >> playerName;    
            }
        
        cout << "Hello " << playerName << ".\n";

    bool godMode = false;

    if(playerAge == 37 && playerName == "Brian") {
    cout << "Hello bot. God mode is enabled.\n";
    godMode = true;
}

    if(playAgain) {
    cout << "Let's play a game!\n";

}

    }

    return 0;
} // end of main ()
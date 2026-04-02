// Jessi Lowery Coding 1 Spring 2026
// Switch, random numbers, and while loops.

// task is to create the rest of the code to say "Random Numbers!"
// then run the program.
// cl EHsc rand.cpp 


#include <iostream>
#include <random>             // for random numbers
#include <ctime>            // for seeding the random numbers.
using namespace std;

int main() {
    srand(time(0));         // seed the random number generator with the current time. 
    cout << "\n\nRandom Numbers!\n\n";

    cout << "Our first random number is " << rand() << ".\n";

    cout << "\nHere are ten random numbers:\n\n";

    int counter = 0;
    while(counter++ < 10) {
            cout << (rand()  % 10) + 1 << endl;
    }


    // guess the number game
    // the computer picks a ranodm number between 1 and 10 (inclusive)
    int theNumber = rand() % 10 + 1
    // the computer asks the player to guess that random number
    int guess = -1;
    // the player guesses
    cin >> guess; 
    // the computer evaluates whether the guess is
        // correct
        if(theNumber == guess) {
            // congratulate the player, end the game
            cout << "You guessed it!\n";
            return 0;
        }
        // too high
        else if(guess > theNumber) {
            // tell the player "too high!"
            cout << "That guess is too high!n\";
        }
        // too low
        else if(guess < theNumber) {
            // tell the player "too low!"
            cout << "That guess is too low!\n";
        }
    // Let the player guess again, if it was incorrect


    return 0;
}
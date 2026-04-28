// Jessi Lowery Coding 1 week 15
// cl /EHsc main.cpp && main


#include <iostream>
#include <string> 
using namespace std;


// classes are custom variable types that have their own 
// variables and functions

// constructors
// getters and setter (privacy)
// instances
// inheritance (not today)



// this is my new variable type
class robot {
public:
    // data members
    string name;
    int charge;
    int boredom;


public:
    // a constructor accepts variables and sets up the robot when it is created.
    // a constructor function needs no return type, and must be named same as class
    robot(string givenName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom = givenBoredom;
        status();
    }

    // overload the constructor
    robot() {
        name = "bot";
        charge = 10;
        boredom = 0;
        status();
    }

    // member functions
    void status() {
        cout << "My name is " << name << ", my charge is " << charge << ".\n";
        cout << "I am ";

        if(boredom < 5) {
            cout << "happy";
        }
        else if(boredom < 10) {
            cout << "bored";
        }
        else if(boredom < 15) {
            cout << "frustrated";
        }
        else {
            cout << "ENRAGED";

            cout << ".\n\n";
        }
    }

    void newDay() {
        boredom += 2;
    }

    void play() {
        boredom -= 1;
    }

    void setName(string givenName) {
        if(givenName.size() <= 5) {
            name = givenName;
        }
        else{
            cout << "error: name is too long.\n";
        }
    }

    void setCharge(int givenCharge) {
        if(givenCharge < 0) {           // clamping value to not lower than 0
            givenCharge = 0;
        }
        else if(givenCharge > 100) {    // clamping is not higher than 100
            givenCharge = 100;
        }
        else {
            charge = givenCharge;
        }
    }

    // combined get AND set, using the clamping from setCharge.
    void changeCharge(by amount) {
        setCharge(charge += amount);
    }

    // getters
    string getName() {
        return name;
    }
    int getCharge() {
        return charge;
    }
    int getBoredom() {
        return boredom;
    }
};                  // don't forget the semi-colon at the end


int main() {
    cout << "hi\n";

    // creating two new variables of the type 'robot'
    robot artoo("R2-D2", 45, 10);
    artoo.name = "R2-D2";
    artoo.charge = 45;
    artoo.boredom = 10;

    robot threepio;
    threepio.setName("C-3P0");      // using setter now
    threepio.setCharge(2);

    cout << "Here's artoo: " << artoo.name << ".\n";

    cout << artoo.name << " notices that " << threepio.name;
    cout << " doesn't have much battery left. Let's fix that\n";

    while(threepio.charge < 15) {
        artoo.charge -=1;           // subtract 1 from charge
        threepio.charge += 1;       // add 1 to charge
    }

    cout << "threepio's charge is now " << threepio.charge << ".\n";
    cout << "artoo's charge is now " << artoo.charge << ".\n";

    // using member functions
    artoo.status();
    threepio.status();

    string input = "";
    int turns = 0;

    while(true) {
        while(turns < 3) {
        cout << "What would you like to do?\n";
        getline(cin, input);

        if(input == "play") {
            cout << "Let's play with " << artoo.name << "!\n";
            artoo.play();
        }
        else if(input == "status") {
            artoo.status();
        }
        turns++;
    

    turns = 0;
    cout << "Do you want to keep playing?\n";
    getline(cin, input);

    if(input == "no") {
        break;
    }
    artoo.newDay();
}
    return 0;
}

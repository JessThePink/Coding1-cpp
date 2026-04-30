// Jessi Lowery Coding 1 week 15
// class inheritance and header files
// cl /EHsc slime.cpp && slime


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>



using namespace std;

// can we build a vector of slimes
// can we get the slimes to fight each other
// can we build boss slimes

// global vector of names, any function can use this
vector<string> slimeNames = {"BillyBob", "Cheryl", "Steven", "Rebecca", "Felix"};



class baseSlime {
public:
    string name;
    int health;
    int damage;
    
    // default constructor
    baseSlime() {
        // get a random name between numbers
        name = slimeNames[rand() % slimeNames.size()] + " Slime";
        health = rand() % 5 + 5;
        damage = rand() % 6 + 3;
    }


    void hello() {
        cout << "My name is " << name << ".\nI have " << health;
        cout << " health and " << damage << " damage.\n";
    }

    bool attack(baseSlime& opponent) {
        opponent.health -= damage;
        cout << name << " attacks " << opponent.name << "!\n";

        // did this attack defeat the opponent?
        if(opponent.health <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    // step 1 = who attacks first
    // step 2 = fighter A attacks fighter B
    // step 3 = (if fighter B is still alive) fighter B attacks fighter A 


};


int main() {
    srand(time(0));
    cout << "Let's make some slimes fight!\n";

    baseSlime ricky;
    ricky.name = "Richard Slime";
    ricky.health = 10;
    ricky.damage = 4;

    baseSlime beth;
    beth.name = "Elizabeth Slime";
    beth.health = 7;
    beth.damage = 6;

    ricky.hello();
    beth.hello();

    cout << "Creating our gloop of slimes...\n";
    vector<baseSlime> gloop(6);

    for(int i = 0; i < gloop.size(); i++) {
        gloop[i].hello();
        cout << "\n\n";
    }

    cout << "Let's have Ricky and Elizabeth fight.\n";


    baseSlime temp, temp2;
    baseSlime& fighterA = temp;
    baseSlime& fighterB = temp2 ;
    

    if(rand() % 2 == 0) {
        cout << "Ricky goes first!\n";
        fighterA = ricky;
        fighterB = beth;
    }
    else {
        cout << "Beth goes first!\n";
        fighterA = beth;
        fighterB = ricky;
    }
    // the thunderdome
    while(fighterA.health > 0 && fighterB.health > 0) {
        // fighter A punches
        if(fighterA.attack(fighterB)) {
            cout << fighterB.name << " has been defeated!\n";
        }
        // fighter B punches
        else {
            if(fighterB.attack(fighterA)) {
                cout << fighterA.name << " has been defeated!\n";
            }
        }

    }

    




    return 0;
}
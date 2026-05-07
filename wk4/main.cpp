// Jessi Lowery Coding 1 Week 14a
// Writing to and reading from files
// 
// cl /EHsc main.cpp && main

#include <iostream>
#include <fstream>              // file stream, includes istream and ostream
#include <string>               // for getline()
#include <vector>

using namespace std;


// build a new function
// return type = void, name = writeFile(input, path)
void writeFile(string input, string path = "save.txt") {
    ofstream file(path);            // open the file at the specified path
    file << input;
    file.close();
}

// for vectors
void writeFile(vector<string>& vec, string path = "vector.txt") {
    ofstream file(path);
    for(int i = 0; i < vec.size(); i++) {
        file << vec[i] << endl;
    }
    file.close();
}


void readFile(string path = "save.txt") {
    string line;                            // will sotre each line of text
    ifstream file(path);                    // try to open the file at the path
    if(file.is_open()) {                    // check to see if the file is open
        while(getline(file, line)) {        // as long as there are new  lines
        cout << line << endl;               // output the line to the console
        }
    }
    else {
        cout << "File not found.\n";
    }
    file.close();                           // don't forget to close the file.
}

void readFile(vector<string>& vec, string path = "vector.txt") {
    vec.clear();            // makes sure the vector is empty
    string line;
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            vec.push_back(line);
        }
    }
    file.close();
}

int main() {
    cout << "\nLet's do some file operations!\n";


    // // create a file
    // // name it something
    // ofstream file("save.txt");      // output file stream
    // // add some text                // this can be combined
    // file << "Here is some txt.\n";
    // file << "This should appear on the second line.\n";
    // // close the file
    // file.close();
    // // run the program
    // // see if it exists

    // // call writeFile here and send it both lines
    writeFile("Hi\nHow are you\nI'm good thanks");


    // string line;            // create a variable to hold each line of text
    // ifstream readFile("save.txt");          // open the save.txt file.
    // if(readFile.is_open()) {                    // if the file could be opened
    //     while(getline(readFile, line)) {              // as long as there are lines
    //         cout << line << endl;
    
    readFile();

    // create the vector of names
    vector<string> names = {"Harry", "Hermione", "Ron"};
    // "load" the names from the file (with readFile())
    readFile(names, "names.txt");
    // displaying the names in the vector
    for(int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }
    


    // add more names to the vector
    // "save" the vector to a file
    writeFile(names, "names.txt");              // create a new file with names

    







    return 0;
}
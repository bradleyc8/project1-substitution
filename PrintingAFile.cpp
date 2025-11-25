#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
        
        string filename;
        cin >> filename;
        ifstream inputFile;
        inputFile.open(filename);
        if(!inputFile.is_open()){
          cout << "File could not be opened" << endl;
          return(0);
        }

        while(!inputFile.eof()){
          string line;
          inputFile >> line;
          cout << line << endl;
        }
        inputFile.close();
        cout << "Checkpoint" << endl; 

}


#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
        
        string filename;
		cout << "What is the file's name?: ";
        cin >> filename;
        ifstream inputFile;
        inputFile.open(filename);

        if(!inputFile.is_open()){
          cout << "File could not be opened" << endl;
          return(0);
        }
	
		// Was just using to see where the code was messing u
		//cout << "Checkpoint 1" << endl;
	
		string line;	
        while(getline(inputFile, line)){
          cout << line << endl;
        }

        inputFile.close();
        //cout << "Checkpoint 2" << endl; 

}


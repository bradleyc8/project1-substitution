#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
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
	
<<<<<<< HEAD
       while(getline(inputFile, line)){
		string token;
	  	streamstring >> line;
		while(ss >> token){
			cout << token << endl;
		} 
=======
		string line;	
        while(getline(inputFile, line)){
          cout << line << endl;
>>>>>>> 562399f45abb4eb076100ab580875ab6473b9244
        }

        inputFile.close();
        //cout << "Checkpoint 2" << endl; 

}


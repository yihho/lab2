#include <iostream>
#include <fstream>
#include <string>
#include "BMI.h"
using namespace std;

int main(){
    ifstream inFile("inflie", ios::in);
    if(!inFile){
	cerr << "Failed opening" << endl;
        exit(1);
    }  
    getline(inFile, headline);
    ofstream outFile("outFile",ios::out);
    if(!outFile){
	cerr << "Failed opening" << endl;
	exit(1);
    }
    BMI;
}

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BMI.h"
using namespace std;

int main(){
    fstream file1, file2;
    BMIcategory human;
    
    file1.open("inFile.txt", ios::in);
    if(!file1){
	cerr << "Failed opening" << endl;
        exit(1);
    }  
   
    file2.open("outFile.txt", ios::out);
    if(!file2){
	cerr << "Failed opening" << endl;
	exit(1);
    }

    while(cin >> human.height >> human.mass)
    {
        float B;
	B = human.value(human.height, human.mass); 
        file2 << B << human.category(B) << endl;
    }

    file1.close();
    file2.close();
}

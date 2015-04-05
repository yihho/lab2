#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main(){
    fstream file1, file2;
    float H, M;
    BMIcategory human;
    
    file1.open("inFile", ios::in);
    if(!file1){
	cerr << "Failed opening" << endl;
        exit(1);
    }  
   
    file2.open("outFile", ios::out);
    if(!file2){
	cerr << "Failed opening" << endl;
	exit(1);
    }

    while(file1 >> H >> M)
    {
        float B;
	B = human.value(H, M); 
        file2 << fixed << setprecision(2) << B << ' ' << human.category(B) << endl;
    }

    file1.close();
    file2.close();
}

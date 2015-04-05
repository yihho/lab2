#include <iostream>
#include <string>
using namespace std;

class BMIcategory{
    public:
        void setBMI(float H, float M);
	float getBMI();
	float value(float Ht, float Ms);
	string category(float B);
    private:
        float height;
        float mass;
        float BMI;
};

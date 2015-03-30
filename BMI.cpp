#include <iostream>
#include <string>
using namespace std;

class BMIcategroy{
    public:
        void setBMI(height, mass){
	    BMI = mass * mass / height / 100;
	}
	float getBMI(){
	    return BMI;
	}
	float value(height, mass)
	{
   	    BMI = mass * mass / height / 100;
	    return BMI;
        }

	string category(BMI)
	{
	    string a, b, c, d, e, f, g, h;
	    if (BMI < 15){
		a = "Very severely underweight";
		return a;}
	    else if (BMI > 15.0 && BMI < 16.0){
		b = "Severely underweight";
		return b;}
	    else if (BMI > 16.0 && BMI < 18.5){
		c = "Underweight";
		return c;}
	    else if (BMI > 18.5 && BMI < 25){
		d = "Normal";
		return d;}
	    else if (BMI > 25 && BMI < 30){
		e = "Overweight";
		return e;}
            else if (BMI > 30 && BMI < 35){
		f = "Obese Class I (Moderately obese)";
		return f;}
	    else if (BMI > 35 && BMI < 40){
		g = "Obese Class II (Severely obese)";
		return g;}
	    else if (BMI >= 40){
		h = "Obese Class III (Very severely obese)";
		return h;}
	}
    private:
        float height;
        float mass;
        float BMI;
}

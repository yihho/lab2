#include <iostream>
#include <string>
#include "BMI.h"

        void BMIcategory::setBMI(float H, float M){
	    BMI = M / H / H * 10000;
	}
	float BMIcategory::getBMI(){
	    return BMI;
	}
	float BMIcategory::value(float Ht, float Ms)
	{
   	    BMI = Ms / Ht / Ht *10000;
	    return BMI;
        }

	string BMIcategory::category(float B)
	{
	    string a, b, c, d, e, f, g, h;
	    if (B < 15){
		a = "Very severely underweight";
		return a;}
	    else if (B > 15.0 && BMI < 16.0){
		b = "Severely underweight";
		return b;}
	    else if (B > 16.0 && BMI < 18.5){
		c = "Underweight";
		return c;}
	    else if (B > 18.5 && BMI < 25){
		d = "Normal";
		return d;}
	    else if (B > 25 && BMI < 30){
		e = "Overweight";
		return e;}
            else if (B > 30 && BMI < 35){
		f = "Obese Class I (Moderately obese)";
		return f;}
	    else if (B > 35 && BMI < 40){
		g = "Obese Class II (Severely obese)";
		return g;}
	    else if (B >= 40){
		h = "Obese Class III (Very severely obese)";
		return h;}
	}

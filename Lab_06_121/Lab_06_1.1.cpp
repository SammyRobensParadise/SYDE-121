//the purpose of this program is to calculate the roots of a quadratic equation given user inputs for a,b,c in ax^2+bx+c

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

void input_data(double &a, double &b, double &c);
//this function reads in a checks the user data
// INPUT: a,b,c
// NO OUTPUT
double quad_form( double a, double b, double c, double &x1, double &x2, double &discrim);
//this function calculates the quadratic formula
// INPUT: a,b,c
// VARIABLES : a,b,c,x1,x2,discriminant=>discrim
// OUTPUT: X1 and X2
void ans( double x1,double x2);
//this function outputs the calculated answers if the roots are real
void ans_disc(double &x1, double &x2, double &discrim, double &b, double &base, double &a, double &real, double &im);
//this funciton outputs the calculated answers if the roots are complex
int main() {
	//declaring variables
	double a = 0.0; //input for ax^2
	double b = 0.0; //input for bx
	double c = 0.0; //input for c
	double x1 = 0.0; //root 1
	double x2 = 0.0; //root 2
	double discrim =0.0; //discriminant
	double base = 0.0; //base value for quadratic formula
	double real = 0.0; //real part of complex root
	double im = 0.0; //imaginary part of complex root
	//functions 
	input_data(a, b, c);
	quad_form(a, b, c, x1, x2, discrim);
	if (discrim >=0) {//if statement checking to see which funciton to use to display the roots 
		ans(x1,x2); //function used if roots are real
	} else {
		ans_disc(x1,x2,discrim,b,base,a,real,im);//function used if roots are imaginary
	}
	cout<< "the program has exicuted sucessfully\n";
	return 0;
}
//end of program

void input_data(double &a, double &b, double &c) {
	cout<< "enter the values of a,b and c to calculate the roots of the quadratic equation \n";
	cout<< "a,b and c are the constants in the expression ax^2 + bx + c = 0\n";
	cout<< "a=";
	cin>> a;
	cout<< "b=";
	cin>> b;
	cout<< "c=";
	cin>> c;
	if( b==0 && c==0) {
		cout<< "x = 0"<< endl;
		exit(0);
	}
}
double quad_form( double a, double b, double c, double &x1, double &x2, double &discrim) {
	discrim = (pow(b,2)-(4*a*c)); //checking to ensure that the discriminant is real for quadratic formula calculation
	if( discrim>=0) {
		//quadratic formula
		x1 = (-1*b + sqrt(discrim))/(2*a);
		x2 = (-1*b - sqrt(discrim))/(2*a);
		return 0;
	}
}

void ans( double x1,double x2) {
	cout<< "x = " << x1 << "  or x =  "<< x2 << endl;

}
void ans_disc(double &x1, double &x2, double &discrim, double &b, double &base, double &a, double &real, double &im) {
	b = -1*b; //formatting b
	base = 2*a; //creating  base
	discrim = -1*discrim; //formating discriminant 
	real = b/base; //real part of root
	im = (sqrt(discrim))/base; //imaginary part of root
	cout<< "x =  " << real << " + " << im <<"i"<< " 	or	   " << "x = " << real << " - " << im << "i"<< endl; //display
	cout<< "when 'i' is an imaginary number\n";
	cout<< "NOTICE: this is a complex root of a quadratic equation\n";
}

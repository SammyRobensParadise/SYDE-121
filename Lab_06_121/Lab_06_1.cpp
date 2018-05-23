//the purpose of this program is to calculate the quadratic formula given user inputs

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

//BUGS TO FIX; CASE WHERE USER ENTERS INVALID NUMBERS,MAKING EQTN NOT QUADRATIC OR CASE WHERE USER ENTERS 1,0,0 OR X^2
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
//this function outputs the calculated answers
void ans_disc(double &x1, double &x2, double &discrim, double &b, double &base, double &a);
int main() {
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;
	double discrim =0.0;
	double base = 0.0;

	input_data(a, b, c);
	quad_form(a, b, c, x1, x2, discrim);
	if (discrim >=0) {
		ans(x1,x2);
	} else {
		ans_disc(x1,x2,discrim,b,base,a);
	}
	cout<< "the program has exicuted sucessfully\n";
	return 0;
}

void input_data(double &a, double &b, double &c) {
	cout<< "enter the values of a,b and c to calculate the roots of the quadratic equation \n";
	cout<< "a,b and c are the constants in the expression ax^2 + bx + c = 0\n";
	cout<< "a=";
	cin>> a;
	cout<< "b=";
	cin>> b;
	cout<< "c=";
	cin>> c;
}
double quad_form( double a, double b, double c, double &x1, double &x2, double &discrim) {
	discrim = (pow(b,2)-(4*a*c));
	if( discrim>=0) {
		x1 = (-1*b + sqrt(discrim))/(2*a);
		x2 = (-1*b - sqrt(discrim))/(2*a);
		return 0;
	}
}

void ans( double x1,double x2) {
	cout<< "x = " << x1 << "  or x =  "<< x2 << endl;

}
void ans_disc(double &x1, double &x2, double &discrim, double &b, double &base, double &a) {
	b = -1*b;
	base = 2*a;
	discrim = -1*discrim;
	cout<<"x = ("<<b<<" + "<< "i*sqrt("<<discrim<<"))/"<<base<< "  or x = ("<<b<<" - "<<"i*sqrt("<<discrim<<"))/"<<base << endl;
}

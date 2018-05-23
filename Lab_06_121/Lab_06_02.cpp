#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

void intro_msg();
//intro message
void input_sides(double &a, double &b, double &c);
//this function allows the user to input the side lengths of the triangle
// INPUT: a,b,c
void data_check( double &a,  double &b,  double &c);
//this function checks that the data entered is correct
// INPUT: a.b,c
// fALSE IF: data is incorrect, user returns to data entry
double cos_law( double a, double b,  double c, double &theta);
//this function calculates the angle in radians
// INPUT: a,b,c
// OUTPUT: theta in radians
double rad_conv_deg(double theta, double &ang_deg, const double PI);
//this function converts degrees to radians
//INPUT: value in radians
//OUTPUT: value in degrees
void ang_display( double &ang_deg);
//this function displays the angle in degrees
int main() {
	double a = 0.0; //side length a
	double b = 0.0; //side length b
	double c = 0.0; //side length c
	double ang_deg = 0.0; //angle in degrees
	double theta = 0.0; //angle in radians
	const double PI = 4*atan(1); //constant for Pi
//functions
	intro_msg();
	input_sides(a,b,c);
	data_check( a,b,c);
	cos_law(a,b,c,theta);
	rad_conv_deg(theta,ang_deg,PI);
	ang_display(ang_deg);

	cout<< "the progam has exicuted sucessfully"<< endl;
	return 0;
}
//end of program
void intro_msg() {
	cout<<"This program calculates the angle across from the length c in degrees\n";
	cout<<"we love trig!\n";
}

void input_sides(double &a, double &b, double &c) {
	cout<< "side c = ";
	cin>> c;
	cout<<"\n";
	cout<<"side b = ";
	cin>> b;
	cout<<"\n";
	cout<< "side a = ";
	cin>>a;
	cout<< endl;
}
void data_check( double &a, double &b,double &c) {
	while(a<0 || b <0 || c<0 || (c+b) <= a || (a+c)<=b || (a+b)<=c) { //checks for when data is invalid
		cout<< "*INVALID DATA ENTRY* Ensure your side lengths satisfy charateristics of triangles\n";
		input_sides(a,b,c);
	}
}
double cos_law( double a, double b,  double c, double &theta) {
	theta = acos((pow(c,2)-pow(b,2)-pow(a,2))/((-2)*b*a)); //cosine law
	return (theta);
}
double rad_conv_deg(double theta, double &ang_deg, const double PI) {
	ang_deg=(theta*180.0)/PI; //radians to degrees conversion calculation
	return(ang_deg);
}
void ang_display( double &ang_deg) { //display angle in degrees
	cout<< "the angle Theta across from C is " << ang_deg << " degrees"<< endl;
}

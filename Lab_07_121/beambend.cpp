//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 7 Assignment: 3
//
// Filename: Lab_07_assign_3
// Date submitted: 2017-11-01
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//including header file
#include "beam.h"

using namespace std;


int main() {
//initializing arrays
	double y[STEPS+1]; //diflection
	double deriv_y1[STEPS+1]; //first derivative of diflection
	double deriv_y2[STEPS+1]; //second derivative od diflection translated to moment in moment function
//break
	txt_break();
//Initialize arrys
	cout<< " initializing arrays..." << endl;
	for(int i = 0; i < STEPS+1; i++) {
		cout<<"\n";
		cout<<"	initializing members ... " << i;
		y[i]= 0;
		deriv_y1[i]= 0;
		deriv_y2[i] = 0;
	}
//break
	txt_break();
//Calculating diflection
	deflect_y(y, CONST, STEPS+1);
//printing diflection
	print_y(y);
//break
	txt_break();
//calculating the moment
	deriv_y(deriv_y1,y, STEPS+1);
	deriv_y(deriv_y2,deriv_y1, STEPS+1);
	calc_moment(deriv_y2, STEPS+1);
//printing moment
	print_moment(deriv_y2);
	cout<<"\n The program has exicuted sucessfully"<< endl;
	return 0;
}
//end------------------------------------------------------

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
//include statements
#include "beam.h"
using namespace std;
//diflection
void deflect_y(double y[], const double CONST, const double A) {
	cout<< "calculating ... One moment..." << endl;
	cout<< endl;
	//variable declarations
	int n = 1; //n increment
	double sum =0; //sum of tolerances
	double X =0; //distance
	int j = 1; //index
	double tol = 1; //tolerance
	for ( j = 0; j < A ; j++) {
		n=1;
		X=j*LENGTH/10;
		sum =0;
		do {
			tol = ((pow(-1,n+1))/pow(n,5))*(sin(n*PI*X/LENGTH)); //tolerance calculation
			sum+=tol;//summation
			n++;//increment n
		} while (tol > EPSILON);// bool expression ensureing summation for each member
		y[j]= CONST*sum;//assigning i'th term of array value of diflection
	}
}
//print diflection
void print_y(const double y[]) {
	cout<< "------DEFLECTION-POINTS--1-2-3-4-5-6-7-8-9-10-----"<<endl;
	cout<<"--------------------------------------------"<< endl;
	for(int a =0; a<STEPS+1; a++) {
		cout<< "	Deflection at point " <<a<<  " = "<< y[a]<< endl;
		cout<<"--------------------------------------------"<< endl;
	}

}
//break
void txt_break() {
	cout<<endl;
	cout<<"- - - - - - - - - - - - - - - - - - - "<< endl;
	cout<< " CALCULATION:  "<< endl;
	cout<< endl;
}
//derivative calculation
void deriv_y(double O[],const double P[], const double A) {
	double d = 0; //initialize spatial distance
	cout<< "calculating... One moment..." << endl;
	for (int i = 0; i < A; i++) {
		d = LENGTH/STEPS; //spatial distance
		O[i] = (P[i+1]-P[i])/d; //derivative approximation calculation
	}
}
//moment calculation
void calc_moment(double Moment[], double A) {
	for (int i = 0; i < A; i++)
		Moment[i] = Moment [i]*ELASTICITY*INERTIA; //moment calculation
}
//print moment
void print_moment(const double Mo_final[]) {
	cout<<endl;
	cout<< "------MOMENTS-N*m-1-2-3-4-5-6-7-8-9-10-----"<<endl;
	cout<<"--------------------------------------------"<< endl;
	for (int a = 0 ; a < STEPS+1; a++) {
		cout<< "	Moment at point " <<a<<  " = "<< Mo_final[a]<< " N*m " << endl;
		cout<<"--------------------------------------------"<< endl;
	}
}
//end------------------------------------------------------------------------




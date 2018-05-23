//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//this programruns
// SYDE 121 Lab: 5 Assignment: 3
//
// Filename: lab0101.cpp
// Date submitted: 2017-10-13
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
// the purpose of this program is to approximate PI to 12 decimal places
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
//main function
int main() {
	double tol = 0.0; //tolerance
	do { 
		//program asks user for tolerance
		cout<< "This program provides the first 12 decimal places of Pi using a recersive formula \n";
		cout<< "set tolerance greater than zero and less than 0.1." << endl;
		cout <<"The smaller the number (greater than 0) the more accurate your approximation with be:" << endl;
		cin>> tol;
	} while(tol<0.0 || tol>0.10); //the program will continue to ask for a valid tolerance while the boolean expression is true
	int n = 0; //n'th term
	long double sum = 0.0; //sum is approximation to PI
	const double four = 4.0; //4.000000
	for(double j =1;; j+= 2) {
		if( n%2 ==0) {
			//calculations while n'th term is even
			double prev_sum = sum; //previous sum
			sum+= four/j; //calculations
			//display term and aprox. to PI
			cout<< fixed<< setprecision(12)<<  "term No. "<< n << "\t" << "aprox. to PI "<< sum << endl;
			n++;
			if(fabs(sum- prev_sum)<tol && fabs(sum- prev_sum)>0.0) { //break condition
				break;
			}
		} else {
			//calculations while n'th term is odd
			double prev_sum = sum; //previous sum
			sum -= four/j; //calculations
			//display term and aprox. to PI
			cout<< fixed<< setprecision(12)<< "term No. "<< n << "\t" << "aprox. to PI "<< sum << endl;
			n++;
			if(fabs(sum- prev_sum)<tol && fabs(sum- prev_sum)>0.0) { //break condition
				break;
			}
		}
	}
	return 0;
}
//end of program




//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 5 Assignment: 3
//
// Filename: lab0101.cpp
// Date submitted: 2017-10-11
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
// the purpose of this program is to calcuate the first 12 digits of Pi.
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
cout<< "This program provides the first 12 decimal places of Pi using a recersive formula \n";
double PI = 0.0;
double n = 0.0;
int N= 12;
for(int i=0; i<N; i++){
	n=pow(-1,i%2)*4/2*((double)i+1);
	PI +=n;
	cout<< i << "\t" << PI << endl;
	}
}

	
	
	
	
	
	


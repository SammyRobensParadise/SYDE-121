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

int main() {
	cout<< "This program provides the first 12 decimal places of Pi using a recersive formula \n";
	int n =0;
	int count=0;
	int num =1;
	double s =0.0;
	double PI = 4.00000000;
	 do{
	 	cout<<"set\n";
	 	cin>>n;
	 	while (s<0||s>0.100);
	 	cout<< "\n";
	 	cout<< "Term number" << "         " << "approximated value"<< endl;
	 	cout<<0<<"                        " <<PI<< endl;
	 	
	 	}while(s>=n);{
	 		s=0;
	 		if(num%2==0){
	 			PI=PI+(4.0/(num*2.0+1.0));
	 		}
	 		else
	 		{
	 			PI-=(4.0/(num*2.0+1.0));
			 }
		}
	
return 0;
}
		 


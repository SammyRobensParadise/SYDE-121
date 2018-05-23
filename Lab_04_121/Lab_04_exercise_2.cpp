//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//THIS PROGRAM RUNS
// SYDE 121 Lab: 4 Assignment: 2
//
// Filename: lab_04_exercise_1.cpp
// Date submitted: 2017-10-04
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//This program is intended to provide the factorial of a given number that is
//greater or equal to zero
#include <iostream>
using namespace std;
int main()
{
	unsigned int i = 0; //iteration 
	int n = 0; //number inputed to be calculated
	int sum = 1; //initializing the sum
	do{
		cout << "enter a number greater or equal to zero to calcuate its factorial: " << endl;
		cin >> n;//user inputs value to be calculated
		cout << "the number who's factorial you are calculating is: " << n << endl;
		if(n==0){
		cout<< " 0! equals 1 ";}		
	}while(n <= 0);
		for(i=1 ; i < n; i++){//for loop
		sum = sum*(i+1); //calcuations
		}
	cout << n <<"! = "<< sum << endl;
	return 0;
	//end of program
}


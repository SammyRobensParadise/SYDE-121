//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 5 Assignment: 1
//this program runs
// Filename: lab0101.cpp
// Date submitted: 2017-10-13
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
// the purpose of this program is to create a diamond where the width of the diamond at its maximun point
// is the value that the user enters. the diamond can only consist of odd numbers less than 20

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	int height =0; //  rows that the diamond comsists of
	int columns =0; //columns that the diamond consists of
	int rows =0; //rows that the diamond consists of
	int maxlength =0; //maximum length of the diamond at it's center
	do {//user asked for input value 
		cout << "welcome to the diamond creating program!" << endl;
		cout << "Please enter a number that you want to represent the largest width of the diamond" << endl;
		cout << "the number must be greater than 0 and less then 20 and odd, if the number is invalid, you will be asked for the number again" << endl;
		cin >> maxlength;
	} while( maxlength <= 0 || maxlength >= 20 || maxlength%2 ==0 ); //do while loop estabilishing initial condition for the integer that can be entered
	maxlength = maxlength/2;
	for( rows=-maxlength; rows <= maxlength; rows++) { //rows boolean expression
		for (columns =-maxlength; columns <=maxlength; columns++) { // columbs boolean expression
			if(abs(rows)+ abs(columns) <= maxlength) { //declaring when to print the asterix, saying that it should print "*"
				cout<< "*"; //asterix
			} else {
				cout<< " "; //empty space
			}
		}
		cout<< endl;// endline telling loop to restart the loop on a new line until the boolean expression becomes false
	}
	return 0;
}//end of program




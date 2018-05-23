//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//THIS PROGRAM RUNS
// SYDE 121 Lab: 4 Assignment: 1
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
//This program is intended to print a square consisting of asterixes that has the dimentions
//inputted by the user while the inputted value is between 2 and 20
#include <iostream>
using namespace std;
int main()
{
	int height = 0; //height of the square
	int width = 0; //width of the square
	int square = 0; //outer limits of the square
	
	do{
	cout << "Please enter the size of your square between 2 and 20: " << endl; //user inputs the desired size of their square
	cin >> square;
	cout << "the size of your square is " << square << " by " << square << " !!" <<endl; //user sees the size of their square
	}
	while( square >= 20 || 2 >= square || square%2 == 1); //restrictions on the size of the square that they can have
	while (height < square ){ //first while loop
	while (width < square){ //nested while loop
		if( width == 0 || width == square -1 || height == 0 || height == square -1 )
		{ //retrictions stating when to print an asterix
		cout << "*";
		}
		else
		{ //stating when to print a space
			cout <<" ";
			}
			width++; //iteration of the width
		}
		height++; //interation of the height
		width = 0; //no need to initialize height to zero because it will automatically stop when it reaches its maximum value
		cout << endl;
		}	
	return 0;
}
//end of program
	
	

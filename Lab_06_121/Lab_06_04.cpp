#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <math.h>
using namespace std;

void intro_msg();
//function displays intro message
void user_input_n(int &n);
//function allows user to input number of terms(n)
//INPUT; n
//OUTPUT; number of terms (n)
void check_n(int &n);
//function checks the unser input data
//INPUT: n
// OUTPUT go to user_input_n if input invalid
int fibonicci(int n);
//function to calculate the fibonicci sequence innerativly
//INPUT: n
//OUTPUT: value of sequence after n'th term
void dsply_fibonicci(int n, int value);
//function displays value of fibonicci sequence after n'th term

int main() {
	int n = 0; //number of terms to be displayed for both methods of calculations

//variables for iterative calculation

	int value = 0; //value displayed
	int i = 0; //index of iteration
	int num1 = 0; //first term base case
	int num2 = 1; // second term base case
	int fibonicci2 = 0; //declare second fibonicci calculation
//---------------------------------//
//this segement of the code describes the fibonicci sequnce recursivly
//functions for recursive calculation

	intro_msg();
	user_input_n(n);
	check_n(n);
	dsply_fibonicci(n, value);

//---------------------------------//
//this segment of the code describes the fibonicci sequence iterativy
	if(n==0) {
		cout<< "value = 0";
	} else {
		for(i = 1; i <n; i++) {
			fibonicci2 = num1 +num2;
			num1= num2;
			num2 = fibonicci2;
		}
		}
		cout<< "second calculation by iteration is : " << fibonicci2 << "\n"; //display value of fibonicci
		cout<< "NOTICE: The value of the fibonicci sequence is the same for each method of calculation\n";
		cout<< "the program has exictued sucessfully";
		return 0;
	}
//end of program
//FUNCTIONS
	void intro_msg() {
		cout<<"this code shows the different method for calculating the fibonicci sequence, one interativly and one recersivly"<< endl;
	}
	void user_input_n(int &n) {
		cout<< "enter the number of terms of the finbonicci sequence you would like to diplay.\n";
		cout<< "ensure the number of terms (integer value) is greater than, or equal to zero.\n";
		cin>> n;
		cout<<"\n";
	}
	void check_n(int &n) {
		while(n<0) {
			cout<<"*INVALID INPUT* Please enter a positive integer"<< endl;
			user_input_n(n);
		}
	}
	int fibonicci(int n) {
		if(n==0) {
			return 0;
		} else {
			if(n==1) {
				return 1;
			} else {
				return(fibonicci(n-1)+fibonicci(n-2));
			}
		}
	}
	void dsply_fibonicci(int n, int value) {
		value= fibonicci(n);
		cout<<"the value by recursion is: "<< value;
		cout<<"\n";
	}

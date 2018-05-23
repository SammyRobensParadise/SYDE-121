//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 1 Assignment: 1
//
// Filename: lab0101.cpp
// Date submitted: 2017-09-13
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************

//filename: lab0101.cpp
// This program uses a loop
// to calculate squares of
// integers 3 to 9

#include <iostream>
using namespace std;

int main ()
{
	int a = 0;
	
	for ( a= 3; a <= 10; a++ )
	{
		cout << "a = " << a
			<< " squared ="
			<< a * a
			<< endl;
	}
	cout << " A Program By: Sammy Robens-Paradise\n";
	
	system("pause");
	
	return 0;
}

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

#include <iostream>
#include <cmath>

using namespace std;

//main fucntion

int main()
{
	//initializing variables
double temp_c = 0; //temperature input in celcius 
double w_speed_kmh = 0; //initial wind speed input in km/h
double temp_f = 0;//temperature in fahrenheit
double w_speed_mph = 0; //wind spead input in mph

	cout<<"Welcome to the Actual temperature Calculator"<< endl;
	cout<<"\nPress enter to continue"<< endl;
	getchar ();
	
	cout<<"\nEnter the air temperature in degrees celcius: "<< endl;
	cin>> temp_c;
	cout<< "\Enter the current wind speed in kilometers per hour: "<< endl;
	cin>> w_speed_kmh;
	cout<<"\nThe air temperature you entered is: " << temp_c << " degrees celcius"<< endl;
	cout<<"\nThe wind temperature you entered is: " << w_speed_kmh << " km/hour" << endl;
	
	if ( w_speed_kmh < 0)
	{
		cout<< "\nYou must enter a positive Wind Speed"<< endl;
		return 0;
	}
	return 0;
}

//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 3 Assignment: 3
//
// Filename: Lab_03_wind_chill.cpp
// Date submitted: 2017-09-27
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
// The Purpose of this program is to provide a wind chill index in degrees celcius given the input
// of the air temperature and the wind speed, when the wind speed is greater than, or equal to 0.
#include <iostream>
#include <cmath>

using namespace std;

//main fucntion
int main()
{
//initializing variables
double temp_c = 0; //temperature input in celsius 
double w_speed_kmh = -1; //initial wind speed input in km/h. NOTE: initial speed is set to -1 because othwise the while loop will be skipped
double temp_f = 0; // initial temperature in fahrenheit
double w_speed_mph = 0; //wind spead input in mph
double w_chill_index_f =0; //wind chill index in fahrenheit
double w_chill_index_c =0; //wind chill index celsius

// introduction 
cout<<"\nWelcome to the wind chill index temperature Calculator!"<< endl;
cout<<"\nPress enter to continue"<< endl;
getchar ();
	
cout<<"\nEnter the air temperature in degrees celcius: "<< endl; // air temperature input
cin>> temp_c;
		
	while ( w_speed_kmh < 0) //while loop requires that the wind speed be greater or equal to zero to continue
	{
		cout<< "\nEnter the current wind speed in kilometers per hour: "<< endl;
		cin>> w_speed_kmh;
		if ( w_speed_kmh <0 )
		{
		cout<< "\n, Sorry, You must enter a positive Wind Speed"<< endl;
		}
	}
	cout<<"\nThe air temperature you entered is: " << temp_c << " degrees celsius"<< endl; //read back to user the temperature they entered
	cout<<"\nThe wind speed you entered is: " << w_speed_kmh << " km/hour" << endl; //read back to user the wind speed they entered
	
	w_speed_mph = 0.6215*w_speed_kmh; //conversion calculation, wind speed mph to km/h
	temp_f = (1.8*temp_c)+32.0; //conversion calculation, temp fahrenheit to temp cesius
	
	if (w_speed_mph <= 4) // in the case that wind mspeed is greater or equal to zero and less than or equal to 4 mph
	{
	w_chill_index_f = temp_f; //calcuation	
	}
	else if (w_speed_mph > 4 && w_speed_mph <= 45) //in the case that wind speed is greater than 4 and less then or equal to 45 mph
	{
		w_chill_index_f = 91.4-(10.45+(6.69*sqrt(w_speed_mph))-(0.447*w_speed_mph))*((91.4-temp_f)/22.0); //calculation			
	}
	else if (w_speed_mph > 45) //in the case that wind speed is greater than 45 mph
	{
		w_chill_index_f = (1.6*temp_f)-55.0; //calculation
			}
w_chill_index_c = (w_chill_index_f-32)/1.8; // conversion ratio for wind chill intex from fahrenheit to celsius

cout<<"\nThe wind chill index is: "<<w_chill_index_c<< " degrees celsius" << endl;//output
return 0;
}
//end of program

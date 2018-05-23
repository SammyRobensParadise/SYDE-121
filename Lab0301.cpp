//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 3 Assignment: 3
//
// Filename: lab0301.cpp
// Date submitted: 2017-09-27
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//the purpose of this program is to calcuate the number of weeks, days, hours, minutes and seconds that
//can shown from a given number of seconds. 
#include <iostream>
#include <cmath>
using namespace std;

//initializing variables
int input_seconds = 0; //value of seconds inputed
int seconds = 0; //number of seconds
int minutes = 0; //number of minutes
int hours = 0; //number of hours
int days = 0; //number of days
int weeks = 0; //number of weeks

 int main()
 {
 	cout<< "Welcome to The Time Calculator!" <<endl;
 	cout<< "\nPress the enter key to continue" <<endl;
 	getchar ();
 	//input
	cout<<"\nEnter the number of seconds you would like to compute: "<<endl;
 	cin>> input_seconds;
 	
 	if (input_seconds <= 0) //function will return zero if the seconds inputted is less than or equal to zero
 	{
 		cout<<"Please enter a postive integer, we cannot have negative, or zero time!"<< endl;
		 return 0;
	 }
 	while ( input_seconds > 0 )
 	{
 		//calculations determining the number of weeks, days, hours, minutes and seconds based on the input seconds
 	 weeks = input_seconds/604800; //604800 = number of seconds in a week
 	 days = (input_seconds%604800)/86400; //86400 = number of seconds in a day
 	 hours = ((input_seconds%604800)%86400)/3600; //3600 = number of seconds in an hour
 	 minutes = (((input_seconds%604800)%86400)%3600)/60; //60 = =number of seconds in a minute
 	 seconds = ((((input_seconds%604800)%86400)%3600)%60)%60; //declaring that the last mod will result in the remainder being given in seconds
 	
	 //output of weeks, days, hours, minutes, and seconds
	  cout<< "\nThe time you inputted in weeks, days, hours, minutes and seconds is: " <<endl;
 	 
 	 cout<< weeks <<" weeks" << endl;
 	 cout<< days <<" days" << endl;
 	 cout<< hours <<" hours"<< endl;
 	 cout<< minutes <<" minutes" << endl;
 	 cout<< "and "<< seconds << " seconds" << endl;
 	 return 0;
    }
    return 0;
	 }
	 //end of program

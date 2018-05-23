//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 5 Assignment: 1
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
// the purpose of this program is to create a diamond where the width of the diamond at its maximun point
// is the value that the user enters. the diamond can only consist of odd numbers less than 20

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	//enum employee_types {MANAGERS, HOURLY_WORKERS, COM_WORKERS, PIECE_WORKERS};
	cout<< "enter the number of exployees for each job for managers, hourly workers, commision workers, and piece workers respectivly.\n";
	int, nummanagers, numhworkers, numcomworkers, numpceworkers = 0;
	cin >> nummanagers >> endl;
	cin >> numhworkers >> endl;
	cin >> numcomworkers >> endl;
	cin >> numpceworkers >> endl;
	double manager_rate =0;
	double hour_worker_rate =0;
	double com_worker_rate =0;
	double pce_worker_rate =0;
	cout<< "enter the pay rate for each job: managers, hourly workers, commision workers and piece workers respectivly.\n";
	cin>> manager_rate>> endl;
	cin>> hour_worker_rate >> endl;
	cin>> com_worker_rate >> endl;
	cin>> pce_worker_rate >> endl;
	cout<< "please enter the number corresponding to the employee whos weekly salary you would like to calculate\n";
	        << "enter 1 to calculate managers salary\n";
	        << "enter 2 to calcuate hourly workers salary\n";
	        << "enter 3 to caluate commission workers salary\n";
	        << "enter 4 to calcuate piece workers salary\n";
	int choice =0;
	cin>> choice;
	double manager_salary =0;
	double hour_worker_salary =0;
	double com_worker_salary =0;
	double pce_worker_salary =0;
	switch(choice) {
		case 1:
			manager_salary =




	}





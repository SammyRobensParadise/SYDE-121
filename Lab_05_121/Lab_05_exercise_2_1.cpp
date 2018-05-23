//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//this program runs
// SYDE 121 Lab: 5 Assignment: 2
//
// Filename: lab0101.cpp
// Date submitted: 2017-10-13
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
// the purpose of this program is to calcuate the salaries of different types of employees of a given company

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//varibles declared as global to ensure that they remain constatnt throughout the program
int num_of_managers =0;
double manager_rate =0;
int num_of_hour_workers =0;
double hour_worker_rate =0;
double hours_worked_hw =0;
double hour_worker_salary =0;
int num_of_com_workers =0;
int com_worker_base =250.0;
double com_worker_salary =0;
int sales =0;
int num_of_pce_workers =0;
double item_worth =0;
int num_of_items =0;
double pce_worker_salary =0;

int choice =0;
int main() { //while statement that allows all the calculations to take place until the user enters -1 to quit program
	while (choice !=-1) {
		cout<< "please enter the number corresponding to the employee whos weekly salary you would like to calculate\n";
		cout<< "enter 1 to calculate managers salary\n";
		cout<< "enter 2 to calcuate hourly workers salary\n";
		cout<< "enter 3 to caluate commission workers salary\n";
		cout<< "enter 4 to calcuate piece workers salary\n";
		cout<< "enter -1 when you are finished calculations\n";

		cin>> choice;
		switch(choice) {
			case 1:
				do{				
				//case for managers
				cout<< "enter a positive number\n";
				cout<< "please enter the number of managers\n";
				cin>>num_of_managers;
				cout<< "please enter the pay rate of the manager\n";
				cin>> manager_rate;
				}while(num_of_managers < 0 || manager_rate < 0);
				
				break;
			case 2:
				do{
				//case for hourly workers
				cout<< "enter a positive number\n";
				cout<< "please enter the number of hourly workers\n";
				cin>> num_of_hour_workers;
				cout<< "please enter the pay rate of the hourly worker\n";
				cin>> hour_worker_rate;
				cout<< "please enter the number of hours worked\n";
				cin>> hours_worked_hw;
				if(hours_worked_hw <=40) {
					hour_worker_salary=hours_worked_hw*hour_worker_rate;
				} else {
					hour_worker_salary= 40*hour_worker_rate+(hours_worked_hw-40)*hour_worker_rate*1.50;
				}
					}while(num_of_hour_workers < 0 || hour_worker_rate < 0 || hours_worked_hw < 0 );
				break;
			case 3:
				do{
				//case for comission workers
				cout<< "enter a positive number\n";
				cout<< "please enter the number of comission workers\n";
				cin>> num_of_com_workers;
				cout<< "please enter the amount of the worker's gross weekly sales: \n";
				cin>> sales;
				com_worker_salary= com_worker_base +(sales*0.057);
				}while(num_of_com_workers < 0 || sales < 0);
				break;
			case 4:
				do{
				//case for piece workers
				cout<< "enter a positive number\n";
				cout<< "Please enter the number of piece workers\n";
				cin>> num_of_pce_workers;
				cout<< "please enter the amount of money per item: \n";
				cin>> item_worth;
				cout<< "please enter the number of items sold: \n";
				cin>> num_of_items;
				pce_worker_salary=item_worth*num_of_items;
				}while(num_of_pce_workers < 0 || item_worth < 0 || num_of_items < 0);
				break;
			default:// defult statement if user inputs invalid choice
				cout<< "sorry, please enter a valid choice for the employee type"<< endl;
				cout<< "have another try"<< endl;
				break;
		}


	}
	//summation and table calculations
	double total_num_employees = num_of_pce_workers+num_of_com_workers+num_of_hour_workers+num_of_managers;
	double total_salary_manager = manager_rate*num_of_managers;
	double total_salary_hworker = num_of_hour_workers*hour_worker_salary;
	double total_salary_com_worker = num_of_com_workers*com_worker_salary;
	double total_salary_pce_worker = num_of_pce_workers*pce_worker_salary;
	double total_salary_all = total_salary_manager+total_salary_hworker+total_salary_com_worker+total_salary_pce_worker;
	//DOS window that displays the summary of calculations and totals
	cout<< "|----------------------------------------|"<< endl;
	cout<< "total money spent is:         $"<<total_salary_all<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "total number of employees is:  "<<total_num_employees<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "total manager salary is:      $"<<total_salary_manager<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "total hourly worker salary is:$"<<total_salary_hworker<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "total comission salary is:    $"<<total_salary_com_worker<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "total salary piece worker is: $"<<total_salary_pce_worker<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "|----------------------------------------|"<< endl;
	cout<< "more calculations? select the next pay code you would like to calculate."<< endl;
	cout<< "finished? hit -1 to quit the program" << endl;
	cout<< "|----------------------------------------|"<< endl;


	return 0;

}

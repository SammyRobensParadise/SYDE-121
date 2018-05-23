//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 2 Assignment: 2
//
// Filename: lab0101.cpp
// Date submitted: 2017-09-20
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//this program calculates the number of Pencil, pen, and correction fluid boxes required
//for a company when percentages of different types of employees and the total number of employees are inputted
#include <iostream>
using namespace std;

int main()
{
//declaring constants
 const double JR_ENG_NUM_PENCIL = 8; //number of pencils used by junior engineer
 const double ADMIN_NUM_PENCIL = 2; //number of pencils used by admin staff
 const double SR_NUM_PENCIL = 5; //number of pencils used be senior engineers
 const double JR_NUM_PEN = 7; //number of pens used by junior engineers
 const double ADMIN_NUM_PEN = 6; //number of pens used by admin staff
 const double SR_NUM_PEN = 3; //number of pens used by senior engineers
 const double JR_NUM_CF = 60; //amount of correction fluid used my junir engineers
 const double ADMIN_NUM_CF= 40; //amount of correction fluid used my admin staff
 const double SR_NUM_CF = 12; //amount of correction fluid used by senior engineers
 
 const double NUM_OF_PENCILBOX = 25; // number of pencils per box
 const double NUM_OF_PENBOX = 10; // number of pens per box
 const double NUM_OF_CFBOX = 200; //amount of correction fluid per box
 
 //initializing variables
 double jr_employ = 0; // percent of junior engineers
 double sr_employ = 0; // percent of senior engineers
 double admin_employ = 0; // percent of admin staff
 
 double total_employ = 0; // number of total employers
 double num_jr_employ = 0; //number of junior enployees
 double num_sr_employ = 0; //number of senior employees
 double num_admin_employ = 0; //number of admin employees
 
 double num_of_pencil_boxes = 0; //number of pencil boxes required
 double num_of_pen_boxes = 0; //number of pen boxes required
 double num_of_cf_boxes = 0; //number of correction fluid boxes required
 
 cout << "welcome to The Write Stuff Office Supplies!" << endl;
 cout <<"\nPress Enter to Continue";
 getchar ();
 
 cout << "\nEnter total number of employees at Company: ";
 cin >> total_employ;
 
 cout << "\nEnter percent of employees that are Junior Engineers: ";
 cin >> jr_employ;
 
 cout << "\nEnter percent of employees that are Aministrative Staff: ";
 cin >> admin_employ;
 
 cout << "\nEnter percent of employees that are Senior Engineers: ";
 cin >> sr_employ;
 
 cout << "\nThe number of employees in the company is:" << total_employ << endl;
 cout << "\nThe percent entered for the number of Junior Engineers is: " << jr_employ << "%";
 cout << "\nThe percent entered for the number of Administrative Staff is: " << admin_employ << "%";
 cout << "\nThe percent entered for the number of Senior Engineers is: " << sr_employ << "%" << endl;
 
 //calculations chaning percentage of types of employees into integer values
 num_jr_employ = total_employ*(jr_employ*0.01);
 num_sr_employ = total_employ*(sr_employ*0.01);
 num_admin_employ = total_employ*(admin_employ*0.01);
 
 //calculations determining the correct number of pencil boxes required
 num_of_pencil_boxes = ((num_jr_employ*JR_ENG_NUM_PENCIL)+(num_sr_employ*SR_NUM_PENCIL)+(num_admin_employ*ADMIN_NUM_PENCIL))/NUM_OF_PENCILBOX;
 //calculations determining the correct number of pen boxes required
 num_of_pen_boxes = ((num_jr_employ*JR_NUM_PEN)+(num_sr_employ*SR_NUM_PEN)+(num_admin_employ*ADMIN_NUM_PEN))/NUM_OF_PENBOX;
 //calculations determining the correct number of correction fluid required
 num_of_cf_boxes = ((num_jr_employ*JR_NUM_CF)+(num_sr_employ*SR_NUM_CF)+(num_admin_employ*ADMIN_NUM_CF))/NUM_OF_CFBOX;
 
 //output
 cout<<"\nThe number of pencil boxes required is: " << num_of_pencil_boxes << endl;
 cout <<"\nThe number of pen boxes required is: " << num_of_pen_boxes << endl;
 cout <<"\nThe number of correction fluid bottles required is: " << num_of_cf_boxes << endl;
  
 return 0;
}

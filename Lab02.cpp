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
//this program calculates the number of Pencil, pen, and correction fluid boxes required
//for a company when percentages of different types of employees and the total number of employees are inputted
#include <iostream>
using namespace std;

int main()
{
//declaring constants
 const double jr_eng_num_pencil = 8; //number of pencils used by junior engineer
 const double admin_num_pencil = 2; //number of pencils used by admin staff
 const double sr_num_pencil = 5; //number of pencils used be senior engineers
 const double jr_num_pen = 7; //number of pens used by junior engineers
 const double admin_num_pen = 6; //number of pens used by admin staff
 const double sr_num_pen = 3; //number of pens used by seniro engineers
 const double jr_num_cf = 60; //amount of correction fluid used my junir engineers
 const double admin_cf = 40; //amount of correction fluid used my admin staff
 const double sr_num_cf = 12; //amount of correction fluid used by senior engineers
 
 const double num_of_pencilbox = 25; // number of pencils per box
 const double num_of_penbox = 10; // number of pens per box
 const double num_of_cfbox = 200; //namount of correction fluid per box
 
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
 cout << "\nEnter total number of employees at Company: ";
 cin >> total_employ;
 
 cout << "\nEnter percent of employees that are Junior Engineers: ";
 cin >> jr_employ;
 
 cout << "\nEnter percent of employees that are Administrative Staff: ";
 cin >> admin_employ;
 
 cout << "\nEnter percent of employees that are Senior Engineers: ";
 cin >> sr_employ;
 
 //calculations chaning percentage of types of employees into integer values
 num_jr_employ = total_employ*(jr_employ*0.01);
 num_sr_employ = total_employ*(sr_employ*0.01);
 num_admin_employ = total_employ*(admin_employ*0.01);
 
 //calculations determining the correct number of pencil boxes required
 num_of_pencil_boxes = ((num_jr_employ*jr_eng_num_pencil)+(num_sr_employ*sr_num_pencil)+(num_admin_employ*admin_num_pencil))/num_of_pencilbox;
 //calculations determining the correct number of pen boxes required
 num_of_pen_boxes = ((num_jr_employ*jr_num_pen)+(num_sr_employ*sr_num_pen)+(num_admin_employ*admin_num_pen))/num_of_penbox;
 //calculations determining the correct number of correction fluid required
 num_of_cf_boxes = ((num_jr_employ*jr_num_cf)+(num_sr_employ*sr_num_cf)+(num_admin_employ*admin_cf))/num_of_cfbox;
 
 //output
 cout<<"\nThe number of pencil boxes required is: " << num_of_pencil_boxes;
 cout <<"\nThe number of pen boxes required is: " << num_of_pen_boxes;
 cout <<"\nThe number of correction fluid boxes required is: " << num_of_cf_boxes;
  
 
}

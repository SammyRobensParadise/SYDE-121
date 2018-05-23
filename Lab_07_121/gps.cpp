//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 7 Assignment: 1
//
// Filename: Lab_07_assign_1
// Date submitted: 2017-11-01
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//coordinate values header file with structs
#include "coord.h"

using namespace std;
//******************************************//

int main() {
//initialize variables
	double Ds = 0;
	double Dp = 0;
	double Dh = 0;
	double theta = 0;
//initialize struct variables
	Point3D point1;
	Point3D point2;
//promt user input
	cout<< "Enter the parameters for the first point: " << endl;
	get_point(point1); //user inputs
	cout<< "Enter the parameters for the second point: " << endl;
	get_point(point2); //user inputs
	cout<< "The points you have entered are: " << endl;
	print_point(point1); //print point 1
	print_point(point2); //print point 2
	cout<< endl;
	cout<< "*-------------------*"<< endl;
	cout<< "*----CALCULATIONS---*"<< endl;
	cout<< "*-------------------*"<< endl;
	cout<< endl;
	spatial_dist(point1, point2, Ds); //spatial distance calculations
	plani_dist(point1, point2, Dp); //planir distance calculations
	ht_diff(point1, point2, Dh); //height difference calculations
	azimuth(point1, point2, theta); //azimuth calculations
//display distance calculations
	cout<< "---------------------------------" << endl;
	cout<< "Spatical distance:        " << Ds <<" units" << endl;
	cout<< "---------------------------------" << endl;
	cout<< "planimetric distance:     " << Dp <<" units" << endl;
	cout<< "---------------------------------" << endl;
	cout<< "height difference:        " << Dh <<" units" << endl;
	cout<< "---------------------------------" << endl;
	cout<< "heading from north:       " << theta << " rad" << endl;
	cout<< "---------------------------------" << endl;
	cout<< "the program has exicuted sucessfully" << endl;
	return 0;
}


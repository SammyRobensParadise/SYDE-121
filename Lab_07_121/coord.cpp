// including standard libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <math.h>
//coordinate values header file with structs
#include "coord.h"
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
using namespace std;
//******************************************//

void get_point(Point3D &point) {
	//point 1 input
	cout<< "Enter the point ID (integer) " << endl;
	cin>> point.ID;
	cout<<"Enter the x-cooronate for point "<< endl;
	cout<< "x = ";
	cin>> point.x_coord;
	cout<<"Enter the y-coordonate for point " << endl;
	cout<< "y = ";
	cin>> point.y_coord;
	cout<<"Enter the z-coordonate for point " << endl;
	cout<< "z = ";
	cin>> point.z_coord;
	cout<< "Enter the Classification type of the point (A = High accuracy, \n";
	cout<< "B = medium accuracy, c = low accuracy): " <<endl;
	cin>> point.order;
}
void print_point(const Point3D &point) {
	cout<< "Point: " << endl;
	cout<< "(" << point.x_coord << "," << point.y_coord << "," << point.z_coord << ")" << endl;
	cout<< "Point ID : " << point.ID << endl;
	cout<< "Point order: " << point.order << endl;
}
void spatial_dist(Point3D &point1, Point3D &point2, double &Ds) {
	Ds = sqrt( pow(point2.x_coord-point1.x_coord,2) + pow(point2.y_coord-point1.y_coord,2) + pow(point2.z_coord-point1.z_coord,2));

}
void plani_dist(Point3D &point1,Point3D &point2, double &Dp) {
	Dp = sqrt( pow(point2.x_coord-point1.x_coord,2)+ pow(point2.y_coord-point1.y_coord,2));

}
void ht_diff(Point3D &point1,Point3D &point2, double &Dh) {
	Dh = point2.z_coord-point1.z_coord;

}
void azimuth( Point3D &point1,Point3D &point2, double &theta) {
	theta = atan2((point2.y_coord-point1.y_coord),(point2.x_coord-point1.x_coord));

}


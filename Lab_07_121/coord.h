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
#ifndef COORD_H
#define COORD_H
// including standard libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <math.h>
//declare struct
struct Point3D {
	int ID; //ID
	double x_coord; //x coordonate
	double y_coord; //y coordonate
	double z_coord; //z coordonate
	char order; 	// point accuracy type
};
void get_point(Point3D &point); //input perameters
void print_point(const Point3D &point); //print points inputted
void spatial_dist(Point3D &point1, Point3D &point2, double &Ds); //spatial distance calculation
void plani_dist(Point3D &point1,Point3D &point2, double &Dp); //planir distance calculations
void ht_diff(Point3D &point1,Point3D &point2, double &Dh); //height difference calculations
void azimuth( Point3D &point1,Point3D &point2, double &theta); //azimuth calculations
#endif

//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 7 Assignment: 3
//
// Filename: Lab_07_assign_3
// Date submitted: 2017-11-01
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//include statements---------------------
#ifndef BEAM_H
#define BEAM_H
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
//declaring constants--------------------
const double ELASTICITY = 200e6; //KiloNewtons / m^2
const double INERTIA = 8.3e-6; //m^4
const double LOAD = 100.0; //kN/m
const double LENGTH = 1.0; // m
const double PI = 4.0*atan(1.0); //rad
const double EPSILON = 1e-30; //tolerance
const int STEPS = 10; //steps
const double CONST = (2*LOAD*pow(LENGTH,4))/((pow(PI,5))*ELASTICITY*INERTIA); //constant to be used in diflection calculation

//function declarations--------------------

void deflect_y(double y[], const double CONST,const double A); //deflection calculation
void print_y(const double y[]); //print diflection at points
void txt_break(); //text break
void deriv_y(double O[], const double P[],  const double A); //calculate derivative of deflection, used twice to gain 2nd derivative
void calc_moment(double Moment[], const double A); //moment calculation, multiplied by constants
void print_moment(const double Mo_final[]); //print moments at points
#endif

//end-------------------------------------

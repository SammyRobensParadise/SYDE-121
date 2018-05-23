//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 8 Assignment: 1
//
// Filename: lettercount.h
// Date submitted: 2017-11-08
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//header file
#ifndef LETTERCOUNT_H
#define LETTERCOUNT_H

//included libraries
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
//decleration of constants
const int ALPH_SIZE = 26; //size of the alphabet
const int A = 97; //const int ANCII number for letter A
const int Z = 122; // const int ANCII number for letter Z

//********************************************************************//
//functions(see main_lettercount.cpp and lettercount.cpp for descriptions)
void initialize_array(int alph[], int sorted[], const int ALPH_SIZE);
void initialize_alph(int alph[], const int A, const int ALPH_SIZE);
void initialize_beta(int beta[], const int ALPH_SIZE, const int A);
void print_sentence(const string sentence);
void count_letters(const string sentence, int alph[]);
void sort_letter(int alph[], int beta[], const int ALPH_SIZE);
void print_letters_sorted(const int alph[],const int beta[],  const int ALPH_SIZE, ofstream &outfile);
void swap( int &a, int &b);
#endif

//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 8 Assignment: 1
//
// Filename: main_lettercount.cpp
// Date submitted: 2017-11-08
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//include header
#include "lettercount.h"

using namespace std;
//this function initializes both arrays to zero
void initialize_array(int alph[],int beta[], const int ALPH_SIZE) {
	cout<< "initialzizing";
	for(int i = 0; i < ALPH_SIZE; i++) {
		alph[i] = 0;
		beta[i] = 0;
		cout<< " .";
	}
}
//this function initializes beta[] to the alphabet using ASCII value
void initialize_beta(int beta[], const int ALPH_SIZE, const int A) {
	cout<< endl;
	for (int i = 0; i < ALPH_SIZE; i++) {
		beta[i] = A+i;
	}
}
//this function displays the sentince form the inputted text file to tbe user in the DOS window	
void print_sentence(const string sentence) {	
cout<< "the sentence extracted from the file is: \n";
cout<< sentence<< endl;
}
//this function counts the number of occurances of each letter in the inputted sentence
void count_letters(const string sentence, int alph[]) {
	int length = sentence.length();
	for(int i = 0; i < length; i++) {
		if(int(sentence[i]) >= 97 && int(sentence[i]) <=122) {
			alph[int(sentence[i]) - 97] += 1;
		}
	}
}
//function thats sorts number of letters and orders them from greatest
//number of occurances to least number of occurances
void sort_letter(int alph[],int beta[], const int ALPH_SIZE) {
	
	for ( int i = 1; i <= 26; ++i ) {
		for ( int j = i-1; j > 0 && alph[j+1] < alph[j]; j-- ) {
			swap( alph[j], alph[j+1] );
			swap( beta[j], beta[j+1] );
		}
	}
}
//this is the swap function used in the sorting function sort_letter
void swap( int &a, int &b) {
	
	int temp = a;
	a = b;
	b = temp;
}
//this function prints the sorted and numbered letters from the input text to the user specified output text
void print_letters_sorted(const int alph[], const int beta[], const int ALPH_SIZE, ofstream &outfile){
 
	cout<< "sending data to  file . . ." << endl; //writes to DOS window
	outfile << " Letter(s)\t\t Occurance\n"; 
	//outfile writes to user specified output text file
	for (int i = 0; i <=25; i++) {
		if(alph[i] != 0) {
			int num_of_let = alph[i];
			outfile << "\t"<< char(beta[i])<< "\t\t\t" << num_of_let << endl;
		}
	}
}
//end

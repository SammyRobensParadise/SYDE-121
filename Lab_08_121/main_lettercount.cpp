//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 8 Assignment: 1
//
// Filename: lettercount.cpp
// Date submitted: 2017-11-08
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//Incuding header file
#include "lettercount.h"

using namespace std;

int main() {


	int alph[ALPH_SIZE]; //declare cont array
	int beta[ALPH_SIZE]; //declare alphabet array
	string in; //declare string input file
	string out; //declare string output file
//-------------FILESTREAM---------//
//ask user for file input and output direction
	//input file
	cout<< "please enter the file name that you would like to input from" << endl;
	cin>> in;
	ifstream infile;
	infile.open(in.c_str());
	if (infile.fail()) {
		cout<< "failed to open file: "<< in << endl;
		exit(1);
	}
	//output file
	cout<< "please enter the file name that you would like to read to" << endl;
	cin>> out;
	ofstream outfile;
	outfile.open(out.c_str());
	if (outfile.fail()) {
		cout<< "Error opening output file: " << out << endl;
		exit(1);
	}
//-------------------------------//

	string sentence; //declare string called sentence to be used in calculations and ordering
	while(!infile.eof()) {
		getline(infile,sentence); //write infile to string sentence
	}
	outfile.setf(ios::fixed);
	outfile.precision(1);
//function initializes arrays
	initialize_array(alph,beta, ALPH_SIZE);
// function sets beta[] array to the ANCII number corresponding to the letter of the alphabet from A-Z
	initialize_beta(beta, ALPH_SIZE, A);
//fuction prints sentence from the *.txt file in the DOS window
	print_sentence(sentence);
//function counts the number of occurances of each letter in the sentence
	count_letters(sentence,alph);
//function sorts the letters from largest number of occruances to least number of occurances
	sort_letter(alph,beta,ALPH_SIZE);
//function sends data about number and order of occurances of each letter in
//the sentence to the user specified output file
	print_letters_sorted(alph, beta,ALPH_SIZE, outfile);
//functions ensure that both the input and the output files are properly closed before the program ends
	infile.close();
	outfile.close();
	cout<< "The program has ended" << endl;
	return 0;
}
//end of program

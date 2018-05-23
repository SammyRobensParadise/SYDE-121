//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//THIS PROGRAM RUNS
// SYDE 121 Lab: 4 Assignment: 3
//
// Filename: lab_04_exercise_1.cpp
// Date submitted: 2017-10-04
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
//This program is intended to provide a learning
//program for children (or university students) who are trying to 
//learn multiplication between single digit numbers

#include <iostream>
#include <cstdlib>//library required for random number generation function
using namespace std;

int main()
{
int trys = 0;//number of attempts
int ans = 0;//answer
int num1 = 0;//random number 1
int num2 = 0;//random number 2
int score = 0;//final score
cout<< "welcom to the multiplication practicing program" << endl;	
cout<< "Dont Worry, You can enter -1 as an answer anytime to quit the program!" << endl;
while ( ans != -1 && ans == num1*num2)//while loop 1
{
num2 = rand()%9+1;//generation of random number 1
num1 = rand()%9+1;//generation of random number 2
		while (ans != num1*num2 && ans != -1) //constraints 2, second while loop
	{
		cout <<"How much is "<<num1<<" times "<<num2 <<"?"<<endl;//question prompt for multiplication
		cin >> ans;//user inputs value
			if(ans == num1*num2){
				cout << "congrats! your answer is correct! time for the next question" << endl;//when the inputted value is correct
				score++;
				}
			else
				{
				if(ans != num1*num2){
					cout<< "sorry, your answer is incorrect, please try again" << endl;//when the inputted value is incorrect
				}
				
			}
trys++;
}
if (ans == -1){//statement congratulating user on their effort
	cout << "thanks for playing" << endl;
			}  
}cout <<"congrats, your score is " << score;
return 0;
}//end of program

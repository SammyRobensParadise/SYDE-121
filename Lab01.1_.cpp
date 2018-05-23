//filename: lab0101.cpp
// This program uses a loop
// to calculate squares of
// integers 3 to 9

#include <iostream>
using namespace std;

int main ()
{
	int i = 0;
	
	for ( i = 3; i < 10; i++ )
	{
		cout << "i = " << i
			<< " squared ="
			<< i * i
			<< endl;
	}
	cout << "\nFun!\n";
	
	system("pause");
	
	return 0;
}

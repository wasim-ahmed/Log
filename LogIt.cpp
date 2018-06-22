//============================================================================
// Name        : LogIt.cpp
// Author      : Wasim
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	ofstream file("data.txt",ios::out);

	double value1 = 12.09;
	double value2 = 14.29;
	double value3 = 17.3;


	if(file.is_open())
	{
		file<<"value1"<<"\t"<<"value2"<<"\t"<<"value3"<<endl;
		for(int i =0; i <= 10; i++)
		{
			value1 += i;
			value2 += i;
			value3 += i;

			file<<value1<<"\t"<<value2<<"\t"<<value3<<endl;

		}

	}
	else
	{
		cout<<"Error in file openeing"<<endl;
	}

	file.close();

	return 0;
}

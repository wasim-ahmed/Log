//============================================================================
// Name        : LogIt.cpp
// Author      : Wasim
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <unistd.h>
using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	timeval tv;
	gettimeofday(&tv,0);
	cout<<tv.tv_sec<<"\t"<<tv.tv_usec<<endl;

	struct tm *tm;
	tm = localtime(&tv.tv_sec);

	cout<<tm->tm_hour;
	cout<<tm->tm_min;
	cout<<tm->tm_sec;

	ofstream file("data.txt",ios::out | ios::app);

	double value1 = 12.09;
	double value2 = 14.29;
	double value3 = 17.3;


	if(file.is_open())
	{
		//file<<"Hour"<<"\t"<<"Minute"<<"\t"<<"Seconds"<<endl;
		file<<"Time"<<endl;
		for(int i =0; i <= 10; i++)
		{
			value1 += i;
			value2 += i;
			value3 += i;
			gettimeofday(&tv,0);
			tm = localtime(&tv.tv_sec);
			file<<tm->tm_hour<<":"<<tm->tm_min<<":"<<tm->tm_sec<<endl;
			sleep(1);

		}

	}
	else
	{
		cout<<"Error in file openeing"<<endl;
	}

	file.close();

	return 0;
}

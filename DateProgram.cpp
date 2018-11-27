// DateProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	long lf;
	cout << "Enter the date as a long int\n";
	cin >> lf;
	Date longDate(lf);
	longDate.displayDate();
}


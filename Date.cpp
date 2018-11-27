#include "Date.h"
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

Date::Date() {
	day = 1;
	month = 1;
	year = 2000;
}

Date::Date(long lf) {
	longFormat = lf;
	isLong = true;
}

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::convertDate(){
	
	if(isLong) {
		year = longFormat / 10000;
		month = longFormat % 100;
		day = abs(longFormat - (year*10000)) / 100; //20151131 - 2015 = 1131, 1131/100 = 11
	}
	else {
		cout << "The date is already in mm/dd/yyyy format\n";
	}

}

void Date::displayDate() {
	if (isLong) {
		cout << "The date is " << longFormat << "\n";
	}
	else {
		cout << "The date is " << day << " / " << month << " / " << year << "\n";
	}
}
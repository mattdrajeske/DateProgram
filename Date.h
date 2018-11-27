#pragma once

class Date {
	private:
		long longFormat;
		bool isLong = false;
		int day;
		int month;
		int year;
	public:
		Date(long);
		Date(int, int, int);
		Date();
		void convertDate();
		void displayDate();

};

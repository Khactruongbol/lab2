#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date(int m = 1, int d = 1, int y = 1900); //Default constructor
	~Date();//Destructor
	void print() const;//Output
	bool isValid() const;//Kiểm tra ngày tháng năm 
	void lastDayOff() const; //Ngày cuối

};


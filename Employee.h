#pragma once
#include <iostream>
#include <string>
#include "date.h"
using namespace std;
class Employee
{
private:
	string ho; //Họ
	string ten; //Tên
	Date birthdate; //Ngày sinh
	Date hiredate; //Ngày đi làm
public:
	Employee(const string& h, const string& t, const Date& bd, const Date& hd); //Constructor
	~Employee(); //Destructor
	void print() const; //Output


};


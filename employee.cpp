#include "Employee.h"
#include "date.h"
// Constructor
Employee::Employee(const string& h, const string& t, const Date& bd, const Date& hd)
    : ho(h), ten(t), birthdate(bd), hiredate(hd)
{
}

// Destructor
Employee::~Employee()
{
}

// Output function
void Employee::print() const
{
    cout << "Ho: " << ho << endl;
    cout << "Ten: " << ten << endl;
    cout << "Ngay sinh: ";
    birthdate.print();
    cout << "Ngay vao lam: ";
    hiredate.print();
}
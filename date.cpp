#include "date.h"
// Constructor with default values
bool Date::isValid() const
{
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return false;

    int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    // Kiểm tra năm nhuận
    bool leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    if (leap && month == 2)
        return day <= 29;

    return day <= daysInMonth[month - 1];
}
Date::Date(int m, int d, int y)
    : month(m), day(d), year(y)
{
    if (!isValid()) {
        // Nếu ngày không hợp lệ, gán giá trị mặc định
        day = 1;
        month = 1;
        year = 1900;
    }
}

// Destructor
Date::~Date()
{
}

// Output function: day/month/year
void Date::print() const
{
    cout << day << "/" << month << "/" << year << endl;
}

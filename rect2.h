#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
    float len;
    float wid;
    static int thisMany;         // Thành viên tĩnh đếm số đối tượng
    string fillString;           // Chuỗi fillString

public:
    Rectangle(); // Default constructor
    Rectangle(float l, float w);
    Rectangle(int l, int w);
    Rectangle(int l, int w, const string& fill); // Constructor với fillString

    void input();
    void display() const;

    void setLength(float l);
    void setWidth(float w);

    float getLength() const; // Hàm const
    float getWidth() const;  // Hàm const

    float perimeter() const;
    double diagonal();
    float area();
    bool isSquare();
    void draw(char kyhieu);

    static int howMany(); // Trả về số đối tượng hiện tại

    string fill() const;  // Trả về fillString

    ~Rectangle();
};
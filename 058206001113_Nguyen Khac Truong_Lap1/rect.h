#pragma once
#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
private:
	float len;
	float wid;
public:
	Rectangle(); // Default constructor
	Rectangle(float l, float w); //Constructor nhận 2 tham số
	Rectangle(int l, int w); //Constructor nhận 2 đối số nguyên
	void input(); //Hàm nhập
	void display(); //Hàm xuất

	void setLength(float l); //Hàm set chiều dài
	void setWidth(float w); //Hàm set chiều rộng
	float getLength(); //Hàm get chiều dài
	float getWidth(); //Hàm get chiều rộng

	float perimeter(); //Chu vi
	double diagonal(); //Đường chéo
	float area(); //Diện tích
	bool isSquare(); //Kiểm tra hình vuông
	void draw(char kyhieu); //Vẽ hình chữ nhật 
};


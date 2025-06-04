#include "rect.h"
Rectangle::Rectangle() {
	len = 10;
	wid = 10;
}
Rectangle::Rectangle(float l, float w) {
	len = l;
	wid = w;
}
Rectangle::Rectangle(int l, int w) {
	if (l > 0 && l <= 20)
		len = l;
	else
		len = 10;
	if (w > 0 && w <= 20)
		wid = w;
	else
		wid = 10;
}
void Rectangle::input() {
	cout << "Length: ";
	cin >> len;
	cout << "Width: ";
	cin >> wid;
}
void Rectangle::display() {
	cout << "[" << len << " x " << wid << "]" << endl;
}
void Rectangle::setLength(float l) {
	if (l > 0 && l >=	 wid)
		len = l;
	else
		cout << "Invalid length!" << endl;
}
void Rectangle::setWidth(float w) {
	if (w > 0 && w <= len)
		wid = w;
	else
		cout << "Invalid width!" << endl;
}
float Rectangle::getLength() {
	return len;
}
float Rectangle::getWidth() {
	return wid;
}
float Rectangle::perimeter() {
	return 2 * (len + wid);
}
double Rectangle::diagonal() {
	return sqrt(len * len + wid * wid);
}
float Rectangle::area() {
	return len * wid;
}
bool Rectangle::isSquare() {
	if (len == wid)
		return true;
	else
		return false;
}
void Rectangle::draw(char kyhieu) {
	for (int i = 0; i < wid; i++) {
		for (int j = 0; j < len; j++) {
			cout << kyhieu << " ";
		}
		cout << endl;
	}
}
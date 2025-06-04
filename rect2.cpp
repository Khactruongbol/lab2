#include "rect2.h"
#include <cmath>
// Khởi tạo biến tĩnh
int Rectangle::thisMany = 0;

// Constructor mặc định
Rectangle::Rectangle() {
    this->len = 10;
    this->wid = 10;
    this->fillString = "";
    ++thisMany;
}

// Constructor 2 float
Rectangle::Rectangle(float l, float w) {
    this->len = l;
    this->wid = w;
    this->fillString = "";
    ++thisMany;
}

// Constructor 2 int
Rectangle::Rectangle(int l, int w) {
    this->len = (l > 0 && l <= 20) ? l : 10;
    this->wid = (w > 0 && w <= 20) ? w : 10;
    this->fillString = "";
    ++thisMany;
}

// Constructor 2 int + string
Rectangle::Rectangle(int l, int w, const string& fill) {
    this->len = (l > 0 && l <= 20) ? l : 10;
    this->wid = (w > 0 && w <= 20) ? w : 10;
    this->fillString = fill;
    ++thisMany;
}

void Rectangle::input() {
    cout << "Length: ";
    cin >> this->len;
    cout << "Width: ";
    cin >> this->wid;
}

void Rectangle::display() const {
    cout << "[" << this->len << " x " << this->wid << "]";
    if (!this->fillString.empty())
        cout << " | Fill: " << this->fillString;
    cout << endl;
}

void Rectangle::setLength(float l) {
    if (l > 0 && l >= this->wid)
        this->len = l;
    else
        cout << "Invalid length!" << endl;
}

void Rectangle::setWidth(float w) {
    if (w > 0 && w <= this->len)
        this->wid = w;
    else
        cout << "Invalid width!" << endl;
}

float Rectangle::getLength() const {
    return this->len;
}

float Rectangle::getWidth() const {
    return this->wid;
}

float Rectangle::perimeter() const {
    return 2 * (this->len + this->wid);
}

double Rectangle::diagonal() {
    return sqrt(this->len * this->len + this->wid * this->wid);
}

float Rectangle::area() {
    return this->len * this->wid;
}

bool Rectangle::isSquare() {
    return this->len == this->wid;
}

void Rectangle::draw(char kyhieu) {
    for (int i = 0; i < static_cast<int>(this->wid); i++) {
        for (int j = 0; j < static_cast<int>(this->len); j++) {
            cout << kyhieu << " ";
        }
        cout << endl;
    }
}

int Rectangle::howMany() {
    return thisMany;
}

string Rectangle::fill() const {
    return this->fillString;
}

Rectangle::~Rectangle() {
    --thisMany;
}
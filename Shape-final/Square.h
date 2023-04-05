#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include "TwoDimensionalShape.h"

using namespace std;

class Square : public  TwoDimensionalShape {
private:
	double side;
public:
	Square(double s) : side(s) {}

	double getArea() {
		return side * side;
	}

	string getName() {
		return "Square area: ";
	}

	void draw() {
		cout << "Drawing a square" << endl;
	}

};

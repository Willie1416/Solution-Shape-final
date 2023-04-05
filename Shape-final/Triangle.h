#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include "TwoDimensionalShape.h"

using namespace std;

class Triangle : public TwoDimensionalShape {
private:
	double base, height;
public:
	Triangle(double b, double h) : base(b), height(h) {}

	double getArea() {
		return 0.5 * base * height;
	}

	string getName() {
		return "Triangle area: ";
	}

	void draw() {
		cout << "Drawing a triangle" << endl;
	}
};
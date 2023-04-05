#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include "TwoDimensionalShape.h"

using namespace std;

class Circle : public TwoDimensionalShape {
private:
	double radius;
public:
	Circle(double r) : radius(r) {}


	double getArea() {
		return 3.14159 * radius * radius;
	}

	string getName() {
		return "Circle area: ";
	}

	void draw() {
		cout << "Drawing a cricle" << endl;
	}
};
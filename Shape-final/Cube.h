#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include "ThreeDimensionalShape.h"

using namespace std;

class Cube : public ThreeDimensionalShape {
private:
	double side;
public:
	Cube(double s) : side(s) {}

	double getVolume() {
		return side * side * side;
	}

	string getName() {
		return "Cube volume: ";
	}

	void draw() {
		cout << "Drawing a cube" << endl;
	}
};
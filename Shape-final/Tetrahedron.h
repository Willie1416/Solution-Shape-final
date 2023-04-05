#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include "ThreeDimensionalShape.h"

using namespace std;

class Tetrahedron : public ThreeDimensionalShape {
private:
	double side;
public:
	Tetrahedron(double s) : side(s) {}

	double getVolume() {
		return (pow(side, 3) * sqrt(2)) / 12;
	}

	string getName() {
		return "Tetrahedron volume: ";
	}

	void draw() {
		cout << "Drawing a tetrahedron" << endl;
	}
};
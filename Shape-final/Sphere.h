#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include "ThreeDimensionalShape.h"

using namespace std;

class Sphere : public ThreeDimensionalShape {
private:
	double radius;
public:
	Sphere(double r) : radius(r) {}

	double getVolume() {
		return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
	}

	string getName() {
		return "Sphere volume: ";
	}

	void draw() {
		cout << "Drawing a sphere" << endl;
	}
};
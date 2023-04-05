#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;


class TwoDimensionalShape : public Shape {
	public:
		virtual double getArea() = 0;
};
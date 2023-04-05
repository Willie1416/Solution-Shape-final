#pragma once

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class ThreeDimensionalShape : public Shape {
public:
	virtual double getVolume() = 0;
};
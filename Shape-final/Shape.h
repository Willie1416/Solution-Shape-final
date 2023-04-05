#pragma once

#include <string>
#include <iostream>

using namespace std;

class Shape {
public:
	virtual string getName() = 0;
	void draw() {
		cout << "Drawing a shape" << endl;
	}
};

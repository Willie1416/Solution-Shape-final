#pragma once

#include "Shape.h"
#include "Moveable.h"

class MoveableShape : public Shape, public Moveable {
	private:
		int x;
		int y;
	public:
		MoveableShape(int dx, int dy) : x(dx), y(dy) {}
		void move(int dx, int dy) {
			cout << "Moving the shape" << endl ;
			x += dx;
			y += dy;
		}

		void draw() {
			cout << "Drawing a moveable shape" << endl;
		}

		string getName() {
			return "Movebale shape";
		}

		int getX() {
			return x;
		}
		int getY() {
			return y;
		}


};


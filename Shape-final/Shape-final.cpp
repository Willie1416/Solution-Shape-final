// Shape-final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Circle.h" 
#include "Cube.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Square.h"
#include "Tetrahedron.h"
#include "MoveableShape.h"




int main(){
	Circle c(5);
	Square s(6);
	Triangle t(4,5);
	Sphere sp(4);
	Cube cb(5);
	Tetrahedron th(6);
	MoveableShape ms(5,4);

	c.draw();
	cout << c.getName() << c.getArea() << endl;
	s.draw();
	cout << s.getName() << s.getArea() << endl;
	t.draw();
	cout << t.getName() << t.getArea() << endl;
	sp.draw();
	cout << sp.getName() << sp.getVolume() << endl;
	cb.draw();
	cout << cb.getName() << cb.getVolume() << endl;
	th.draw();
	cout << th.getName() << th.getVolume() << endl;

	ms.draw();
	cout << "with x and y coordinates " << ms.getX() << " and " << ms.getY() << endl;

	ms.move(2,3);

	cout << "New x and y coordinates for movable shape are " << ms.getX() << " and " << ms.getY() << endl;


	return 0;
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

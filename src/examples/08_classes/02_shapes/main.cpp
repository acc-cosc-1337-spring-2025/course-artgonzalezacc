//main
#include <iostream>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Circle circle1;
	Line line;
	Circle circle2;

	Shape* shapes[3]{&circle1, &line, &circle2};

	shapes[0]->draw();
	shapes[1]->draw();
	shapes[2]->draw();

	return 0;
}
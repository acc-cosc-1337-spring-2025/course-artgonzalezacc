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
	Circle circles[3];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	return 0;
}
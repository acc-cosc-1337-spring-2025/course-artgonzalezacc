//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

using std::vector;

int main() 
{
	vector<Shape*> shapes;
	shapes.push_back(new Line());
	shapes.push_back(new Circle());

	for(auto shape: shapes)
	{
		shape->draw();
	}

	for(auto shape: shapes)
	{
		delete shape;
	}
	
	return 0;
}
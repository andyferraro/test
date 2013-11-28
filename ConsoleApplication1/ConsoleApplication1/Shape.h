#pragma once
#include <string>

class CShape
{
	int width, height;
	int area;
	int perimeter;
public:
	CShape();
	CShape(int, int);
	~CShape();
	virtual std::string getVName();
	std::string getName();
	virtual int getArea();
	virtual int getPerimeter();
};


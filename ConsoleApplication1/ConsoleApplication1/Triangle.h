#pragma once

#include "Shape.h"
class CTriangle :
	public CShape
{
public:
	CTriangle(int, int);
	CTriangle();
	~CTriangle();
	std::string getVName();
	std::string getName();
};


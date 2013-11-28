#pragma once
#include "Shape.h"
class CRectangle :
	public CShape
{
public:
	CRectangle(int, int);
	CRectangle();
	~CRectangle();	
	std::string getVName();
	std::string getName();
};

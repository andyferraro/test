#include "stdafx.h"
#include "Shape.h"


CShape::CShape(int x, int y) : width(x), height(y)
{
}

CShape::CShape()
{
}

CShape::~CShape()
{
}

std::string CShape::getVName()
{
	return "VCShape";
}

std::string CShape::getName()
{
	return "CShape";
}

int CShape::getArea()
{
	return -1;
}

int CShape::getPerimeter()
{
	return -1;
}
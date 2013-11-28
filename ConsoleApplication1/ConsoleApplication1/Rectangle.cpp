#include "stdafx.h"
#include "Rectangle.h"


CRectangle::CRectangle(int x, int y) :CShape(x, y)
{
}

CRectangle::CRectangle()
{
}


CRectangle::~CRectangle()
{
}

std::string CRectangle::getVName()
{
	return "VCRectangle";
}



std::string CRectangle::getName()
{
	return "CRectangle";
}
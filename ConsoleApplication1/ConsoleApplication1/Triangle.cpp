#include "stdafx.h"
#include "Triangle.h"



CTriangle::CTriangle(int x, int y) :CShape(x, y)
{
}

CTriangle::CTriangle()
{
}


CTriangle::~CTriangle()
{
}

std::string CTriangle::getVName()
{
	return "VCTriangle";
}

std::string CTriangle::getName()
{
	return "CTriangle";
}
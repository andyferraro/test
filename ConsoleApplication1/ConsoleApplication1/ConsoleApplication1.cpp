// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <vector>

#define MAXLOOP 10

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// Test rand()
	srand(time(0));
	cout << "inizio" << endl;
	cout << "RAND_MAX: " << RAND_MAX << endl;
	for (int i = 0; i<MAXLOOP; i++) {
		int k = rand();
		cout << i << ": " << k << endl;
	}
	cout << "fine" << endl;

	// CShape, CTriangle, CRectangle test
	CShape cshape;
	cout << cshape.getArea() << endl;
	CTriangle t(1, 4);
	CRectangle r(2, 3);
		
	cout << "t.getVName(): " << t.getVName() << ", ";
	cout << "r.getVName(): " << r.getVName() << ", " << endl;
 
	cout << "t.getName(): " << t.getName() << ", ";
	cout << "r.getName(): " << r.getName() << ", " << endl;

	CShape *tp = &t, *rp = &r;
	
	cout << "tp.getVName(): " << tp->getVName() << ", ";
	cout << "rp.getVName(): " << rp->getVName() << ", "<< endl; 
	cout << "tp.getName(): " << tp->getName() << ", ";
	cout << "rp.getName(): " << rp->getName() << ", " << endl;


	vector<CShape> s_vector;
	s_vector.push_back(t);
	s_vector.push_back(r);
	for (int i = 0; i < s_vector.size(); i++)
		cout << "s_vector: " << s_vector[i].getVName() << endl;
	vector<CShape*> sp_vector;
	/*CShape *ps1 = &t;
	CShape *ps2 = &r;*/
	sp_vector.push_back(&t);
	sp_vector.push_back(&r);
	for (CShape* p : sp_vector)
		cout << "sp_vector: " << p->getVName() << endl;
	CShape *s_array[2];
	s_array[0] = &t;
	s_array[1] = &r;

	for (int i = 0; i < 2; i++)
		cout << "s_array: " << s_array[i]->getVName() << endl;

	cout << "Helloworld!" << endl;
	return 0;
}


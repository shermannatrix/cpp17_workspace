// PartialTemplateSpecialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MyTemplateClass.h"

int main () {
	int x = 10;
	int* y = &x;
	int* z = &x;

	MyTemplateClass<int, int*, int*> obj;
	obj.F1 ( x, y, z );
	obj.F2 ( x, x );

	return 0;
}
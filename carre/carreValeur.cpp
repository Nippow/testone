#include <iostream>
#include "carre.h"

using namespace std;

int main()
{
	int x = 3, y = 5;
	int* p = &y;

	carre(&x);
	cout<< "x = " << x << endl;

	carre(p);
	cout<< "p = " << (*p) << endl;

	return 0;

}
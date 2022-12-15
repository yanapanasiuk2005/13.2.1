#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
#define X 1
#define Y 2
#define Z 3
#define SQR(x) (x)*(x)
#define RES(x,y) (x)+(y)
#define DOB(x,y) (x)*(y)
#define RIZ(x,y) (x)-(y)
#define MAX(y,z) ((y)>(z))?(y):(z)
#define MIN(y,z) ((y)<(z))?(y):(z)
int main()
{
	cout << "Lab 13.2. Using macros and preprocessing directive" << endl;
	int x = X,
		y = Y,
		z = Z,
		a_kvadr,
		maxim,
		riz,
		dob,
		res,
		minim;
#if Z <= 3
	dob = DOB(y, z);
	minim = MIN(DOB(z, x), dob);
	maxim = MAX(DOB(x, y), dob);
	res = RES(maxim, minim);
	cout << "result:" << res << endl;
#else
	{
		riz = RIZ(x, y);
		a_kvadr = SQR(RIZ(x, z));
		minim = MIN(a_kvadr, riz);
		cout << "result:" << minim << endl;
	}
#endif
	return 0;
}

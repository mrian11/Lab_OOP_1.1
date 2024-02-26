#include <iostream>
#include "Goods.h"

using namespace std;

Goods makeCost(double x, int y) {
	Goods rn;
	if (!rn.Init(x, y))
		cout << "wrong argument to Init (first)" << endl;
	return rn;
}


int main()
{
	Goods v;
	v.Read();
	v.Display();
	double a = v.Cost();
	cout << "a = " << a << endl;

	Goods d;
	double u;
	int b;
	cout << "Enter first= "; cin >> u;
	cout << "Enter second= "; cin >> b;
	d = makeCost(u, b);
	d.Display();
	double f = d.Cost();
	cout << "Result = " << f << endl;

}
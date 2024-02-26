#include "Goods.h"
#include <iostream>>

using namespace std;


void Goods::setFirst(double value)
{
	first = value;
}

void Goods::setSecond(int value)
{
	second = value;
}

bool Goods::Init(double x, int y) 
{
	setFirst(first);
	setSecond(second);
	second = y;
	if (x >= 0) {
		first = x;
		return true;
	}
	else {
		first = 0;
		cout << "Enter right numbers!" << endl;
		return false;
	}
}


void Goods::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}

void Goods::Read()
{
	double x;
	int y;
	do {
		cout << "first =  ";
		cin >> x;
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}

double Goods::Cost()
{
	double c;
	c = first * second;
	return c;
}


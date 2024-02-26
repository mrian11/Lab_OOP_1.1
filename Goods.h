#pragma once 

#include <string>
using namespace std;

class Goods
{
private:

	double first;
	int second;

public:

	double GetFirst() const { return first; }
    int GetSecond() const { return second; }
	void setFirst(double value);
	void setSecond(int value);



	bool Init(double x, int y);
	void Display() const;
	void Read();

	double Cost();

};


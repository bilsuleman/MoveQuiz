#include "square.h"
#include <iostream>

using namespace std;

square& square::operator=(const square& right)
{
	cout << "Copy assignment running.";
	this->a = right.a;
	return *this;
}

square::square(const square& obj)
{
	cout << "Copy Constructor running." << endl;
	this->a = obj.a;
}

square::square()
{
	cout << "Deafault Constructor running." << endl;
	a = 0;
}

square::square(int input)
{
	a = input;
}

square& square::operator=(square&& right)
{
	cout << "Move Assignment Running." << endl;
	if (this != &right) {
		swap(a, right.a);
	}
	return *this;
}

square::square(square&& temp)
{
	cout << "Move Constructor Running." << endl;
	this->a = temp.a;
	temp.a = 0;
}

square::~square()
{
	cout << "Destructor Running." << endl;
}

int square::setA(int input)
{
	a = input;
	return 0;
}

int square::getA()
{
	return a;
}

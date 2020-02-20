#include <iostream>
#include "square.h"

using namespace std;

square makeSquare()
{
	square aSquare(10);
	return aSquare;
}
int main()
{
	square x;
	x = makeSquare();
	x = square(5);

	return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;

void main()
{
	int *p = NULL;
	unsigned u = 11, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;

	system("pause");
}
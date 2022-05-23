#include <iostream>
#include <cfloat>

using namespace std;

int main()
{
	float num0 = FLT_MAX;

	cout.precision(64);
	cout << num0 << endl;

	float num1;
	unsigned int num2 = 0b01111111111111111111111111111111;
	memcpy(&num1, &num2, sizeof(num2));

	cout << num2 << endl;
}
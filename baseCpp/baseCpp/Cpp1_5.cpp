#include <iostream>
#include <cfloat>

using namespace std;

int main()
{
	// 앱실론 수 도출해보기

	unsigned int num0 = 0b00111111100000000000000000000000;
	float num1;
	memcpy(&num1, &num0, sizeof(num0));

	cout.precision(64);
	cout << "num1 " << num1 << endl;


	unsigned int num2 = 0b00111111100000000000000000000001;
	float num3;
	memcpy(&num3, &num2, sizeof(num2));

	cout << "num3 " << num3 << endl;

	cout << num3 - num1 << endl;	// FLT_EPSILON 값 도출
	cout << FLT_EPSILON << endl;
	if ((num3 - num1) == FLT_EPSILON)
		cout << "Equal" << endl;
}
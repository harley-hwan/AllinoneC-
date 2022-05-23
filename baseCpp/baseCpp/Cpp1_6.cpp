#include <iostream>
#include <cfloat>

using namespace std;

int main()
{
	float num0 = 1.0f;

	//unsigned int num1 = 0b00110100100000000000000000000000;
	unsigned int num1 = 0b00110011100000000000000000000000;
	float num2;
	memcpy(&num2, &num1, sizeof(num1));

	cout.precision(64);
	cout << num2 << endl;
	cout << num0 + num2 << endl;

	unsigned int num3 = 0b01001011100000000000000000000000;
	float num4;
	memcpy(&num4, &num3, sizeof(num3));

	cout.precision(64);
	cout << num4 << endl;
	cout << num0 + num4 << endl;

}

// 0011,1111,1000,0000,0000,0000,0000,0000 = 1.0(2)	
// 0011,0100,1000,0000,0000,0000,0000,0000 = 1.0(2)	* 10^-23(2) 
// 0100,1011,0000,0000,0000,0000,0000,0000 = 1.0(2)	* 10^23(2) 
// 0100,1011,1000,0000,0000,0000,0000,0000 = 1.0(2)	* 10^24(2) 
// 0011,0011,1000,0000,0000,0000,0000,0000
#include <iostream>

using namespace std;

int main() {
	int intNum = 0;
	long longnum = 0;
	int* intPointer = &intNum;

	int8_t num0;		// 8bit = 1byte
	int16_t num1;		// 16bit = 2byte
	int32_t num2;		// 32bit = 4byte
	
	cout << sizeof(num0) << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num2) << endl;

	cout << sizeof(intNum) << endl;
	cout << sizeof(longnum) << endl;
	cout << sizeof(intPointer) << endl;
}
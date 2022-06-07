#include <iostream>

using namespace std;

int main() 
{
	// 00000000000000000000000000000000 = 0
	// 11111111111111111111111111111111 = -1 / 2 ^32-1 = 4294967295
	// 00000000000000000000000000000000 = 0

	int num1 = 0;
	cout << ~num1 << endl;

	unsigned int num2 = 0;
	cout << ~num2 << endl;

	// 00000101 = 5 = 4 + 1 = 2^2 + (2^0)
	// 00001011 = 11 = 8 + 2 + 1 = 2^3 + 2^1 + (2^0)
	// 00000001 = 1
	num1 = 5;
	num2 = 10;

	int result = num1 & num2;
	cout << result;

	bool isPresent[31];

	// 31일 동안 출석부 확인
	// 0000000000000000000000000000101 = 5		// 1, 3번째 날 출석함.
	// 0000000000000000000000000000001 = 1
	// 0000000000000000000000000000001 = true
	// 0000000000000000000000000000000 = false
	uint32_t attendanceBook = 4u;	// 1, 3번째 날 출석함.
	// attendanceBook &= 0;	// 모든 날 결석
	cout << attendanceBook << endl;

	if ((attendanceBook & (int)pow(2, 0)))
		cout << "1st" << endl;

	if ((attendanceBook & (int)pow(2, 1)))
		cout << "2nd" << endl;

	if ((attendanceBook & (int)pow(2, 2)))
		cout << "3rd" << endl;

	if (attendanceBook & ((int)pow(2, 0) + (int)pow(2, 1)))
		cout << "1 or 2" << endl;

	int flag = (int)pow(2, 0) + (int)pow(2, 1);	// 1, 2번째 날 출석
	if ((attendanceBook & flag) == flag)
		cout << "1 and 2" << endl;

	cout << '\n';
	
	///////////////////////////////////////////////////////////////////////
	
	uint32_t attendanceBook2 = 1u;
	
	attendanceBook2 |= (int)pow(2, 0) + (int)pow(2, 2);

	cout << attendanceBook2 << endl << endl;
	///////////////////////////////////////////////////////////////////////
	// XOR
	// 1 ^ 1 = 0
	// 1 ^ 0 = 1
	// 0 ^ 1 = 1
	// 0 ^ 0 = 0
	
	int num3 = 5;	//00000101
	int num4 = 10;	//00001010
					//00001111
		
	cout << (num3 ^ num4);



}

// 00000000000000000000000000000101
// 00000000000000000000000000000001

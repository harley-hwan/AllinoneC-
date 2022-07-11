#include <iostream>

using namespace std;

int main()
{
	int num = 147;
	int* pointer = &num;

	cout << *pointer << endl;

	*pointer = 100;
	cout << num << endl;
	cout << *pointer << endl << endl;
	
	num = 147;
	int* pNum0 = &num;
	int* pNum1 = &num;
	int* pNum2 = pNum0;

	cout << &num << endl;
	cout << pNum0 << endl;
	cout << pNum1 << endl;
	cout << pNum2 << endl << endl;
	
	cout << num << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl << endl;

	num = 100;
	cout << num << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl << endl;
}
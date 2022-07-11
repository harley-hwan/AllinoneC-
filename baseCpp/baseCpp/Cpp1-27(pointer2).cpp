#include <iostream>

using namespace std;

int main()
{
	int nums[] = { 1, 2, 3 };
	int* pNums = nums;

	cout << pNums[0] << endl;
	cout << pNums[1] << endl;
	cout << pNums[2] << endl << endl;

	cout << pNums << endl;
	cout << pNums + 1 << endl;
	cout << pNums + 2 << endl << endl;

	cout << *pNums << endl;
	cout << *(pNums + 1) << endl;
	cout << *(pNums + 2) << endl << endl;

	cout << *nums << endl;
	cout << *(nums + 1) << endl;
	cout << *(nums + 2) << endl << endl;

	cout << sizeof(nums) << endl;
	cout << sizeof(pNums) << endl << endl;

	cout << nums << endl;
	cout << &nums << endl;
	cout << &nums[0] << endl << endl;
	cout << typeid(1).name() << endl;
	cout << typeid(nums).name() << endl;
	cout << typeid(&nums).name() << endl;
	cout << typeid(&nums[0]).name() << endl << endl;

	char str0[] = "abcd";
	char* str1 = str0;

}
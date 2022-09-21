#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num0 = 10;
	int& num1 = num0;
	int* num2 = &num0;

	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl << endl;

	num0 = 20;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl << endl;

	num1 = 30;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl << endl;

	*num2 = 40;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl << endl;

	/////////////////////////////////////////////
	/////////////////////////////////////////////

	int num3 = 10;
	int& num4 = num3;
	int* num5 = &num3;

	//int& num1 = 1;
	const int& num6 = num3;
	const int& num7 = 1;

	//num7 = 20;
	//cout << num7 << endl;

	vector<int> vec0;
	vector<int>& vec1 = vec0;
	vector<int>* vec2 = &vec0;

	vec0.push_back(1);
	vec1.push_back(2);
	vec2->push_back(3);

	for (int num : vec0)
		cout << num << endl;

	/////////////////////////////////////////////
	/////////////////////////////////////////////

}
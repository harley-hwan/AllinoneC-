#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 5> arr{ 1, 2, 3 }; // 길이 무조건 지정해야함. array<int> arr (x)
	
	array<int, 5> arr0{ 1, 2, 3, 4, 5 };
	array<int, 5> arr1{ 5, 4, 3, 2, 1 };

	cout << arr.size() << endl;
	cout << arr.front() << endl;
	cout << arr[0] << endl;

	cout << arr.back() << endl;
	cout << arr[arr.size() - 1] << endl;

	int arr3[] = { 1, 2, 3 };
	cout << sizeof(arr3) / sizeof(int) << endl;


	for (int i = 0; i < arr0.size(); i++)
		cout << arr0[i];
	cout << endl;

	for (int i = 0; i < arr1.size(); i++)
		cout << arr1[i];
	cout << endl;

	cout << "Finish" << endl << endl;

	array<int, 5> arr4{ 1, 2, 3, 4, 5 };
	array<int, 5> arr5{ 5, 4, 3, 2, 1 };

	if (arr4 == arr5)
		cout << "=" << endl;
	


	if (arr4 > arr5)
		cout << ">" << endl;
	
	if (arr4 < arr5)
		cout << "<" << endl;

	cout << endl;

	cout << arr4.data()[1] << endl;
	
}
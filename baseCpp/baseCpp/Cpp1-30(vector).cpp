#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(5, 2);

	vec.resize(10, 9);
	for (int num : vec)
		cout << num << endl ;

	cout << endl;

	///////////////////////////////////////////////////////////////
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v.size() << endl;
		cout << v.data() << endl;
	}
	///////////////////////////////////////////////////////////////

	vector<int> vec0{ 1, 2, 3 };
	vector<int> vec1{ 3, 2, 1 };

	vec0.swap(vec1);

	for (int num : vec0)
		cout << num;
	cout << endl;

	for (int num : vec1)
		cout << num;
	cout << endl;

	vec0 = vec1;

	for (int num : vec0)
		cout << num;
}
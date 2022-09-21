#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x + y;
}

int main()
{
	int (*f)(int, int) = &sum;
	//int (*f)(int, int) = sum;	// 둘다 가능
	cout << (*f)(1, 2) << endl;
	cout << f(1, 2) << endl;
	cout << (*sum)(1, 2) << endl;

	int (&ff)(int, int) = sum;
	cout << (*ff)(1, 2) << endl;
	cout << ff(1, 2) << endl;
	cout << (*sum)(1, 2) << endl;
	cout << (*(*sum))(1, 2) << endl;
}
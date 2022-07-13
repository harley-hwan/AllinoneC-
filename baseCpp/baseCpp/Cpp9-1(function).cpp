#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x + y;
}

int abs(int x)
{
	return x >= 0 ? x : -x;
}

void print(int x, int y)
{
	cout << x << endl;
	if (y < 0)
		return;
	cout << y << endl;
	return;
}

void print()
{
	cout << "Hello World" << endl;
}

int main(int argc, char* argv[])
{
//	for (int i = 0; i < argc; i++)
//		cout << argv[i] << endl;
	cout << sum(5, 10) << endl;
	cout << abs(-10) << endl;
	cout << abs(10) << endl;
	print(10, -20);
}
#include <iostream>

using namespace std;

//extern int x;
static int x;	// file scope

int get();

enum struct RequestType 
{
	Login, Register, Update, Delete
};




int main()
{
	///////////////////////////////////////////////

	int a = 0;
	cout << a << endl;
	cout << &a << endl;
	cout << endl;
	{
		int a = 10;
		cout << a << endl;
		cout << &a << endl;
		cout << endl;
	}
	cout << a << endl;
	cout << &a << endl;
	cout << endl;

	///////////////////////////////////////////////

	if (int num = 1)
	{
		cout << num << endl;
	}

	///////////////////////////////////////////////

	if (int n = 0)
	{
		cout << n << endl;
	}
	else
	{
		cout << n << endl;
	}

	///////////////////////////////////////////////

	//extern int x;

	x = 200;
	cout << get() << endl;

	///////////////////////////////////////////////

	RequestType::Login;

}
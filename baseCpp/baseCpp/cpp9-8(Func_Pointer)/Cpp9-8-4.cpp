#include <iostream>
#include <functional>
using namespace std;

void gameOver()
{
	cout << "gameOver" << endl;
}

void gameOver2(int a)
{
	cout << "gameOver" << endl;
}

/////////////////////////////////
typedef float real32;
typedef double real64;

using real32 = float;
using real64 = double;
/////////////////////////////////

typedef void (FuncType)(int);

int main()
{
	//void (*f)() = gameOver;
	auto f = gameOver;
	auto& r = gameOver;

	f();
	r();

	auto i = 1;
	cout << typeid(i).name() << endl;

	function<void(int)> ff = gameOver2;
	ff(1);
	
	real32 r32;
	real64 r64;

	cout << typeid(r32).name() << endl;
	cout << typeid(r64).name() << endl;

	FuncType *f2 = gameOver2;
	f2(1);
}
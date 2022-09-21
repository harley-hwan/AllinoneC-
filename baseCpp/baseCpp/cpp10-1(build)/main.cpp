#include <iostream>
#include <string>

#define SQUARE(X) X*X

using namespace std;

int sum(int, int);

int main(int argc, char* argv[])
{
	SQUARE(1);

	int total = 0;
	for (int i = 1; i < argc; ++i)
	{
		string arg(argv[i]);
		int num = stoi(arg);
		total = sum(total, num);
	}

	cout << total << endl;
}
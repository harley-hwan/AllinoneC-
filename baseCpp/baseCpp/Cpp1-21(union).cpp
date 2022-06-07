#include <iostream>

using namespace std;

int main() 
{
	struct Product0
	{
		int idType;
		int idInteger;
		char idChars[10];
	};

	union ID
	{
		int integer;
		char chars[10];
	};

	struct Product1
	{
		int idType;
		ID id;
	};

	Product0 product0 = { 0, 12 };

	if (product0.idType == 0)
		cout << product0.idInteger << endl;
	else
		cout << product0.idChars << endl;

	Product1 product1 = { 1, {.chars = "abc"} };	// v++ 20 에서만 가능

}
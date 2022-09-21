#include <iostream>

using namespace std;

int main()
{
	int num0 = 0;
	if (num0++ == 0 && num0++ == 1)
	{
		cout << num0 << endl;
	}

	num0 = 0;
	if (num0++ + num0++ == 1)
	{
		cout << num0 << endl;
	}
	num0 = 0;
	bool result = num0 = 0;
	if (result)
		cout << "num0 == 0" << endl;
	else //	if (!result)
		cout << "!(num0 == 0)" << endl;
	num0 = 0;

	cout << (num0 == 0 ? "num0 ==0" : "!(num0 ==0)") << endl;
}
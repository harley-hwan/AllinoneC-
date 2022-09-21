#include <iostream>

using namespace std;

int main()
{
	int num = -10;
	int abs = num < 0 ? -num : num;		// »ïÇ× ¿¬»êÀÚ

	cout << abs << endl;

	cout << (num == 0 ? "num == 0" : "num != 0");
	cout << endl;

	cout << 1 << 2 << endl;

	int num0 = 0;
	if (num0++ == 0 && num0++ == 1)
	{
		cout << num0 << endl;
	}
}
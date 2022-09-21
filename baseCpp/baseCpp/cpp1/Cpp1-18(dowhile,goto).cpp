#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//////////////////////////////////////////////////////
	int num = 5;

	do {
		if (num % 3 == 0)
			break;
		if (num % 5 == 0)
			break;
		cout << "Can't divide 3 and 5" << endl;
	} while (false);

	cout << "abcdefgf" << "\n";

	if (num % 3 == 0)
		goto go;
	if (num % 5 == 0)
		goto go;
	cout << "Can't divide 3 and 5" << endl;
go:
	cout << "abcdefgf" << "\n";

	//////////////////////////////////////////////////////

	int num_;	cin >> num_;

	int total = 1;

multiply:
	total *= num_;
	if (--num_)
		goto multiply;

	cout << total << endl << endl;

	//////////////////////////////////////////////////////

	int n;
	cin >> n;
	if (n <= 1)
		cout << n << endl;
	else {
		int prevValue = 0;
		int currValue = 1;

	add:
		int nextValue = prevValue + currValue;
		prevValue = currValue;
		currValue = nextValue;
		if (--n - 1)
			goto add;
		cout << currValue << endl;
	}

}
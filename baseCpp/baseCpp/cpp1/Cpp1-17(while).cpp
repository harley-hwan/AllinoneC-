#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int total = 1;
	for (; num; num--)
		total *= num;

	cout << total << endl;

	total = 1;
	cin >> num;
	while (num)
	{
		total *= num--;
	}
	cout << total << endl;

	for (char ch = 'a'; ch <= 'z'; ch++)
		cout << ch << " ";
	cout << endl;
	char ch = 'a';
	while (ch <= 'z') {
		cout << ch << " ";
		++ch;
	}
	cout << endl;
}
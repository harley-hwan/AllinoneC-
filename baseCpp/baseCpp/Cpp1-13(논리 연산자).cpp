#include <iostream>

using namespace std;

int main() {
	int num0 = 10, num1(20);
	int num2 = 20, num3(20);

	if (num0 == num1 && num2 == num3)
		cout << "AND" << endl;
	
	if (printf("") && num2 == num3)	// ������ false�̸� AND ���� �� ������ false�̹Ƿ� ���� �� �������.
		cout << "AND" << endl;
	
	if (num0 == num1 || num2 == num3)
		cout << "OR" << endl;

	bool result = printf("") && printf("ABC");

	result = printf("a") || printf("ABC");	// ������ true�� OR ���� �� ������ true�̹Ƿ� ���� �� �������.
	
	////////////////////////////////////////////////////////////////////////

	num0 = 10, num1 = 20;

	//if (num0 != num1)


}
#include <iostream>

using namespace std;

int main() {
	int num0 = 10, num1(20);
	int num2 = 20, num3(20);

	if (num0 == num1 && num2 == num3)
		cout << "AND" << endl;
	
	if (printf("") && num2 == num3)	// 왼쪽이 false이면 AND 연산 시 무조건 false이므로 다음 껄 실행안함.
		cout << "AND" << endl;
	
	if (num0 == num1 || num2 == num3)
		cout << "OR" << endl;

	bool result = printf("") && printf("ABC");

	result = printf("a") || printf("ABC");	// 왼쪽이 true면 OR 연산 시 무조건 true이므로 다음 껄 실행안함.
	
	////////////////////////////////////////////////////////////////////////

	num0 = 10, num1 = 20;

	//if (num0 != num1)


}
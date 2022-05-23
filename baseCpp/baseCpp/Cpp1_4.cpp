#include <iostream>
#include <cfloat>

using namespace std;

int main() {
	//unsigned int num0;
	//float num1 = -118.625;
	//memcpy(&num0, &num1, sizeof(num1));

	//cout << num0 << endl;
	//cout << num1 << endl;

	//////////////////////////////////////

	float num2 = 0.1f;
	float num3 = 0.02f * 5.0f;

	cout << num2 << endl;
	cout << num3 << endl;

	cout.precision(64);

	cout << num2 << endl;
	cout << num3 << endl;

	if (num2 == num3)
		cout << "Equal 1" << endl;

	if (fabsf(num2 - num3) <= FLT_EPSILON)
		cout << "Equal 2" << endl;

	float num4 = 1.0f;
	float num5 = 0.0f;
	float num6 = 0.0f;

	for (int i = 0; i < 1000; i++) {		// 오차율이 1000배가 된다.
		num5 = num5 + 0.001;				// 실직적으로 0.001 + epsilon 을 더하는것이다. (아주 작은 오차 발생)
	}
	for (int i = 0; i < 10; i++) {			// 오차율 10배
		num6 = num6 + 0.1;
	}
	cout << "FLT_EPSILON: " << FLT_EPSILON << endl;		// floating point에서 표현할 수 있는 숫자 중에 가장 작은 수
	cout << "오차 * 1000: " << fabsf(num4 - num6) << endl;
	cout << "오차 * 10: " << fabsf(num4 - num5) << endl;

	if (fabsf(num4 - num6) <= FLT_EPSILON) 
		cout << "Equal 3" << endl;
	
	if (fabsf(num4 - num5) <= FLT_EPSILON)
		cout << "Equal 4" << endl;
}
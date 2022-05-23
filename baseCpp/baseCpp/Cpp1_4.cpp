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

	for (int i = 0; i < 1000; i++) {		// �������� 1000�谡 �ȴ�.
		num5 = num5 + 0.001;				// ���������� 0.001 + epsilon �� ���ϴ°��̴�. (���� ���� ���� �߻�)
	}
	for (int i = 0; i < 10; i++) {			// ������ 10��
		num6 = num6 + 0.1;
	}
	cout << "FLT_EPSILON: " << FLT_EPSILON << endl;		// floating point���� ǥ���� �� �ִ� ���� �߿� ���� ���� ��
	cout << "���� * 1000: " << fabsf(num4 - num6) << endl;
	cout << "���� * 10: " << fabsf(num4 - num5) << endl;

	if (fabsf(num4 - num6) <= FLT_EPSILON) 
		cout << "Equal 3" << endl;
	
	if (fabsf(num4 - num5) <= FLT_EPSILON)
		cout << "Equal 4" << endl;
}
#include <iostream>
#include <numeric>
using namespace std;

int main() {

	unsigned int a = 11u;	// u�� ���� ������, Ÿ�Ժ�ȯ�� �Ͼ �� �ְ�, ���ɿ� ������ ���� ��ĥ ���ɼ��� �ִ�.
	long int longNum = 0L;
	long long longLongNum = 0LL;
	unsigned long long ulongLongNum = 0LL;

	// ������ ������ �ִ밪 ���
	cout << "uint8_t: " << (int)numeric_limits<uint8_t>::min() << " ~ " << (int)numeric_limits<uint8_t>::max() << endl;	// char���̶� ����ȯ��.
	cout << "uint16_t: " << numeric_limits<uint16_t>::min() << " ~ " << numeric_limits<uint16_t>::max() << endl;
	cout << "uint32_t: " << numeric_limits<uint32_t>::min() << " ~ " << numeric_limits<uint32_t>::max() << endl;
	cout << "uint64_t: " << numeric_limits<uint64_t>::min() << " ~ " << numeric_limits<uint64_t>::max() << endl << endl;

	cout << "int8_t: " << (int)numeric_limits<int8_t>::min() << " ~ " << (int)numeric_limits<int8_t>::max() << endl;	// char���̶� ����ȯ��.
	cout << "int16_t: " << numeric_limits<int16_t>::min() << " ~ " << numeric_limits<int16_t>::max() << endl;
	cout << "int32_t: " << numeric_limits<int32_t>::min() << " ~ " << numeric_limits<int32_t>::max() << endl;
	cout << "int64_t: " << numeric_limits<int64_t>::min() << " ~ " << numeric_limits<int64_t>::max() << endl;

	return 0;
}
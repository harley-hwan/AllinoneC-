#include <iostream>

using namespace std;

static int num0;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		// �ڵ� ���� -> ������ ����� �ڵ� ������
		// ���� ���� -> ���α׷� ���� �� ����
		// ���� ���� -> ���α׷��Ӱ� ���� ���� �ʼ�
		
//		extern int num;		// ���������� ���⼭ ���� ����
//		static int num;		// ���� ���� -> ���� ������ �Ҵ� (������ ����)
		int num = 0;		// �ڵ� ���� -> ���ÿ� �Ҵ�
		++num;
		cout << num << endl;
	}

	int* p = new int;

	delete p;
}
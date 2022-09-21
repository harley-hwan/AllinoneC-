#include <iostream>

using namespace std;

static int num0;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		// 자동 공간 -> 공간을 벗어나면 자동 해제됨
		// 정적 공간 -> 프로그램 종료 시 해제
		// 동적 공간 -> 프로그래머가 직접 해제 필수
		
//		extern int num;		// 전역변수가 여기서 접근 가능
//		static int num;		// 정적 변수 -> 정적 공간에 할당 (데이터 영역)
		int num = 0;		// 자동 변수 -> 스택에 할당
		++num;
		cout << num << endl;
	}

	int* p = new int;

	delete p;
}
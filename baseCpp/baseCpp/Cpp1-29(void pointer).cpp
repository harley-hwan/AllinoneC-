#include <iostream>

using namespace std;

int main()
{
	int num = 10;
	int* p = &num;
	cout << *p << endl;

	float fnum = 10;
	float* fp = &fnum;

	void* vp = p;
	int* p0 = (int*)vp;
	cout << *p0 << endl;


	int nums[] = { 1, 2, 3 };
	void* vp = nums;

	/////////////////////////////////////////////////////
	int* pp = (int*)malloc(sizeof(int) * 3);		// malloc() Àº void* return
	free(pp);

}

#pragma warning(disable:4996)
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// c++ style
	string s0 = "hello";
	string s1 = "world";
	s0.append(s1);

	cout << s0 << endl;

	// c style
	char s2[100] = "hello";
	char s3[] = "world";

	strcat(s2, s3);
	cout << s2 << endl;
}
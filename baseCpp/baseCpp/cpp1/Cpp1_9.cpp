#pragma warning(disable: 4996)

#include <cstdio>

using namespace std;

int main()
{
	char ch;
	scanf("%c", &ch);
	printf("1, %c\n", ch);

	while (getchar() != '\n');
	//ch = getchar();
	printf("%d\n", ch);

	//fflush(stdin);

	scanf("%c", &ch);
	printf("2, %c\n", ch);
}
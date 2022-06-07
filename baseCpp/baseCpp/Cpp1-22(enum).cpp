#include <iostream>

using namespace std;

enum Color
{
	Red, Green, Blue, Alpha, SIZE
};

struct ColorStruct
{
	int red;
	int green;
	int blue;
	int alpha;
};
int main()
{
	// 0: Red, 1: Green, 2: Blue
	int colors[SIZE] = { 255, 128, 64 };

	//const int red = 0;
	//const int green = 1;
	//const int blue = 2;

	cout << "Red : " << colors[Red] << endl;
	cout << "Green : " << colors[Green] << endl;
	cout << "Blue : " << colors[Blue] << endl;
	int total = 0;
	for (int i = 0; i < SIZE; i++)
		total += colors[i];
	//int avg0 = (colors[Red] + colors[Green] + colors[Blue]) / 3;
	int avg0 = total / SIZE;

	cout << "abg0 : " << avg0 << endl;

	ColorStruct cs = { 255, 128, 64 };
	int avg1 = (cs.red + cs.green + cs.blue + cs.alpha) / 4;
	cout << "abg1 : " << avg1 << endl;
}
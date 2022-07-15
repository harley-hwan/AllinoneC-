#include <iostream>

using namespace std;

void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

struct Weapon
{
	int price;
	int power;
};

void upgrade(Weapon *weapon)
{
	(*weapon).power += 10;
	weapon->price += 10;
}

void print(const Weapon *weapon)
{
	cout << "Weapon price: " << (*weapon).price << endl;
	cout << "Weapon power: " << weapon->power << endl << endl;

	const Weapon* weapon0 = weapon;

}

void func(int nums[4])
{
	cout << typeid(nums).name() << endl;

	//for (int num : nums)
	//	cout << num << endl;

	for (int i = 0; i < 4; i++)
		cout << nums[i] << endl;
}

int main()
{
	int a = 10;
	int* pa = &a;
	cout << a << endl;
	cout << *pa << endl;

	a = 20;
	cout << a << endl;
	cout << *pa << endl;
	
	*pa = 30;
	cout << a << endl;
	cout << *pa << endl;
	//////////////////////////////////////////////////////////////////////////////

	int x = 10, y = 20;
	cout << x << ", " << y << endl;
	swap(x, y);
	cout << x << ", " << y << endl;

	//////////////////////////////////////////////////////////////////////////////

	Weapon weapon{ 10, 20 };
	print(&weapon);
	upgrade(&weapon);
	print(&weapon);
	
	//////////////////////////////////////////////////////////////////////////////
	
	int numss[] = { 1, 2, 3, 4 };
	for (int& num : numss)
	{
		num = 0;
	}

	for (int num : numss)
	{
		cout << "numss: " << num << endl;
	}

	//////////////////////////////////////////////////////////////////////////////
	
	int xx;



	//////////////////////////////////////////////////////////////////////////////

	int nums[4] = { 1, 2, 3, 4 };
	func(nums);
}
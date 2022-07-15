#include <iostream>

using namespace std;

struct Weapon
{
	int price;
	int power;
};

Weapon upgrade(Weapon weapon)
{
	weapon.power += 10;
	weapon.price += 10;
	return weapon;
}

void swap(int px, int py)
{
	//cout << "px addr: " << &px << endl;
	//cout << "py addr: " << &py << endl << endl;
	int temp = px;
	px = py;
	py = temp;
}

int main()
{
	Weapon weapon{ 10, 20 };
	
	cout << "Price: " << weapon.price << endl;
	cout << "Power: " << weapon.power << endl;

	weapon = upgrade(weapon);

	cout << "Price: " << weapon.price << endl;
	cout << "Power: " << weapon.power << endl;



	////////////////////////////////////////////////////////////
	int x = 10, y = 20;
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;

	//cout << "x addr : " << &x << endl;
	//cout << "y addr : " << &y << endl << endl;

	swap(x, y);

	//cout << "x addr : " << &x << endl;
	//cout << "y addr : " << &y << endl << endl;

	cout << "x : " << x << endl;
	cout << "y : " << y << endl;

}
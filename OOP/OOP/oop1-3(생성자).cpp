#include <iostream>

using namespace std;

class Player 
{
private:
	int _health;
	int _power;
	const string _name;

public:
	//Player()
	//{
	//	_health = 100;
	//	_power = 50;
	//	cout << "Player " << _health << ", " << _power << endl;
	//}

	//Player(int health, int power)
	//{
	//	_health = health;
	//	_power = power;
	//	cout << "Player " << _health << ", " << _power << endl;
	//}

	/*Player(int health = 100, int power = 50)
	{
		_health = health;
		_power = power;
		cout << "Player " << _health << ", " << _power << endl;
	}*/

	//Player()
	//{
	//	Player(100, 50);   // Player player = Player(100, 50);이랑 같음.
	//}
	
	// Player() = default;

	Player() : Player(100, 50, "noname") {	}	// 위임 생성자

	Player(int health, int power, string name) 
		: _health(health), _power(power), _name(name)
	{
		/*_health = health;
		_power = power;
		_name = name;*/
		cout << "Player " << _name << ", " << _health << ", " << _power << endl;
	}
	void print()
	{
		cout << _name << " : " << _health << " : " << _power << endl;
	}

};

int main()
{
	//Player player0(200, 100);
	//Player player1 = Player(300, 150);
	//Player* player2 = new Player(400, 200);

	/*Player player3;
	Player player4 = Player();
	Player* player5 = new Player();

	Player player6(1000);*/

	Player player3;
	player3.print();
}
#include <iostream>
#include <string>

using namespace std;

// 클래스는 public으로 해주지 않는 한 외부에서 접근이 불가능
class Player
{
private:
	int _health;
	int _power;
	string _name;

public:
	// 생성자: 정보 은닉. 필요한 정보들만 외부에 노출.
	Player(int health, int power, string name)
	{
		_health = health;
		_power = power;
		_name = name;
	}
	
	void attack(Player& target) 
	{
		cout << "Attack " << _name << "->" << target._name << endl;
		target.damaged(_power);
		//target._health -= _power;
	}

	void damaged(int power)
	{
		_health -= power;
		if (_health <= 0)
			cout << "Died. " << _name << endl;
	}
};

int main()
{
	Player david{ 200, 100, "David"};	//instance
	Player daniel{ 200, 100, "Daniel"};	//instance

	david.attack(daniel);
	david.attack(daniel);
	david.damaged(200);
}
#include <iostream>

using namespace std;

class Player {
private:
	int _num;

public:
	Player(int num) : _num(num)
	{
		cout << "Constructer : " << _num << endl;
	}
	//~Player() = delete;	// �����Ϸ��� �ڵ����� �Ҹ��� ���� ���ϰ�

	~Player() {		// �ı���
		cout << "Destructor : " << _num << endl;
	}
};

Player player0(0);
Player* player1 = new Player(1);

void func()
{
	static Player player2(2);
}
int main()
{
	Player player3(3);
	Player* player4 = new Player(4);
	{
		Player player5(5);
		Player* player6 = new Player(6);
	}
	delete player4;		// new�� ������ �� ���α׷��Ӱ� ���� delete �������.
	func();
	func();
}
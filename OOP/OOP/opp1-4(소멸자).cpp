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
	//~Player() = delete;	// 컴파일러가 자동으로 소멸자 생성 못하게

	~Player() {		// 파괴자
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
	delete player4;		// new로 선언한 건 프로그래머가 직접 delete 해줘야함.
	func();
	func();
}
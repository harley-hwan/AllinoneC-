#include <iostream>
#include <compare>

using namespace std;

int main()
{
	/*int num0 = 1, num1(0);
	if (num0 <=> num1)
		cout << "num0 == num1" << endl;*/
	cout.setf(ios_base::boolalpha);
	
	// C++ 20บฮลอ
	cout << typeid(1 <=> 1.0).name();	//partial_ordering
	cout << ((1 <=> 1.0) == partial_ordering::equivalent);
	cout << is_eq(1 <=> 1);
	cout << ((2 <=> 1) == 0);
}
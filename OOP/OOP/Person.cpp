#include "Person.h"

void foo()
{
	Person p(50.f, 173.f, "daniel");
	p.print();
}

Person::Person(float weight, float height, const std::string& name)
	:_weight(weight), _height(height), _name(name)
{

}
void Person::print()
{
	using namespace std;
	cout << _name << endl;
}


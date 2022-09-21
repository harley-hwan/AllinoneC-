#include <iostream>

using namespace std;

struct Person
{
	float weight;
	float height;
};

int main()
{
	Person persons[] = {
		Person{70.f, 181.f},
		Person{56.2f, 167.3f}
	};

	/*for (int i = 0; i < 2; i++)
	{
		persons[i].weight = 0.0f;
	}*/

	for (Person& person : persons)
	{
		person.weight = 0.0f;
	}

	for (Person person : persons)
	{
		cout << person.weight << " " << person.height << endl;
	}
}
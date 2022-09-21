#include <iostream>

using namespace std;

struct Person
{
	float weight;
	float height;
};

int main()
{
	//int s;
	//cin >> s;
	//int* arr = new int[s] {1, 2, 3};
	//delete[] arr;

	Person* person = new Person{ 74.1f, 180.2f };

	cout << (*person).weight << endl;
	cout << person->weight << endl;

	Person* persons[2] = {
		new Person{56.f, 174.3f},
		new Person{74.2f, 184.f},
	};

	for (Person* person : persons)
	{
		person->weight = 0.0f;
	}
	for (Person* person : persons)
	{
		cout << person->weight << endl;
	}
}
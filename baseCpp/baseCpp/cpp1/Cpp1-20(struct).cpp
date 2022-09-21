#include <iostream>
#include <cstring>
using namespace std;



int main()
{
	struct EyeSight
	{
		float left;
		float right;
	};

	struct alignas(16) Person
	{
		float height;		//	4
		float weight;		//	4
		char name[10];		//	10
		short grade;		//	2
		EyeSight eyeSight;	//	8
	};

	//Person person;
	Person person0 = { 174.6, 67.8, "David", 1, {1.1f, 1.0f} };
	Person person1 = person0;

	//person.height = 174.2;
	//person.weight = 67.8;
	//person.grade = 1;
	////person.name = "David";
	//strcpy_s(person.name, 10, "David");

	cout << person1.height << endl;
	cout << person1.weight << endl;
	cout << person1.name << endl;
	cout << person1.grade << endl;
	cout << person1.eyeSight.left << endl;
	cout << person1.eyeSight.right << endl;

	///////////////////////////////////////////////////////////

	Person persons[5];
	persons[0].grade = 1;

	cout << persons[0].grade << endl;

	Person& person = persons[1];
	person.grade = 5;

	cout << person.grade << endl;
	cout << persons[1].grade << endl;

	///////////////////////////////////////////////////////////

	Person person2 = { 174.6, 67.8, "David", 1 };

	cout << sizeof(Person) << endl;
}
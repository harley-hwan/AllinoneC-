#pragma once

//#include "Person.h""
#include <vector>

class Person;
class Village
{
private:
	std::vector<Person> persons;

public:
	void add(Person);
	void print();
};
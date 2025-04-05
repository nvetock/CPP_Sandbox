#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	std::string_view getName();
	int getAge();
	Person getSibling();

	void setName(std::string_view name);
	void setAge(int& age);
	void setSibling(Person* sibling);

	Person();
private:
	std::string name{};
	int age{};
	Person* sibling{};

	
};

#endif


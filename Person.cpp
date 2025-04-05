#include "Person.h"

std::string_view Person::getName() {
	return name;
}

int Person::getAge(){
	return age;
}

Person Person::getSibling(){
	if (this->sibling == nullptr) {
		return Person();
	}
	return *sibling;
}

Person::Person() {
	this->name = "";
	this->age = -1;
	this->sibling = nullptr;
}

void Person::setName(std::string_view name) {
	this->name = name;
}
void Person::setAge(int& age) {
	this->age = age;
}
void Person::setSibling(Person* sibling){
	this->sibling = sibling;
}
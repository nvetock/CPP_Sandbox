#include "StructTests.h"
#include <iostream>
#include <string>

std::ostream& StructTests::operator<<(std::ostream& out, StructTests::Employee e) {
	out << "Employee #" << e.id << " | " << e.name << ", age: " << e.age << '\n';
	return out;
}

std::ostream& StructTests::operator<<(std::ostream& out, StructTests::Employee* e) {
	out << "Employee #" << e->id << " | " << e->name << ", age: " << e->age << '\n';
	return out;
}

std::ostream& StructTests::operator<<(std::ostream& out, StructTests::Company c) {
	out << "Number of employees: " << c.numberOfEmployees << " CEO: "
		<< c.CEO;
	return out;
}


void StructTests::test_StructTests() {
	/*
		Purpose of this code is to test creating structs and implementing a struct
		with a pointer to another struct within to test arrow operators and chaining ->.

		Overloaded operater<< was also setup to define printing for instantiated structs.
	*/
	std::cout << "\n\n\nSTART STRUCT TESTS\n";

	StructTests::Employee e{};
	e.name = "John";
	e.age = 30;
	e.id = 1;

	// Print Employee without pointer
	std::cout << "Print Employee as standard struct:\n";
	std::cout << e.name << ", " << e.age << " years old.\n";

	// Print employee utilizing pointers
	StructTests::Employee* employeePtr{ &e };
	std::cout << "Print Employee struct utilizing pointer:\n";
	std::cout << employeePtr << '\n';
	

	// Companies
	StructTests::Company company1{};
	company1.CEO = &e;
	
	StructTests::Company* companyClone{ &company1 };
	
	std::cout << "\n\nComparing both company1 and companyClone:\n";
	std::cout << company1.CEO->name << '\n';
	std::cout << companyClone->CEO->name << '\n';
}
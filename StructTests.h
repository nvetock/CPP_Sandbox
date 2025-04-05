#ifndef STRUCTTESTS_H
#define STRUCTTESTS_H

#include <iostream>

namespace StructTests {
	struct Employee {
		int id{};
		std::string name{};
		int age{};
	};

	struct Company {
		int numberOfEmployees{ 1 };
		Employee* CEO{};
	};

	std::ostream& operator<<(std::ostream& out, Employee e);
	std::ostream& operator<<(std::ostream& out, Employee* e);
	std::ostream& operator<<(std::ostream& out, Company c);
	
	void test_StructTests();
}

#endif
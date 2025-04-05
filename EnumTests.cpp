#include "EnumTests.h"
#include <iostream>
#include <string>
#include <bitset>

std::string_view EnumTests::getCharacterClassName(CharacterClass c) {
	switch (c) {
	case CharacterClass::warrior:
		return "warrior";
		break;
	case CharacterClass::ranger:
		return "ranger";
		break;
	case CharacterClass::paladin:
		return "paladin";
		break;
	case CharacterClass::wizard:
		return "wizard";
		break;
	default:
		return "Invalid CharacterClass";
		break;
	}
}

std::ostream& EnumTests::operator<<(std::ostream& out, CharacterClass c) {
	out << EnumTests::getCharacterClassName(c);
	return out;
}

void EnumTests::test_EnumTests() {
	/*
		Purpose of this test is to try out unscoped and scoped enums.

		Additionally there is a test setting enums combined with bitset manipulation
	*/
	std::cout << "\n\n\nSTART ENUM TESTS\n";

	std::cout << "Unscoped Enum Tests:\n";

	Color apple{ RED };
	Color shirt{ GREEN };
	Color table{ BLUE };

	std::cout << apple << " | " << shirt << " | " << table << '\n';

	std::cout << "\n\n\n";
	std::cout << "Enum Bitset Tests:\n";

	std::bitset<8> me{};
	me.set(Flags::isHappy);
	me.set(Flags::isLaughing);

	std::cout << std::boolalpha; // print bool as true/false

	// Query a few states (we use the any() function to see if any bits remain set)
	std::cout << me.all() << '\n';
	std::cout << "I am happy? " << me.test(Flags::isHappy) << '\n';
	std::cout << "I am laughing? " << me.test(Flags::isLaughing) << '\n';

	std::cout << "\n\n\n";
	std::cout << "Enum Conversion Tests:\n";

	Monsters::MonsterType monster1{ Monsters::troll };
	CharacterClass playerCharacter{ CharacterClass::wizard };
	std::cout << monster1 << '\n';          // This should print as an integer
	std::cout << playerCharacter << '\n';   // This should print "wizard"

}
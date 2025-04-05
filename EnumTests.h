#ifndef ENUMTESTS_H
#define ENUMTESTS_H

#include <string>

enum Color
{
	// Color is unscoped and set in the global scope
	// All enumerators are additionally in the global scope
	RED,
	GREEN,
	BLUE,
};

	// State and MonsterType are unscoped and placed within namespaces 
	// to remove from the global scope
namespace Flags
{
	enum State
	{
		isHungry,
		isSad,
		isMad,
		isHappy,
		isLaughing,
		isAsleep,
		isDead,
		isCrying,
	};
}

namespace Monsters {
	enum MonsterType {
		orc,
		goblin,
		troll,
		kobold,
	};
}

// 
enum class CharacterClass {
	warrior,
	ranger,
	paladin,
	wizard,
};

// Enums can be printed to strings (or found by strings) in two ways.
// 1. Using a function that branches through a switch statement
// 2. Using an array.
// This method below demonstrates the first method

namespace EnumTests {
	std::string_view getCharacterClassName(CharacterClass c);
	std::ostream& operator<<(std::ostream& out, CharacterClass c);


	void test_EnumTests();
}
#endif
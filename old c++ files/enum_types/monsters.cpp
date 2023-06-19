#include <iostream>
#include <string>
//includes
/**
* Name: Humna Sultan
* Program Name: Chapter 7 - Extra assignment (S.7.x)
* Date: 14 April 2020
* Extra Things: Includes "Else" as a monster type and takes user
input if this is the case
*/
enum class Monsters
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
	ELSE
};
//enum class of monster options
struct MonsterInfo
{
	Monsters type;
	std::string m_name;
	int m_health;
};
//monster info variables struct

std::string assignMonType(MonsterInfo monster)
//returns value according to monster type
{
	if (monster.type == Monsters::OGRE)
	{
		return "Ogre";
	}
	else if (monster.type == Monsters::DRAGON)
	{
		return "Dragon";
	}
	else if (monster.type == Monsters::ORC)
	{
		return "Orc";
	}
	else if (monster.type == Monsters::GIANT_SPIDER)
	{
		return "Giant Spider";
	}
	else if (monster.type == Monsters::SLIME)
	{
		return "Slime";
	}
	else if (monster.type == Monsters::ELSE)
	{
		std::string mon = "";
		std::cout << "What type of monster is this? :: ";
		std::cin >> mon;
		return mon;
		//occurs if monster type is "else"
		//extra
	}
}
void printMonInfo(MonsterInfo monster)
{
	std::cout << "The name of this monster is " <<
	monster.m_name << ". This monster is a(n) " <<

	assignMonType(monster) << " and has " << monster.m_health << "health.\n";
}
//function that prints out monster's info using information stored in struct + functions
int main()
{
	MonsterInfo ogre1{ Monsters::OGRE, "Torg", 145 };
	MonsterInfo slime1{ Monsters::SLIME, "Blurp", 23 };
	//declares monster variable
	MonsterInfo mon1{ Monsters::ELSE, "Jim", 67 };
	//extra monster variable; else prompts user input
	//extra
	printMonInfo(ogre1);
	printMonInfo(slime1);
	printMonInfo(mon1);
	//prints information about monsters initialized above
	return 0;
}
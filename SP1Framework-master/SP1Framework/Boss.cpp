#include "Boss.h"

Boss::Boss()
{
	setHealth(0);
	setDamage(0);
	setResistance(0);
	setSpeed(0);
}

string Boss::getMoveName(int MoveNo)
{
	return "BossGETNAME";
}

int Boss::skill(int x)
{
	return 0;
}

Boss::~Boss()
{
}
#include "Die.h"
#include <ctime>
#include <algorithm>



Die::Die()
{
	this->sides = 6;
	this->value = 0;
}

Die::Die(int sides)
{
	this->sides = sides;
	this->value = 0;
}

void Die::roll()
{
	srand(time(NULL));
	this->value = rand() % this->sides + 0;
}

int Die::getValue()
{
	return this->value;
}

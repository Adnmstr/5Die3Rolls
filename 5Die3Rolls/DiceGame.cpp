// All work is my own
// Adonijah Farner

#include <iostream>
#include "Die.h"

using namespace std;

void rollDie(Die *ptr);
void showDice(Die *ptr);
int getTotalScore(Die *ptr);

int main()
{
	// Create an array of five die
	Die myDice[5] = {Die()};
	Die *ptr = myDice;
	// Roll the dice in the myDice array
	rollDie(ptr);
	// Show the values of each die
	showDice(ptr);




	return 0;
}

//--------------------------------------------------------------------------------------
// Function to roll an array of dice
// Input - Die: *ptr
// Output - void
//--------------------------------------------------------------------------------------
void rollDie(Die *ptr)
{
	for (int i = 0; i < 5; i++)
	{
		ptr[i].roll();
	}
}
//--------------------------------------------------------------------------------------
// End of rollDice function
//--------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------
// Function to display the die number and its value
// Input - Die: *ptr
// Output - void
//--------------------------------------------------------------------------------------
void showDice(Die *ptr)
{
	int value;
	cout << "1  2  3  4  5" << endl << "----------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		value = ptr[i].getValue;
		cout << value << "  ";
	}
	cout << endl;
}
//--------------------------------------------------------------------------------------
// End of showDice function
//--------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------
// Function to get the total score of all the dice
// Input - Die: *ptr
// Output - int
//--------------------------------------------------------------------------------------
int getTotalScore(Die *ptr)
{
	int count;
	for (int i = 0; i < 5; i++)
	{
		count += ptr[i].getValue;
	}
	return count;
}
//--------------------------------------------------------------------------------------
// End of getTotalScore function
//--------------------------------------------------------------------------------------
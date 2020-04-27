#pragma once

#include "Person.h"
#include <list>
#include <vector>

public ref class Elevator
{
public:
	Elevator();
	static int currentLevel;
	static int destinationLevel;
	static std::list<Person>* queueOrders;
	static std::list<Person>* peopleInElevator;
	static int peopleInTheQueue;
//	int levelCalled[100];
	static bool used;
	static int currentDirection; // -1 down, 0 no action, 1 - up
	static void Execute();
	static int maxLift = 700;
	static int currentLift;
	static time_t lastAction;
	void OrderElevator(int customerNumber, int from, int to);
	void HandleLevel();
	static bool goDown;
	static int GetMinOrderedLevel();
	static int GetMaxOrderedLevel();
	static int GetMaxDestLevel();
	static int GetMinDestLevel();
	static int TotalNumberOfOrders;
	
};

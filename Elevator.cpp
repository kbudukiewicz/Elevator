#include "Elevator.h"
#include <windows.h>
#include<ctime>


void Elevator::Execute()
{
	while (1)
	{
		while (used == true)
		{

		}
		used = true;


		time_t currentTime = time(0);
		if (currentTime >= lastAction + 5 && queueOrders->size() == 0 && peopleInElevator->size() == 0)
		{
			goDown = true;
			destinationLevel = 0;
		}
		else
		{
			goDown = false;
		}

		if (currentDirection == -1)
		{
			int result;
			int minOrdred = 100;
			int minDest = 100;
			if (queueOrders->size() != 0)
				minOrdred = GetMinOrderedLevel();
			if (peopleInElevator->size() != 0)
				minDest = GetMinDestLevel();

			if (minOrdred >= minDest)
				result = minDest;
			else
				result = minOrdred;

			if (result != 100)
				destinationLevel = result;

		}
		else if (currentDirection == 1)
		{
			int result;
			int maxOrdred = -1;
			int maxDest = -1;
			if (queueOrders->size() != 0)
				maxOrdred = GetMaxOrderedLevel();
			if (peopleInElevator->size() != 0)
				maxDest = GetMaxDestLevel();

			if (maxOrdred <= maxDest)
				result = maxDest;
			else
				result = maxOrdred;

			if (result != -1)
				destinationLevel = result;

		}
		else if (currentDirection == 0)
		{
			if (peopleInElevator->size() != 0)
			{
				int firstQueue = peopleInElevator->front().levelRequested;
				destinationLevel = firstQueue;
			}
			else if (queueOrders->size() != 0)
			{
				int firstQueue = queueOrders->front().levelFrom;
				destinationLevel = firstQueue;
			}
		}

		if (goDown == true && currentLevel != 0)
		{
			currentDirection = -1;
		}

		if (currentLevel > destinationLevel)
			currentDirection = -1;
		else if (currentLevel < destinationLevel)
			currentDirection = 1;
		else
			currentDirection = 0;

		used = false;
		Sleep(1000);

	}
}

Elevator::Elevator()
{
	queueOrders = new std::list<Person>();
	peopleInElevator = new std::list<Person>();
	currentLift = 0;
	TotalNumberOfOrders = 0;
}

void Elevator::OrderElevator(int customerNumber, int from, int to)
{
	while (used == true)
	{

	}
	used = true;
	Person temp(customerNumber, from, to);
	peopleInTheQueue++;
	this->queueOrders->push_back(temp);
	used = false;
}

void Elevator::HandleLevel()
{
	while (used == true)
	{

	}
	used = true;

	std::list<Person> *removeFromElevator = new std::list<Person>();
	std::list<Person> *removeFromQueue = new std::list<Person>();
	std::list<Person>::iterator it;
	for (it = peopleInElevator->begin(); it != peopleInElevator->end(); ++it)
	{
		if (it->levelRequested == currentLevel)
		{
			// wysiadam
			Person temp(it->customerNumber, it->levelFrom, it->levelRequested, it->weight);
			currentLift -= it->weight;
			lastAction = time(0);
			removeFromElevator->push_back(temp);
		}
	}
	for (it = queueOrders->begin(); it != queueOrders->end(); ++it)
	{
		if (it->levelFrom == currentLevel && currentLift + it->weight <= maxLift)
		{
			Person temp(it->customerNumber, it->levelFrom, it->levelRequested, it->weight);
			currentLift += it->weight;
			peopleInElevator->push_back(temp);
			removeFromQueue->push_back(temp);
			lastAction = time(0);
		}
	}

	for (it = removeFromQueue->begin(); it != removeFromQueue->end(); ++it)
	{
		Person temp(it->customerNumber, it->levelFrom, it->levelRequested, it->weight);
		queueOrders->remove(temp);
	}

	for (it = removeFromElevator->begin(); it != removeFromElevator->end(); ++it)
	{
		Person temp(it->customerNumber, it->levelFrom, it->levelRequested, it->weight);
		peopleInElevator->remove(temp);
	}
	delete  removeFromElevator;
	delete  removeFromQueue;
	used = false;
}

int Elevator::GetMinOrderedLevel()
{
	int min = 10;
	std::list<Person>::iterator it;
	for (it = queueOrders->begin(); it != queueOrders->end(); ++it)
	{
		if (it->levelFrom <= min)
		{
			min = it->levelFrom;
		}
	}
	return min;
}
int Elevator::GetMaxOrderedLevel()
{
	int max = 0;
	std::list<Person>::iterator it;
	for (it = queueOrders->begin(); it != queueOrders->end(); ++it)
	{
		if (it->levelFrom >= max)
		{
			max = it->levelFrom;
		}
	}
	return max;
}
int Elevator::GetMaxDestLevel()
{
	int max = 0;
	std::list<Person>::iterator it;
	for (it = peopleInElevator->begin(); it != peopleInElevator->end(); ++it)
	{
		if (it->levelFrom >= max)
		{
			max = it->levelRequested;
		}
	}
	return max;
}
int Elevator::GetMinDestLevel()
{
	int min = 10;
	std::list<Person>::iterator it;
	for (it = peopleInElevator->begin(); it != peopleInElevator->end(); ++it)
	{
		if (it->levelFrom <= min)
		{
			min = it->levelRequested;
		}
	}
	return min;
}
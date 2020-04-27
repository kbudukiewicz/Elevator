#include "Person.h"
#include <iostream>
Person::Person()
{

}

Person::Person(int customerNumber, int from, int to)
{
	this->customerNumber = customerNumber;
	this->levelFrom = from;
	this->levelRequested = to;
	this->weight = rand() % 20 + 60;

}

Person::Person(int customerNumber, int from, int to, int weight)
{
	this->customerNumber = customerNumber;
	this->levelFrom = from;
	this->levelRequested = to;
	this->weight = weight;

} 

bool Person::operator==(const Person other)
{
	if (this->customerNumber == other.customerNumber)
		return true;
	return false;

}
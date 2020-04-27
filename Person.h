#pragma once
public class Person
{
public:
	int customerNumber;
	int levelRequested;
	int levelFrom;
	int weight;
	Person();
	Person(int customerNumber, int levelFrom, int destinationLevel);
	Person(int customerNumber, int from, int to, int weight);
public:bool operator==(const Person other);
};

#pragma once
#include"KeyValuePair.h"
class __declspec(dllexport) HashSet
{

private:
	static const int _initialMax = 1;
	int _currentMax = _initialMax;

	int _currentIndex = 0;
	int _incrementAmount = 10;

	KeyValuePair** _collection;
	KeyValuePair** _buffer;

public:
	HashSet();
	void Add(KeyValuePair* newKVP);

	KeyValuePair* GetFromIndex(int index);
	int Length();

	~HashSet();
};
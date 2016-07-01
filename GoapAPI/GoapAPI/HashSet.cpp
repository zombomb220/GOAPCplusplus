#include "HashSet.h"

HashSet::HashSet() {
	_collection = new KeyValuePair*[_initialMax];
}

void HashSet::Add(KeyValuePair newKVP)
{
	if (_currentIndex > _currentMax) {

		_buffer = new KeyValuePair*[_currentMax];

		//copy to buffer
		for (int i = 0; i < _currentMax; i++)
		{
			_buffer[i] = _collection[i];
			delete[] _collection;
		}

		//increase size of _collection
		_currentMax += _incrementAmount;
		_collection = new KeyValuePair*[_currentMax];

		for (int i = 0; i < _currentMax - _incrementAmount; i++) {
			_collection[i] = _buffer[i];
		}

		delete[] _buffer;

		_currentIndex++;
		_collection[_currentIndex] = &newKVP;
	}
	else
	{		
		_collection[_currentIndex] = &newKVP;
		_currentIndex++;
	}
}

KeyValuePair HashSet::GetFromIndex(int index)
{
	return  *_collection[index];
}

HashSet::~HashSet()
{
	delete &_initialMax;
	delete &_currentMax;
	delete &_currentIndex;
	delete &_incrementAmount;

	delete[] & _collection;

	delete _collection;
	delete _buffer;
}
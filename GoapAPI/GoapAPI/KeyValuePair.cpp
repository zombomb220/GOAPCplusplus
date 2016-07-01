#include "KeyValuePair.h"
#include <stdio.h>

KeyValuePair::KeyValuePair(char key[_maxKeyLength], bool value)
{
	for (int i = 0; i < _maxKeyLength; i++) {
		_key[i] = key[i];
	}
	_value = value;
}

bool KeyValuePair::GetValue()
{
	return _value;
}

char KeyValuePair::GetKey()
{
	return *_key;
}

KeyValuePair::~KeyValuePair()
{		
	delete[] _key;
	delete &_value;
}

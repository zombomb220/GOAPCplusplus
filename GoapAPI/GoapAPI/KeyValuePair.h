#pragma once
class __declspec(dllexport) KeyValuePair
{
private:
	static const int _maxKeyLength = 50;
	char _key[_maxKeyLength];
	bool _value;
public:
	KeyValuePair(char key[_maxKeyLength], bool value);

	bool GetValue();
	char GetKey();

	~KeyValuePair();
};
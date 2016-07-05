#pragma once
class __declspec(dllexport) KeyValuePair
{
public:
	static const int _maxKeyLength = 50;
	KeyValuePair(char key[_maxKeyLength], bool value);

	bool GetValue();
	char* GetKey();

private:
	char _key[_maxKeyLength];
	bool _value;
};
#include "stdafx.h"
#include "GoapAPI\HashSet.h"
#include "GoapAPI\KeyValuePair.h"
#include <iostream>	
using namespace std;

int main()
{
	HashSet *h = new HashSet();

	KeyValuePair * kvp = new KeyValuePair("Test", true);

	h->Add(*kvp);

	KeyValuePair a = h->GetFromIndex(0);

	cout << a.GetValue();

	int x;
	cin >> x;


	return 0;
}

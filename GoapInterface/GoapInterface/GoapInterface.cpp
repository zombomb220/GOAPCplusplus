#include "stdafx.h"
#include "GoapAPI\HashSet.h"
#include "GoapAPI\KeyValuePair.h"
#include <iostream>	
using namespace std; 

int main()
{
	HashSet *h = new HashSet();
	
	h->Add(new KeyValuePair("Jordan", false));
	h->Add(new KeyValuePair("Aaron", true));
	h->Add(new KeyValuePair("Matt", false));/*
	h->Add(new KeyValuePair("Todd", true));
	h->Add(new KeyValuePair("Megan", false));
	h->Add(new KeyValuePair("Chris", true));*/

	cout << "Length: " << h->Length() << endl << "---------" << endl;
	for (int i = 0; i < h->Length(); i++)
	{		
		cout << h->GetFromIndex(i)->GetKey() << " : " << h->GetFromIndex(i)->GetValue() << endl;
	}

	int x;
	cin >> x;

	delete h;
	return 0;
}

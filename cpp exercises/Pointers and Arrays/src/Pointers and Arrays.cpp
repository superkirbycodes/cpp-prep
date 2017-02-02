//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Loop through an array using a pointer , with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers

int main() {

	string texts[] = { "hello", "world", "three" };

	string *pTexts = texts;


	cout << sizeof(texts) << endl;
	cout << sizeof(string) << endl;
	cout << sizeof(texts) / sizeof(string) << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++ , pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(true){
		cout << *pElement << " " << flush;

		if(pElement == pEnd){
			break;
		}
		pElement++;
	}

	cout << endl;

	cout << pElement << endl;
	cout << pEnd << endl;
	return 0;
}

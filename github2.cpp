//============================================================================
// Name        : Test4.cpp
// Author      : Nikita
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdint.h>

using namespace std;

int main(void) {

	cout << "Size of char is "<< sizeof(uint32_t)<< " byte" << endl;
	cout << "Size of char is "<< sizeof(char)<< " byte" << endl;
	cout << "Size of char is "<< sizeof(uint8_t)<< " byte" << endl;

	uint32_t name_2= 'a';
	uint32_t name_3= 'b';

	cout << name_2 << endl;
	cout << name_3 << endl;

	return 0;
}

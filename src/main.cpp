/**************************************************************************************************/

/*
* File: main.cpp
* Author: Ray Weaver
* NetID: rayweaver
* Date: November 20, 2014
*/

/**************************************************************************************************/

/**************************************************************************************************/
/*							Assignment 4
*	
*
*/
/**************************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include <cstdio>

#include "testing.h"
#include "Visit.h"

using namespace std;

/**************************************************************************************************/

int main(int argc, char *argv [])
{



	cout << "Beginning tests." << endl;

	testNonDefaultConstructor();
	//testCompare();
	testAddState();



	cout << "Tests complete." << endl;

	return 0;
}

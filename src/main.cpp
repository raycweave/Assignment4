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

#include "Visit.h"

using namespace std;

/**************************************************************************************************/

int main(int argc, char *argv [])
{

	Visit testData1;
	Visit testData2;

	Visit *testTemp1 = NULL;
	Visit *testTemp2 = NULL;

	testTemp1 = &testData1;
	testTemp2 = &testData2;


	cout << "Beginning tests." << endl;


	testData1.setStartTime(100);
	testData1.setEndTime(105);
	testData1.setLocation("ECE Headquarters");

	testData2.setStartTime(106.00084);
	testData2.setEndTime(109.00025);
	testData2.setLocation("Fourth Ave");


	//////////////////////////////////////////////////////////////////
	///////////////////Testing Visit()////////////////////////////////
	//////////////////////////////////////////////////////////////////


	if (testData1.getStartTime() != 100 && testData1.getEndTime() != 105 && testData1.getLocation() != "ECE Headquarters") 
	{
		cout << "   UNIT TEST FAILED: Visit()" << endl;						// need to write in the function name?
	}

	else 
	{
		cout << "   UNIT TEST PASSED: Visit()" << endl;
	}


	//////////////////////////////////////////////////////////////////
	///////////////////Testing compare()//////////////////////////////
	//////////////////////////////////////////////////////////////////


	if (testData1.compare(testTemp1, testTemp2) == true)
	{
		cout << "   UNIT TEST PASSED: compare()" << endl;
	}
	
	else 
	{
		cout << "   UNIT TEST FAILED: compare()" << endl;
	}


	//////////////////////////////////////////////////////////////////
	///////////////////Testing addState()/////////////////////////////
	//////////////////////////////////////////////////////////////////

	testData1.addState("Init");
	if (testData1.getStates().back() != "Init") 
	{
		cout << "   UNIT TEST FAILED: addState()" << endl;
	}

	else 
	{
		cout << "   UNIT TEST PASSED: addState()" << endl;
	}

	//////////////////////////////////////////////////////////////////
	///////////////////Testing getVisitString()/////////////////////////////
	//////////////////////////////////////////////////////////////////





	cout << "Tests complete." << endl;

	return 0;
}

/**************************************************************************************************/

/*
* File: testing.cpp
* Author: Ray Weaver
* NetID: rayweaver
* Date: November 20, 2014
*/

/**************************************************************************************************/


#include "Visit.h"
#include "testing.h"

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


bool testNonDefaultConstructor() {
	
	Visit testData1;
	Visit testData2;

	Visit *testTemp1 = NULL;
	Visit *testTemp2 = NULL;

	testTemp1 = &testData1;
	testTemp2 = &testData2;

	bool result = false;

	testData1.setStartTime(100);
	testData1.setEndTime(105);
	testData1.setLocation("ECE Headquarters");

	if (testData1.getStartTime() != 100 && testData1.getEndTime() != 105 && testData1.getLocation() != "ECE Headquarters")
	{
		result = false;
	}

	if (testData1.getStates().size() != 0) {
		result = false;
	}

	

	else
	{
		result = true;
	}
	return result;
}

bool testCompare() {

	Visit testData1;
	Visit testData2;

	Visit *testTemp1 = NULL;
	Visit *testTemp2 = NULL;

	testTemp1 = &testData1;
	testTemp2 = &testData2;

	testData1.setLocation("Init");
	testData2.setLocation("Ready");

	bool result = false;

	if (str

	else
	{
		result = false;
	}
	return result;
}

bool testAddState() {

	Visit testData1;
	Visit testData2;

	bool result = false;

	testData1.addState("Init");
	testData1.addState("Go");
	testData2.addState("Go");


	if (testData1.getStates().back() != "Go")
	{
		result = false;
	}

	else
	{
		result = true;
	}

	return result;
}

bool testGetVisitString() {

	bool result = false;

	return result;

}
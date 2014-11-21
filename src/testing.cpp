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

#include <string.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


bool testNonDefaultConstructor() {
	
	bool result = false;

	Visit testData1;
	Visit testData2;
	Visit testData3("Eegee's", 85805.037, 85808.557);

	Visit *testTemp1 = NULL;
	Visit *testTemp2 = NULL;

	testTemp1 = &testData1;
	testTemp2 = &testData2;

	testData1.setStartTime(100);
	testData1.setEndTime(105);
	testData1.setLocation("ECE Headquarters");

	testData2.setStartTime(85801.037);
	testData2.setEndTime(85802.037);
	testData2.setLocation("ECE Back Lot");

	

	if (testData1.getStartTime() != 100 && testData1.getEndTime() != 105 && testData1.getLocation() != "ECE Headquarters")
	{
		result = false;
	}

	if (testData1.getStates().size() != 0) {
		result = false;
	}

	if (testData2.getStartTime() != 85801.037 && testData1.getEndTime() != 85802.037 && testData1.getLocation() != "ECE Back Lot")
	{
		result = false;
	}

	if (testData2.getStates().size() != 0) {
		result = false;
	}
	
	if (testData3.getStartTime() != 85805.037 && testData3.getEndTime() != 85808.557 && testData3.getLocation() != "Eegee's")
	{
		result = false;
	}

	if (testData3.getStates().size() != 0) {
		result = false;
	}

	else
	{
		result = true;
	}

	return result;
}

bool testCompare() {

	bool result = false;

	Visit testData1;
	Visit testData2;
	Visit testData3("Eegee's", 85805.037, 85808.557);

	Visit *testTemp1 = NULL;
	Visit *testTemp2 = NULL;

	testTemp1 = &testData1;
	testTemp2 = &testData2;

	testData1.setLocation("ECE HeadQuarters");
	testData2.setLocation("John's House");

	if (Visit::compare(testTemp1,testTemp2) == false && testData1.getLocation().compare(testData2.getLocation()) > 0) {

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

	if (testData1.getStates().size() != 2) {
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
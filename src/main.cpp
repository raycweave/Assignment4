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


	/*
	* check for the correct number of command line arguments.  If incorrect
	* provide a simple usage message to the assist the user
	*/

	cout << "Beginning tests." << endl;

	/*
	if (argc != 3) {
		cerr << "Usage: " << argv[0] << " logFile outputFile" << endl;
		return -1;
	}
	
	VehicleJourney roadTrip;
	roadTrip.setStates(NMEAParser::parseLogFile(argv[1]));
	
	if (roadTrip.getStates().size() > 0)
	{
		roadTrip.analyzeJourney();
		if (roadTrip.writeOutputFile(argv[2]) == false)
		{
			cerr << "Cannot open file " << argv[2] << endl;
			return -1;
		}
	}

	else {
		cerr << "The file " << argv[1] << " cannot open or is empty" << endl;
		return -1;
	}*/
	
	return 0;
}

/**************************************************************************************************/

/*
* File: Visit.cpp
* Author: Ray Weaver
* NetID: rayweaver
* Date: November 4, 2014
*/

/**************************************************************************************************/

#include "Visit.h"
#include "GPSIMUState.h"
#include "Location.h"
#include "NMEAParser.h"
#include "VehicleJourney.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;


Visit::Visit(void) {
	location = "";
	startTime = 0.0;
	endTime = 0.0;

	return;
}

Visit::~Visit(void) { }

Visit::Visit(string location, double startTime, double endTime) {
	this->location = location;
	this->startTime = startTime;
	this->endTime = endTime;

	return;
}

/*
Compares two vector elements by name, and ascii orders them by which is less than
*/
bool Visit::compare(Visit* v1, Visit* v2) {
	if (v1->getLocation() < v2->getLocation()) {
		return true;
	}

	else if (v1->getLocation() == v2->getLocation()) {
		if (v1->getStartTime() < v2->getStartTime()) {
			return true;
		}
		else 
		{
			return false;
		}
	}
	else {
		return false;
	}

}

/*
Turns a visit's contents into a string
*/

string Visit::getVisitString() const {

	 ostringstream outFS;
	 int i = 0;

	 outFS << this->getLocation() << endl;
	 outFS << setprecision(8) << this->getStartTime() << " to " << this->getEndTime() << endl;
	 outFS << "States: ";
	 for (i = 0; i < state.size(); i++) {
		 if (i == (state.size() - 1))
		 {
			 outFS << state.at(i) << "\n" << endl;
		 }
		 else
		 {
			 outFS << state.at(i) << ", ";
		 }

	 }

	return outFS.str();
}

void Visit::addState(string stateString) {
	state.push_back(stateString);
}
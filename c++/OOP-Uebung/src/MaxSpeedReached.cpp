/*
 * MaxSpeedReached.cpp
 *
 *  Created on: 02.08.2012
 *      Author: maik
 */

#include "MaxSpeedReached.h"

#include <cstdlib>
#include <cstring>
#include <cstdio>

MaxSpeedReached::MaxSpeedReached() {
	setError("You have reached your maximal speed!");
}

MaxSpeedReached::~MaxSpeedReached() {

}

char* MaxSpeedReached::getError() const {
	return error;
}

void MaxSpeedReached::setError(char* val) {
	error = new char[strlen(val)+1];
	strcpy(error,val);
}

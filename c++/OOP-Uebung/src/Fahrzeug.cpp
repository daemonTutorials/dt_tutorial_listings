/*
 * Fahrzeug.cpp
 *
 *  Created on: 01.08.2012
 *      Author: maik
 */

#include "Fahrzeug.h"
#include "MaxSpeedReached.h"

#include <cstdlib>
#include <cstring>
#include <cstdio>

Fahrzeug::Fahrzeug() {

}

Fahrzeug::Fahrzeug(const Fahrzeug &right) {

}

Fahrzeug::~Fahrzeug() {

}

void Fahrzeug::setMaxSpeed(unsigned long int val) {
	maxSpeed = val;
}

unsigned long int Fahrzeug::getMaxSpeed() const {
	return maxSpeed;
}

void Fahrzeug::setSpeed(unsigned long int val) {
	if (currentSpeed <= maxSpeed) {
		currentSpeed = val;
	}
	else {
		MaxSpeedReached errorObj;
		throw errorObj;
		currentSpeed = maxSpeed;
	}
}
unsigned long int Fahrzeug::getSpeed() const {
	return currentSpeed;
}
void Fahrzeug::setName(char* val) {
	name = new char[strlen(val)+1];
	strcpy(name,val);
}
char* Fahrzeug::getName() const {
	return name;
}
void Fahrzeug::setProducer(char* val) {
	producer = new char[strlen(val)+1];
	strcpy(producer,val);
}
char* Fahrzeug::getProducer() const {
	return producer;
}

void Fahrzeug::setMotorType(char* val) {
	motorType = new char[strlen(val)+1];
	strcpy(motorType,val);
}

char* Fahrzeug::getMotorType() const {
	return motorType;
}

void Fahrzeug::setKMAmount(unsigned long int val) {
	kmAmount = val;
}
unsigned long int Fahrzeug::getKMAmount() const {
	return kmAmount;
}
double Fahrzeug::getRestTimeToArrive() {
	restTimeToArrive = kmAmount / currentSpeed;

	return restTimeToArrive;
}



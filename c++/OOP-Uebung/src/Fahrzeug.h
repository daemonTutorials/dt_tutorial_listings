/*
 * Fahrzeug.h
 *
 *  Created on: 01.08.2012
 *      Author: maik
 */

#ifndef FAHRZEUG_H_
#define FAHRZEUG_H_

class Fahrzeug {
public:
	char name[];
	char producer[];
	char motorType[];
	unsigned long int kmAmount;
	unsigned long int maxSpeed;
	unsigned long int currentSpeed;
	double restTimeToArrive;

	Fahrzeug();
	Fahrzeug(const Fahrzeug &right);
	virtual ~Fahrzeug();

	virtual void setSpeed(unsigned int val);
	virtual unsigned int getSpeed() const;
	virtual void setName(char val);
	virtual char getName() const;
	virtual void setProducer(char val);
	virtual char getProducer() const;
	virtual void setKMAmount(unsigned long int val);
	virtual unsigned long int getKMAmount() const;
	virtual int getRestTimeToArrive() const;
	virtual bool drive(unsigned long int val);


};


#endif /* FAHRZEUG_H_ */

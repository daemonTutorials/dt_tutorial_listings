/*
 * PKW.h
 *
 *  Created on: 01.08.2012
 *      Author: maik
 */

#ifndef PKW_H_
#define PKW_H_

class PKW : public Fahrzeug {
public:
	unsigned int age;
	unsigned int nextCheck;

	PKW();
	PKW(const PKW &right);
	virtual ~PKW();

	virtual void setAge(unsigned int val);
	virtual unsigned int getAge() const;
	virtual unsigned int getNextCheck() const;
};

#endif /* PKW_H_ */

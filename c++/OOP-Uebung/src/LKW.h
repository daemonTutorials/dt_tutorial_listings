/*
 * LKW.h
 *
 *  Created on: 01.08.2012
 *      Author: maik
 */

#ifndef LKW_H_
#define LKW_H_

class LKW : public Fahrzeug {
public:
	double loadSpace;
	double maxWeight;
	double currentWeight;

	LKW();
	LKW(const LKW &right);
	virtual ~LKW();

	virtual void setLoadSpace(double val);
	virtual double getLoadSpace() const;
	virtual void setMaxWeight(double val);
	virtual double getMaxWeight() const;
	virtual void setCurrentWeight(double val);
	virtual double getCurrentWeight() const;
};



#endif /* LKW_H_ */

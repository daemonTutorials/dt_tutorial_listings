/*
 * MaxSpeedReached.h
 *
 *  Created on: 02.08.2012
 *      Author: maik
 */

#ifndef MAXSPEEDREACHED_H_
#define MAXSPEEDREACHED_H_

class MaxSpeedReached {
public:
	char *error;

	MaxSpeedReached();
	virtual ~MaxSpeedReached();

	virtual void setError(char* val);
	virtual char* getError() const;
};


#endif /* MAXSPEEDREACHED_H_ */

/*
 * SpeedContrSetting.h
 *
 *  Created on: Mar 5, 2017
 *      Author: root
 */

#ifndef MIDDLEWARE_SPEEDCONTRSETTING_H_
#define MIDDLEWARE_SPEEDCONTRSETTING_H_

#include "SpeedChange.h"

class SpeedContrSetting {
public:
	SpeedContrSetting();
	void start();
	virtual ~SpeedContrSetting();
private:
	SpeedChange *speedchange;
};

#endif /* MIDDLEWARE_SPEEDCONTRSETTING_H_ */

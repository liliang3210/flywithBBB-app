/*
 * SpeedChange.h
 *
 *  Created on: Apr 12, 2016
 *      Author: liliang
 */

#ifndef MIDDLEWARE_SPEEDCHANGE_H_
#define MIDDLEWARE_SPEEDCHANGE_H_

#include "BlackPWM.h"

class SpeedChange {
public:
	enum Channel {
		ch1,
		ch2,
		ch3,
		ch4,
	};

	static SpeedChange *GetInstance()
    {
        static SpeedChange instance;
        return &instance;
    }

	bool start();
	void setSpeed(Channel ch, double speed);
	void setSpeed(double speed);

private:
	SpeedChange();
	virtual ~SpeedChange();
	BlackLib::BlackPWM *pwm1;
	BlackLib::BlackPWM *pwm2;
	BlackLib::BlackPWM *pwm3;
	BlackLib::BlackPWM *pwm4;
	const double min_pw = 35.0;
};

#endif /* MIDDLEWARE_SPEEDCHANGE_H_ */

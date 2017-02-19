/*
 * SpeedChange.cpp
 *
 *  Created on: Apr 12, 2016
 *      Author: liliang
 */

#include "SpeedChange.h"
#include "BlackPWM.h"

SpeedChange::SpeedChange() {
	// TODO Auto-generated constructor stub
	pwm1 = new BlackLib::BlackPWM(BlackLib::EHRPWM0A);
	pwm1->setDutyPercent(0.0);
	pwm1->setPeriodTime(20, BlackLib::milisecond);
	pwm1->setPolarity(BlackLib::reverse);

	pwm2 = new BlackLib::BlackPWM(BlackLib::EHRPWM1A);
	pwm2->setDutyPercent(0.0);
	pwm2->setPeriodTime(20, BlackLib::milisecond);
	pwm2->setPolarity(BlackLib::reverse);

	pwm3 = new BlackLib::BlackPWM(BlackLib::EHRPWM2A);
	pwm3->setDutyPercent(0.0);
	pwm3->setPeriodTime(20, BlackLib::milisecond);
	pwm3->setPolarity(BlackLib::reverse);

	pwm4 = new BlackLib::BlackPWM(BlackLib::ECAP0);
	pwm4->setDutyPercent(0.0);
	pwm4->setPeriodTime(20, BlackLib::milisecond);
	pwm4->setPolarity(BlackLib::reverse);


}

SpeedChange::~SpeedChange() {
	// TODO Auto-generated destructor stub
	delete pwm1;
	delete pwm2;
	delete pwm3;
	delete pwm4;

	pwm1 = nullptr;
	pwm2 = nullptr;
	pwm3 = nullptr;
	pwm4 = nullptr;
}

void SpeedChange::start()
{
	pwm1->setDutyPercent(5);
	pwm2->setDutyPercent(5);
	pwm3->setDutyPercent(5);
	pwm4->setDutyPercent(5);
}

void SpeedChange::setSpeed(Channel ch, double speed)
{
	if(speed < 0)
		speed = 0;
	else if(speed > 100)
		speed = 100;

	if(ch1 == ch) {
		pwm1->setDutyPercent(speed / 20 + 5);
	}

	if(ch2 == ch) {
		pwm2->setDutyPercent(speed / 20 + 5);
	}

	if(ch3 == ch) {
		pwm3->setDutyPercent(speed / 20 + 5);
	}

	if(ch4 == ch) {
		pwm4->setDutyPercent(speed / 20 + 5);
	}
}


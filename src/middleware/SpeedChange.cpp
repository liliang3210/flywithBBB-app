/*
 * SpeedChange.cpp
 *
 *  Created on: Apr 12, 2016
 *      Author: liliang
 */

#include <iostream>
#include "SpeedChange.h"
#include "BlackPWM.h"

using namespace std;

SpeedChange::SpeedChange() {
	// TODO Auto-generated constructor stub
	pwm1 = new BlackLib::BlackPWM(BlackLib::EHRPWM0A);
	pwm2 = new BlackLib::BlackPWM(BlackLib::EHRPWM1A);
	pwm3 = new BlackLib::BlackPWM(BlackLib::EHRPWM2A);
	pwm4 = new BlackLib::BlackPWM(BlackLib::ECAP0);

	cout << "speed change constructor" << endl;
}

bool SpeedChange::start() {
	bool res = true;

	res &= pwm1->setPeriodTime(2, BlackLib::milisecond);
	res &= pwm1->setDutyPercent(this->min_pw);
	res &= pwm1->setPolarity(BlackLib::reverse);

	res &= pwm2->setPeriodTime(2, BlackLib::milisecond);
	res &= pwm2->setDutyPercent(this->min_pw);
	res &= pwm2->setPolarity(BlackLib::reverse);

	res &= pwm3->setPeriodTime(2, BlackLib::milisecond);
	res &= pwm3->setDutyPercent(this->min_pw);
	res &= pwm3->setPolarity(BlackLib::reverse);

	res &= pwm4->setPeriodTime(2, BlackLib::milisecond);
	res &= pwm4->setDutyPercent(this->min_pw);
	res &= pwm4->setPolarity(BlackLib::reverse);

	return res;
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
	
	cout << "speed change destructor" << endl;
}

void SpeedChange::setSpeed(Channel ch, double speed)
{
	if(speed < 0)
		speed = 0;
	else if(speed > 20)//should be 100 when final deploy. jsut for safe during the development period
		speed = 20;

	if(ch1 == ch) {
		pwm1->setDutyPercent(speed / 1.67 + this->min_pw);// set the duty from 35% ~ 95%, and 100/1.67=59.88
	}

	if(ch2 == ch) {
		pwm2->setDutyPercent(speed / 1.67 + this->min_pw);
	}

	if(ch3 == ch) {
		pwm3->setDutyPercent(speed / 1.67 + this->min_pw);
	}

	if(ch4 == ch) {
		pwm4->setDutyPercent(speed / 1.67 + this->min_pw);
	}
}

void SpeedChange::setSpeed(double speed)
{
	if(speed < 0)
		speed = 0;
	else if(speed > 20) //should be 100 when final deploy. jsut for safe during the development period
		speed = 20;
	// set the duty from 35% ~ 95%, and 100/1.67=59.88
	pwm1->setDutyPercent(speed / 1.67 + this->min_pw);
	pwm2->setDutyPercent(speed / 1.67 + this->min_pw);
	pwm3->setDutyPercent(speed / 1.67 + this->min_pw);
	pwm4->setDutyPercent(speed / 1.67 + this->min_pw);
}


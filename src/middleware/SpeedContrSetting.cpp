/*
 * SpeedContrSetting.cpp
 *
 *  Created on: Mar 5, 2017
 *      Author: root
 */

#include <SpeedContrSetting.h>
#include "SpeedChange.h"
#include <iostream>

using namespace std;

SpeedContrSetting::SpeedContrSetting() {
	// TODO Auto-generated constructor stub
	speedchange = SpeedChange::GetInstance();

	cout << "SpeedContrSetting constructor" << endl;
}

void SpeedContrSetting::start() {
	speedchange->start();
	speedchange->setSpeed(100.0);

	string speed;
	while (cin >> speed) {
		cout << "user input: " + speed << endl;
		if (speed == "w")
			speedchange->setSpeed(100.0);
		else if (speed == "x")
			speedchange->setSpeed(0.0);
		else
			break;
	}
}

SpeedContrSetting::~SpeedContrSetting() {
	// TODO Auto-generated destructor stub
	cout << "SpeedContrSetting destructor" << endl;
}


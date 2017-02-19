//============================================================================
// Name        : flyWithMe.cpp
// Author      : liang li
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>

#include "SpeedChange.h"
using namespace std;

int main() {

	SpeedChange *speedchange = SpeedChange::GetInstance();
	speedchange->start();

	speedchange->setSpeed(SpeedChange::ch3, 100.0);

	cout << "hi there, let's get start." << endl;

	return 0;
}

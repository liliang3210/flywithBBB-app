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
#include "SpeedContrSetting.h"
#include "UdpServer.h"
#include "BlackPWM.h"
#include "HeightWithPressure.h"

using namespace std;

int main() {

//	SpeedContrSetting *setting = new SpeedContrSetting();
//	setting->start();

	SpeedChange *speedchange = SpeedChange::GetInstance();
	speedchange->start();

	HeightWithPressure *height = new HeightWithPressure("i2c-1");
	double speed = 0;
	string speedChange;
	while (cin >> speedChange) {
		cout << "user input: " + speedChange << endl;
		if (speedChange == "w") {
			speed += 10;
			if (speed > 100)
				speed = 100;
		} else if (speedChange == "x") {
			speed -= 10;
			if (speed < 0)
				speed = 0;
		} else if (speedChange == "r"){
			cout << "pressure: " << height->getPressure() << ", temp: " << height->getTemp() << ", height: " << height->getHeight() << endl;
		} else
			break;
		speedchange->setSpeed(speed);
	}


//	try
//	{
//		boost::asio::io_service io_service;
//
//		UdpServer server(io_service, 1601);
//
//		io_service.run();
//	}
//	catch (std::exception& e)
//	{
//		std::cerr << "Exception: " << e.what() << "\n";
//	}

	return 0;
}

/*
 * HeightWithPressure.h
 *
 *  Created on: Mar 9, 2017
 *      Author: root
 */

#ifndef MIDDLEWARE_HEIGHTWITHPRESSURE_H_
#define MIDDLEWARE_HEIGHTWITHPRESSURE_H_

#include <iostream>
#include <fstream>

using namespace std;

class HeightWithPressure {
public:
	HeightWithPressure(string i2c_name);
	double getPressure();
	double getTemp();
	double getHeight();
	virtual ~HeightWithPressure();
private:
	double getValue(string dest);
	string adapter_file_path;
	string dev_path;
};

#endif /* MIDDLEWARE_HEIGHTWITHPRESSURE_H_ */

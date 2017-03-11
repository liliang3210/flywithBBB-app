/*
 * HeightWithPressure.cpp
 *
 *  Created on: Mar 9, 2017
 *      Author: root
 */

#include <HeightWithPressure.h>
#include <cmath>

using namespace std;

HeightWithPressure::HeightWithPressure(string i2c_name) {
	// TODO Auto-generated constructor stub
	this->adapter_file_path = "/sys/class/i2c-adapter/" + i2c_name + "/new_device";
	ofstream file;
	file.open(this->adapter_file_path.c_str(),ios::out);
	if(file.fail()) {
		file.close();
	} else {
		file << "bmp085 0x77";
		file.close();
	}

	this->dev_path = "/sys/bus/i2c/drivers/bmp085/1-0077/";
}

double HeightWithPressure::getValue(string dest) {
	string filename = this->dev_path + dest;
	ifstream file;
	file.open(filename.c_str(), ios::in);
	if (file.fail()) {
		file.close();
		return 0.0;
	}

	double res;

	file >> res;
	file.close();

	res /= 10.0;

	return res;
}

double HeightWithPressure::getPressure() {

	return this->getValue("pressure0_input")/100.0;

}

double HeightWithPressure::getTemp() {
	return this->getValue("temp0_input");
}

double HeightWithPressure::getHeight() {
	static double baseline = this->getPressure();
	double height = (44330.0 * (1.0-std::pow((this->getPressure()) / baseline, 1.0/5.255)));
	return height;
}

HeightWithPressure::~HeightWithPressure() {
	// TODO Auto-generated destructor stub
}


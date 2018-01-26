/*
 * tools.cpp
 *
 *  Created on: Nov 20, 2017
 *      Author: Jordan Richards
 */

#include "tools.h"
#include <fstream>

bool fileExists(const char* filename){
	std::ifstream fin(filename);
	return fin.good();
}

/*
 * tools.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: shado
 */

#include "tools.h"
#include <cstring>

float reverseFloat(char* p){
	float ret;

	char* retBytes = (char*) &ret;

	retBytes[0] = p[3];
	retBytes[1] = p[2];
	retBytes[2] = p[1];
	retBytes[3] = p[0];

	return ret;
}

unsigned reverseUInt16(char* p){
	unsigned ret = 0;
	char* retBytes = (char*)&ret;

	retBytes[0] = p[1];
	retBytes[1] = p[0];

	return ret;
}

unsigned long reverseUInt32(char* p){
	unsigned long ret = 0;
	char* retBytes = (char*)&ret;

	retBytes[0] = (p[3]);
	retBytes[1] = (p[2]);
	retBytes[2] = (p[1]);
	retBytes[3] = (p[0]);

	return ret;
}

unsigned long long reverseUInt64(char* p){
	unsigned long long ret = 0;
	char* retBytes = (char*)&ret;

	retBytes[0] = (p[7]);
	retBytes[1] = (p[6]);
	retBytes[2] = (p[5]);
	retBytes[3] = (p[4]);
	retBytes[4] = (p[3]);
	retBytes[5] = (p[2]);
	retBytes[6] = (p[1]);
	retBytes[7] = (p[0]);

	return ret;
}

bool contains(const char* str, const char* key){
	int n = strlen(str);
	int m = strlen(key);

	for(int i = 0; i < n - m; i++){
		int j = 0;
		for(; j < m; j++){
			if(tolower(str[i+j]) != tolower(key[j]))break;
		}if(j == m)return true;
	}return false;
}

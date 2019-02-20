//#pragma once
#ifndef __UNIQUE_POINTER_H__
#define __UNIQUE_POINTER_H__

#include <iostream>
#include "Home.h"

using namespace std;

class UniquePointer
{
private:
	static UniquePointer* m_instance;
	//UniquePointer(); //errorrr
public:
	static UniquePointer* getInstance();
	
	void usingUniquePointer();
};

#endif __UNIQUE_POINTER_H__
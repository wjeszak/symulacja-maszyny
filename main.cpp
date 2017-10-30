/*
 * main.cpp
 *
 *  Created on: 30 paü 2017
 *      Author: tomek
 */

#include <iostream>
using namespace std;
#include "fault.h"

int main()
{
	Dynabox dynabox;
	dynabox.SetFault(1);
	dynabox.SetFault(6);
	for(int i = 0; i < NUMBER_FAULTS; i++)
	{
		cout << dynabox.faults[i].is_active << endl;
	}
}




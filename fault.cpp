/*
 * fault.cpp
 *
 *  Created on: 30 paü 2017
 *      Author: tomek
 */

#include "fault.h"

Dynabox::Dynabox()
{
	for(int i = 0; i < NUMBER_FAULTS; i++)
	{
		faults[i].id = i + 1;
		faults[i].is_active = false;
	}
	faults[0].led_command = OnePulse;
	faults[0].del_cond = Other;
}

void Dynabox::SetFault(int id)
{
	for(int i = 0; i < NUMBER_FAULTS; i++)
	{
		if(faults[i].id == id) faults[i].is_active = true;
		break;
	}
}



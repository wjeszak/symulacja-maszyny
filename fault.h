/*
 * fault.h
 *
 *  Created on: 30 paü 2017
 *      Author: tomek
 */

#ifndef FAULT_H_
#define FAULT_H_

#define NUMBER_FAULTS 	13

enum LedCommands { BlinkGreenRed, OnePulse, TwoPulses };
enum DeleteConditions { MW, Other };

//Machine *m;

class Machine
{
public:
	virtual void SetFault(int id) {}
};

class Fault
{
public:
	int id;
	bool is_active;
	DeleteConditions del_cond;
};

class FaultDynabox : public Fault
{
public:
	LedCommands led_command;
};

class FaultLockerbox : public Fault
{
public:
};

class Dynabox : public Machine
{
public:
	Dynabox();
	void SetFault(int id);
	FaultDynabox faults[NUMBER_FAULTS];
};

#endif /* FAULT_H_ */

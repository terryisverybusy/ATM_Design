#ifndef __ATM3_H__
#define __ATM3_H__



#include <iostream>
#include <string>
#include <fstream>
#include"MDA_EFSM.h"
#include"DS.h"
#include"AF.h"

using namespace std;

class ATM_3
{
public:
	MDA_EFSM *m;               //points to MDA_EFSM
	DS * d;                     //points to DS
	AF * af;                    //points to AF


	void create();
	void card(int x, int y);   // ATM card is inserted where x is a balance and y is a pin # 
	void deposit(int t);	 // deposit amount d 
	void withdraw(int w);        // withdraw amount w 
	void pin(int x);           // provides pin # 
	void exit();                // exit from the ATM 
	void balance();      // display the current balance 
	void lock();          // lock the ATM
	void unlock();     // unlock the ATM 
	
};



#endif 
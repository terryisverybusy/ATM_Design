#ifndef __ATM1_H__
#define __ATM1_H__


#include <iostream>
#include <string>
#include <fstream>
#include"MDA_EFSM.h"
#include"DS.h"
#include"AF.h"


using namespace std;

//class ATM1
class ATM_1
{

public:

	MDA_EFSM *m;         //points to MDA_EFSM object
	DS *d;               //points to DS object
	AF * af;              //points to AF object

	ATM_1();                 //constructor function
	void create();              
	void card(int x, string y);    // ATM card is inserted where x is a balance and y is a pin # 
	void deposit(int y);          // deposit amount d 
	void withdraw(int w);           // withdraw amount w
	void  pin(string x);           // provides pin # 
	void exit();                         // exit from the ATM 
	void  balance();                    // display the current balance 
	void lock(string x);                // lock the ATM, where x is a pin #
	void unlock(string x);              // unlock the ATM, where x is pin # 
};


#endif 
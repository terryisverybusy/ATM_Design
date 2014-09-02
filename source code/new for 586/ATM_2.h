#ifndef __ATM2_H__
#define __ATM2_H__



#include <iostream>
#include <string>
#include <fstream>
#include"MDA_EFSM.h"
#include"DS.h"
#include"AF.h"

using namespace std;

class ATM_2
{

public:
	MDA_EFSM *m;       //points to MDA_EFSM object
	DS * d;           //points  to DS object
	AF *af;             //points to AF object


void create();           
void CARD(float x, int y);        // ATM card is inserted where x is a balance and y is a pin # 
void DEPOSIT(float s);          // deposit amount d 
void WITHDRAW(float w);           // withdraw amount w 
void PIN(int x);                     // provides pin # 
void EXIT();               // exit from the ATM 
void BALANCE();              // display the current balance 	
};


#endif 
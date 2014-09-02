#ifndef __OP_H__
#define __OP_H__



#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include"Action.h"
#include"AF.h"
#include"DS.h"
using namespace std;


//this part resposible for the strategy pattern



class op
{
public:
	Action1 *a1;          //points to Actinon1 class
	Action2 *a2;          //pints to Action2 class
	Action3 *a3;          //points to Action3 class
	Action4 *a4;          //points to Action4 class
	Action5 *a5;          //points to Action5 class
	Action6 *a6;          //points  to Action6 class
	Action7 *a7;            //points to Action7 class
	Action8 *a8;            //points to Action8 class
	Action9 *a9;            //points to Action9 class
	Action10 *a10;          //points to Action 1o class
	Action11 *a11;             //points to Action 11 class 
	AF *af;                   //points to AF class



	void store_pin();           //store the pin
	void store_balance();            //store the balance
	void prompt_for_PIN();           //prompt msg for pin
	void display_menu();          //display transaction menu
	void incorrect_pin_msg();            //incorrect pin msg
	void too_many_attempts_msg();            //too many attempts msg
	void MakeDeposit();                        //Make Deposit
	void MakeWithdraw();                      //make the withdraw
	void Penalty();                              //reduce the penalty
	void eject_card();                        // eject the card
	void DisplayBalance();              //display the balance
	void initializeAction1();              //initialize a1
	void initializeAction2();              //initialize a2
	void initializeAction3();                 //initialize a3
	void initializeAction4();                   //initialize a4
	void initializeAction5();                    //initialize a5
	void initializeAction6();                     //initialize a6
	void initializeAction7();                      //initialize a7
	void initializeAction8();                      //initialize a8 
	void initializeAction9();                        //initialize a9
	void initializeAction10();                         //initialize a10
	void initializeAction11();                        //initialize a11

		
};



#endif 
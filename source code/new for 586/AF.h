#ifndef _AF_H
#define  _AF_H


#include <iostream>
#include <string>
#include <fstream>
#include"DS.h"
#include"Action.h"
using namespace std;

//resposible for the abstrat pattern


//base class of the abstract factory 
class AF
{
public:
	
	//all are abstract function 
	virtual Action1 * get_store_pin()=0;
	virtual Action2 * get_store_balance()=0;
	virtual Action3 * get_prompt_for_PIN()=0;
	virtual Action4 * get_display_menu()=0;
	virtual Action5 * get_incorrect_pin_msg()=0;
	virtual Action6 * get_too_many_attempts_msg()=0;
	virtual Action7 * get_MakeDeposit()=0;
	virtual Action8 * get_MakeWithdraw()=0;
	virtual Action9 * get_Penalty()=0;
	virtual Action10 * get_eject_card()=0;
	virtual Action11 * get_DisplayBalance()=0;
	virtual  DS*  createDS() = 0;                  //create the DS object
	
	
};

//CF1
//inherit class AF
class CF1 : public AF
{

public:
	  DS *d1;                             //pointer points to DS object
	 Action1 * get_store_pin();           //create Action object for ATM1 
	 Action2 * get_store_balance();      //create Action object for ATM1
	 Action3 * get_prompt_for_PIN();       //create Action object for ATM1
	 Action4 * get_display_menu();         //create Action object for ATM1
     Action5 * get_incorrect_pin_msg();      //create Action object for ATM1
	 Action6 * get_too_many_attempts_msg();    //create Action object for ATM1
	 Action7 * get_MakeDeposit();              //create Action object for ATM1
	 Action8 * get_MakeWithdraw();              //create Action object for ATM1
	 Action9 * get_Penalty();                     //create Action object for ATM1
	 Action10 * get_eject_card();                  //create Action object for ATM1
	 Action11 * get_DisplayBalance();               //create Action object for ATM1
	 DS*  createDS();                               //create DS1 object for ATM1

};


//CF2
//inherit class AF
class CF2 : public AF
{
public:
 
	DS *d2;                                 //pointer points to DS object
	Action1 * get_store_pin();              //create Action object for ATM2
	Action2 * get_store_balance();              //create Action object for ATM2
	Action3 * get_prompt_for_PIN();                //create Action object for ATM2
	Action4 * get_display_menu();                     //create Action object for ATM2
	Action5 * get_incorrect_pin_msg();                   //create Action object for ATM2
	Action6 * get_too_many_attempts_msg();              //create Action object for ATM2
	Action7 * get_MakeDeposit();                      //create Action object for ATM2
	Action8 * get_MakeWithdraw();                      //create Action object for ATM2
	Action9 * get_Penalty();                              //create Action object for ATM2
	Action10 * get_eject_card();                           //create Action object for ATM2
	Action11 * get_DisplayBalance();                        //create Action object for ATM2
	DS* createDS();                                     //create DS2 object for ATM2
	
};


//CF3
//inherit class AF
class CF3 : public AF
{

public:

	DS *d3;                                      //pointer points to DS object
	Action1 * get_store_pin();                        //create Action object for ATM3
	Action2 * get_store_balance();                       //create Action object for ATM3
	Action3 * get_prompt_for_PIN();                        //create Action object for ATM3
	Action4 * get_display_menu();                             //create Action object for ATM3
	Action5 * get_incorrect_pin_msg();                          //create Action object for ATM3
	Action6 * get_too_many_attempts_msg();                //create Action object for ATM3
	Action7 * get_MakeDeposit();                        //create Action object for ATM3
	Action8 * get_MakeWithdraw();                          //create Action object for ATM3
	Action9 * get_Penalty();                               //create Action object for ATM3
	Action10 * get_eject_card();                           //create Action object for ATM3
	Action11 * get_DisplayBalance();                          //create Action object for ATM3
	DS* createDS();                                       //create DS3 object for ATM3
	
};


#endif 
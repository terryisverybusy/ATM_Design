#ifndef _ACTION_H
#define _ACTION_H


#include <iostream>
#include <string>
#include <fstream>
#include"DS.h"

using namespace std;

//this part resposible for the strategy pattern 
//abstract class 
class Action1
{
public:
	DS * d;
	virtual void store_pin()=0;   
};


//inherit class Action1
// stores pin from temporary data store to pin in data store
class Action1_1 : public Action1
{
public:
	void store_pin();
	
};

//inherit class Action1
// stores pin from temporary data store to pin in data store
class Action1_2 : public Action1
{
public:
	void store_pin();
};

//abstract class
class Action2
{
public:
	DS *d;
	virtual void store_balance()=0;
};


//inherit class Action2
// stores balance from temporary data store to b in data store 
class Action2_1 :public Action2
{
	void store_balance();
	
};

//inherit class Action2
// stores balance from temporary data store to b in data store 
class Action2_2 :public Action2
{
	void store_balance();
	
};

// prompts to enter pin
class Action3
{
public:
	void prompt_for_PIN();	
};

//abstract class
class Action4
{
public:
	virtual void display_menu()=0;
	
};

//inherit class Action4 
// display a menu with a list of transactions 
class Action4_1:public Action4
{
public:
	void display_menu();
};

//inherit class Action4 
// display a menu with a list of transactions 
class Action4_2: public Action4
{
public:
	void display_menu();

};

// displays incorrect pin message
class Action5
{
public:
	void incorrect_pin_msg();
	
};

// display too many attempts message
class Action6
{
public:
	void too_many_attempts_msg();
	
};

//abstract class
class Action7
{
public:
	DS *d;
	 virtual void MakeDeposit()=0;
};

//inherit class Action7
// makes deposit (increases balance by a value stored in temp. data store)
class Action7_1 :public Action7
{
public:
	void MakeDeposit();
	
};

//inherit class Action7
// makes deposit (increases balance by a value stored in temp. data store)
class Action7_2 : public Action7
{
public:
	void MakeDeposit();
	
};


//abstract class
class Action8
{
public:
	DS *d;
	 virtual void MakeWithdraw()=0;
};


//inherit class Action8
// makes withdraw (decreases balance by a value stored in temp. data store) 
class Action8_1 : public Action8
{
public:

	void MakeWithdraw();
};

//inherit class Action8
// makes withdraw (decreases balance by a value stored in temp. data store) 
class Action8_2 : public Action8
{
public:

	void MakeWithdraw();
};

//abstract class
class Action9
{
public:
	DS *d;
	virtual void Penalty()=0;
};

//inherit class Action9
// applies penalty (decreases balance by the amount of penalty) 
class Action9_1 :public Action9
{
public:
	void Penalty();
	
};

//inherit class Action9
// applies penalty (decreases balance by the amount of penalty) 
class Action9_2 :public Action9
{
public:
	void Penalty();
	
};

//inherit class Action9
// applies penalty (decreases balance by the amount of penalty) 
class Action9_3 :public Action9
{
public:
	void Penalty();
	
};

// ejects the card 
class Action10
{
public:
	void eject_card();
	
};

//abstract class
class Action11
{
public:
	DS *d;
	virtual void DisplayBalance()=0;
};

//inherit Action11
// displays the current value of the balance 
class Action11_1 : public Action11
{
public:
	void DisplayBalance();
};

//inherit Action 11
// displays the current value of the balance 
class Action11_2 : public Action11
{
public:
	void DisplayBalance();
	
};

#endif 
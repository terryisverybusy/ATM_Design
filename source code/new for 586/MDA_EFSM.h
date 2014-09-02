#ifndef __MDA_EFSM_H__
#define __MDA_EFSM_H__

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#include"op.h"


//this part resposible for the state pattern

using namespace std;


class State
{
public:
	int ID;                           //id for the states
	op * opt;                      //points to op object
	

//all are abstract functions	
	 virtual void create()=0;
	 virtual void card()=0 ;
	 virtual void IncorrectPin(int max)=0 ;
	 virtual void CorrectPinBelowMin() =0;
	 virtual void CorrectPinAboveMin()=0;
	 virtual void deposit()=0;
	 virtual void BelowMinBalance()=0;
	 virtual void AboveMinBalance()=0;
	 virtual void exit()=0;
	 virtual void balance()=0;
	 virtual void withdraw()=0;
	 virtual void lock()=0;
	virtual void unlock()=0;
	virtual int getID()=0;
	
};


class MDA_EFSM
{

public:
     State * S;            //points to current state S
	int attempts;            //the attempt times you try to input the pin
	 State  * LS[6];             //the list the states.


	 MDA_EFSM();                     //constructor function
	int get_attempts();                  //get the attempts
	void set_attempts(int x);              //set the attempts
	void create();                          
	void card();                             //card is inserted
	void IncorrectPin(int max);                  //the pin is wrong
	void CorrectPinBelowMin();                   //the pin is correct, but the balance is below the minimum
	void CorrectPinAboveMin();                   //the pin is correct, and the balance is above the minimum
	void deposit();                             // make deposit
	void BelowMinBalance();                      //below the minumum balance
	void AboveMinBalance();                    //above the minimum balance
	void exit();                                //want to exit
	void balance();                           //show the balance
	void withdraw();                            //make withdraw
	void lock();                             // lock the atm
	void unlock();                           //unlock the atm
	
};



//inherit the class state
//state idle
class idle : public State
{
public:

	MDA_EFSM *m;                //points to MDA_EFSM  

	idle();                         //constructor function
	void card();                       
	int getID();                     //return the ID




//abstract operation inherit fromt he state class, do nothing 
 void create() ;
 void IncorrectPin(int) ;
 void CorrectPinBelowMin() ;
 void CorrectPinAboveMin() ;
 void deposit() ;
 void BelowMinBalance() ;
 void AboveMinBalance() ;
 void exit() ;
 void balance() ;
 void withdraw() ;
void lock() ;
 void unlock() ;
	







};

//inherit class state
class check_pin :public State
{
public:
	MDA_EFSM *m;                 //points to MDA_EFSM

	check_pin();                    
	void IncorrectPin(int max);         
	void CorrectPinAboveMin();
	void CorrectPinBelowMin();
	int getID();                     //return the ID


	//abstract operation inherit fromt he state class, do nothing 
	 void create();
	 void card() ;
	 void deposit() ;
	 void BelowMinBalance() ;
	 void AboveMinBalance();
	 void exit();
	 void balance() ;
	 void withdraw() ;
	 void lock() ;
	 void unlock() ;
	

};


//inherit class state
class ready : public State
{
public:
	MDA_EFSM *m;                    //points to MDA_EFSM

	ready();                          //constructor funtion
	void deposit();                    //deposit 
	void balance();                  //balance
	void exit();                        //exit
	void withdraw();                      //withdraw
	void lock();                              //lock
	int getID();                      //return the ID


	//abstract operation inherit fromt he state class, do nothing 
	 void create() ;
     void card();
	 void IncorrectPin(int max) ;
	 void CorrectPinBelowMin() ;
	 void CorrectPinAboveMin() ;
	 void BelowMinBalance();
      void AboveMinBalance() ;
	  void unlock() ;
	


};



//inherit class state
class s1 : public State
{
public:
	MDA_EFSM *m;
	s1();
	void AboveMinBalance();          //above min balance
	void BelowMinBalance();            //below min balance 
	int getID();                    //return ID

	//abstract operation inherit fromt he state class, do nothing 
	 void create();
	 void card() ;
	 void IncorrectPin(int max) ;
	 void CorrectPinBelowMin() ;
	 void CorrectPinAboveMin() ;
	void deposit() ;
	 void exit() ;
	 void balance() ;
	 void withdraw() ;
	 void lock();
	 void unlock() ;





};


//inherit class state
class s2 : public State
{

public:
	MDA_EFSM *m;
	s2();
	void AboveMinBalance();           //above min balance
	void BelowMinBalance();            //below min balance
	int getID();               //return ID

	//abstract operation inherit fromt he state class, do nothing 
	 void create() ;
	 void card() ;
	 void IncorrectPin(int max);
	 void CorrectPinBelowMin() ;
	 void CorrectPinAboveMin();
	 void deposit();
	 void exit() ;
	 void balance() ;
	 void withdraw() ;
	 void lock() ;
	 void unlock() ;
	

};


//inherit class state
class overdraw : public State
{
public:
	MDA_EFSM *m;
	overdraw();
	void exit();                //exit 
	void deposit();                  //deposit
	void balance();                   //balance
	int getID();               //return ID
	void lock();                  //lock


	//abstract operation inherit fromt he state class, do nothing 
       void create() ;
      void card() ;
      void IncorrectPin(int max) ;
	 void CorrectPinBelowMin() ;
	 void CorrectPinAboveMin() ;
	 void BelowMinBalance() ;
	 void AboveMinBalance() ;
	 void withdraw() ;
	 void unlock() ;
	


};

//inherit class state
class locked : public State
{
public:
	MDA_EFSM *m;
	locked();
	void unlock();    //lock atm
	int getID();     //return ID


	//abstract operation inherit fromt he state class, do nothing 
	void create() ;
	void card() ;
	void IncorrectPin(int max) ;
     void CorrectPinBelowMin() ;
     void CorrectPinAboveMin();
      void deposit() ;
	 void BelowMinBalance() ;
	void AboveMinBalance() ;
	void exit() ;
     void balance() ;
	void withdraw() ;
	 void lock();
	
	
	

};



#endif 



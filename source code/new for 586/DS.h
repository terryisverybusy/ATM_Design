#ifndef __DS_H__
#define __DS_H__

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>




using namespace std;

class DS
{
public:
	
	int Penalty;          //the value of the penalty

//abstract function 
	
	virtual void set_strPin(string)=0;
	virtual string get_strPin()=0;
	virtual int get_intPin()=0;
	virtual void set_intPin(int)=0;
	virtual float get_floTmpBalance()=0;
	virtual void set_floTmpBalance(float)=0;
	virtual int get_intBalance()=0;
	virtual void set_intBalance(int) = 0;
	virtual int get_intTmpDeposit()=0;
	virtual void set_intTmpDeposit(int) = 0;
	virtual float get_floTmpDeposit()=0;
	virtual void set_floTmpDeposit(float) = 0;
	virtual float get_floBalance()=0;
	virtual void set_floBalance(float)=0;
	virtual int get_intTmpBalance()=0;
	virtual void set_intTmpBalance(int)=0;
	virtual int  get_intTmpWithdraw()=0;
	virtual void set_intTmpWithdraw(int)=0;
	virtual float get_floTmpWithdraw()=0;
	virtual void set_floTmpWithdraw(float)=0;
	virtual int get_Penalty()=0;
	virtual string get_strTmpPin()=0;
	virtual void set_strTmpPin(string)=0;	
	virtual int get_intTmpPin()=0;
	virtual void set_intTmpPin(int)=0;
	

	

};



//inherit DS class 
//DS1 is for the ATM_1
class DS1 :public DS
{
public:
	string strPin;           // the string pin
	string strTmpPin;           //the temp string pin
	int intBalance;               //the int balance
	int intTmpBalance;          //the int temp balance
	int intTmpDeposit;           // the int temp deposit amount
	int intTmpWithdraw;           //the int temp withdraw amount
	

	DS1();                        //constructor function
	int get_Penalty();                   //get the penalty
	string get_strPin();                    //get the string pin
	void set_strPin(string a);                //set the string pin
	string get_strTmpPin();                     //get the string temo pin
	void set_strTmpPin(string a);                //set the string temp pin
	int get_intBalance();                        //get the int balance
	void set_intBalance(int a);                    //set the int balance
	int get_intTmpBalance();                         //get the int temp balance
	void set_intTmpBalance(int a);                   //set the int temp balance
	int get_intTmpDeposit();                          //get the int temp deposit
	void set_intTmpDeposit(int a);                 //set the int temp deposit
	int get_intTmpWithdraw();                      //get the int temp withdraw
	void set_intTmpWithdraw(int a);                 //set the int temp withdraw
	
	//imeplement the virtual function , do nothing 
	int get_intPin();
	void set_intPin(int);
	float get_floTmpBalance();
	void et_floTmpBalance(float);
	float get_floTmpDeposit();
	float get_floBalance();
	void set_floBalance(float);
	float get_floTmpWithdraw();
	void set_floTmpWithdraw(float);
	void set_floTmpDeposit(float);
	void set_intTmpPin(int x);
	int get_intTmpPin( );
	void set_floTmpBalance(float);
	

};

//for DS2
class DS2 :public DS
{
public:
	int intPin;                     //the int pin
    int intTmpPin;                      //int temp pin
	float floBalance;                       //floate balance
	float floTmpBalance;                    //float temp balance
	float floTmpDeposit;                   //floate temp deposit
	float floTmpWithdraw;                    //float temp withdraw



	DS2();                                       //constructor function
	int get_Penalty();                           //get the penalty
	int get_intPin();                            //get the int pin
	void set_intPin(int a);                            //set the int pin
	int get_intTmpPin();                                //get the int temp pin 
	void set_intTmpPin(int a);                          //set the int temp pin
	float get_floBalance();                             //get the float balance
	void set_floBalance(float a);                       //set the float balance
	float get_floTmpBalance();                        //get the flo temp balance
	void set_floTmpBalance(float a);                  //set the float temp balance
	float get_floTmpDeposit();                        //get the float temp deposit
	void set_floTmpDeposit(float a);                  //set the float temp deposit
	float get_floTmpWithdraw();                         //get the float temp withdraw
	void set_floTmpWithdraw(float a);                    //set the float temp withdraw


	//imeplement the virtual function , do nothing 
	void set_strPin(string);
	string get_strPin();
	int get_intTmpBalance();
	void set_intintBalance(int);
	int get_intTmpDeposit();
	void set_intTmpDeposit(int);
	int get_intBalance();
	void set_intBalance(int);
	int get_intTmpWithdraw();
	void set_intTmpWithdraw(int);
	string get_strTmpPin();
	void set_strTmpPin(string);
	void set_intTmpBalance(int);





};


//for  DS3

class DS3 : public DS
{

public:
	int intPin;                 //int pin
	int intTmpPin;                //int temp pin
	int intBalance;               //int balance
	int intTmpBalance;             //int temp balance
	int intTmpDeposit;             //int temp deposit
	int intTmpWithdraw;             //int temp withdraw


	DS3();                          //constructor function
	int get_Penalty();                 //get the penalty
	int get_intPin();                  //get the int pin
	void set_intPin(int a);              //set the int pin
	int get_intTmpPin();                  //get the int temp pin
	void set_intTmpPin(int a);               //set the int temp pin
	int get_intBalance();                     //get the int balance
	void set_intBalance(int a);                //set the int balance
	int get_intTmpBalance();                    //get the int temp balance
	void set_intTmpBalance(int a);               //set the temp balance
	int get_intTmpDeposit();                     //get the int temp deposit
	void set_intTmpDeposit(int a);                //set the int temp deposit
	int get_intTmpWithdraw();                       //get the int temp withdraw 
	void set_intTmpWithdraw(int a);                   //set the int temp withdraw

	//imeplement the virtual function , do nothing 
	 void set_strPin(string) ;
	 string get_strPin() ;	
	 float get_floTmpBalance() ;
	 void set_floTmpBalance(float) ;	
	 float get_floTmpDeposit() ;
	 void set_floTmpDeposit(float) ;
	 float get_floBalance() ;
	 void set_floBalance(float) ;
	float get_floTmpWithdraw() ;
	 void set_floTmpWithdraw(float) ;
	 string get_strTmpPin() ;
	void set_strTmpPin(string) ;
	



	
};

#endif 
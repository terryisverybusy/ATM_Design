#include <iostream>

#include <string>

#include <fstream>

#include"ATM_1.h"


using namespace std;


ATM_1::ATM_1()
{
	
}



void ATM_1::create()
	{
		m->create();
	}


void ATM_1::card(int x, string y)
	{
	d->set_intTmpBalance(x);          // store x in the temp data store
	d->set_strTmpPin(y);	          // store y in the temp data store
		m->card();
	}


void ATM_1::deposit(int y)
	{
	d->set_intTmpDeposit(y);            //store y in the temp data store
		m->deposit();
		if (d->get_intBalance()<1000)        
			m->BelowMinBalance();
		else m->AboveMinBalance();

	}

void ATM_1::withdraw(int w)
	{

	d->set_intTmpWithdraw(w);          //store w in the temp data store
	if ((d->get_intBalance() - w) > 0)
			m->withdraw();
	if (d->get_intBalance()<1000)
			m->BelowMinBalance();
	else   m->AboveMinBalance();
	}


void  ATM_1::pin(string x) {

	if (x == d->get_strPin())
		{
	
		if (d->get_intBalance()<1000)
				m->CorrectPinBelowMin();
			else m->CorrectPinAboveMin();
		}
		else     m->IncorrectPin(3);
	}

void ATM_1::exit()
	{
		m->exit();
	}

void  ATM_1::balance()
	{
		m->balance();
	}

void ATM_1::lock(string x)
	{
	
	if (d->get_strPin() == x)
			m->lock();
	}

void ATM_1::unlock(string x) 
{
		
	    if (x == d->get_strPin())
		{
			m->unlock();
		
			if (d->get_intBalance()<1000)
				m->BelowMinBalance();
			else m->AboveMinBalance();
		}
	}








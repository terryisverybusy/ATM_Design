#include <iostream>

#include <string>

#include <fstream>

#include"ATM_3.h"

using namespace std;


	void ATM_3::create()
	{
		m->create();
	}

	void ATM_3::card(int x, int y)
	{
		d->set_intTmpBalance(x) ;
		d->set_intTmpPin(y) ;

		m->card();
	}

	void ATM_3::deposit(int t)
	{
	
		d->set_intTmpDeposit(t);
		m->deposit();
		if (d->get_intBalance()<100)
			m->BelowMinBalance();
		else
			m->AboveMinBalance();
	}



	void ATM_3::withdraw(int w)
	{
		
		d->set_intTmpWithdraw(w);
		if ((d->get_intBalance() - w) > 0)
			m->withdraw();
		if (d->get_intBalance()<100)
			m->BelowMinBalance();
		else
			m->AboveMinBalance();
	}


	void ATM_3::pin(int x)
	{
		if (x == d->get_intPin())
		{
			if (d->get_intBalance()<100)
				m->CorrectPinBelowMin();
			else
				m->CorrectPinAboveMin();
		}
		else m->IncorrectPin(0);
	}


	void ATM_3::exit()
	{
		m->exit();
	}

	void ATM_3::balance()
	{
		m->balance();
	}


	void ATM_3::lock()
	{
		m->lock();
	}


	void ATM_3::unlock()
	{
		m->unlock();
		if (d->get_intBalance()<100)
			m->BelowMinBalance();
		else
			m->AboveMinBalance();
	}



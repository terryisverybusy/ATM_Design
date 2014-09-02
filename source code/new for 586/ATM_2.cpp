#include <iostream>

#include <string>

#include <fstream>

#include"ATM_2.h"

using namespace std;

void ATM_2::create()
{
	m->create();
}

void ATM_2::CARD(float x, int y)
{

	d->set_floTmpBalance(x);
	d->set_intTmpPin(y);
	m->card();
}


void ATM_2::DEPOSIT(float s)

{

	d->set_floTmpDeposit(s);
	m->deposit();
	if (d->get_floBalance()<500)
		m->BelowMinBalance();
	else
		m->AboveMinBalance();
}
void ATM_2::WITHDRAW(float w)
{

	d->set_floTmpWithdraw(w); 
	if ((d->get_floBalance() - w) > 0)
		m->withdraw();
	if (d->get_floBalance()<500)
		m->BelowMinBalance();
	else
		m->AboveMinBalance();
}

void ATM_2::PIN(int x)
{
	if (x == d->get_intPin())
	{
		if (d->get_floBalance()<500)
			m->CorrectPinBelowMin();
		else
			m->CorrectPinAboveMin();
	}
	else m->IncorrectPin(2);
}

void ATM_2::EXIT(){	m->exit();}


void ATM_2::BALANCE()
{
	m->balance();
}

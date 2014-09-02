#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include"op.h"
using namespace std;

//this part resposible for the strategy pattern

	void op::store_pin()
	{    
		initializeAction1();
		a1->store_pin();
	}

	void op::store_balance()
	{     
		initializeAction2();
		a2->store_balance();
	}

	void op::prompt_for_PIN()
	{
		initializeAction3();
		a3->prompt_for_PIN();
	}
	void op::display_menu()
	{
		initializeAction4();
		a4->display_menu();
	}

	void op::incorrect_pin_msg()
	{
		initializeAction5();
		a5->incorrect_pin_msg();
	}

	void op::too_many_attempts_msg()
	{
		initializeAction6();
		a6->too_many_attempts_msg();
	}

	void op::MakeDeposit()
	{
		initializeAction7();
		a7->MakeDeposit();
	}

	void op::MakeWithdraw()
	{
		initializeAction8();
		a8->MakeWithdraw();
	}

	void op::Penalty()
	{
		initializeAction9();
		a9->Penalty();
	}

	void op::eject_card()
	{
		initializeAction10();
		a10->eject_card();
	}
	void op::DisplayBalance()
	{
		initializeAction11();
		a11->DisplayBalance();
	}

	//for the initialize 

	void op::initializeAction1()
	{
		a1 = af->get_store_pin();
	}

	void op::initializeAction2()
	{
		a2 = af->get_store_balance();
	}

	void op::initializeAction3()
	{
		a3 = af->get_prompt_for_PIN();
	}

	void op::initializeAction4()
	{
		a4 = af->get_display_menu();
	}

	void op::initializeAction5()
	{
		a5 = af->get_incorrect_pin_msg();
	}

	void op::initializeAction6()
	{
		a6 = af->get_too_many_attempts_msg();
	}

	void op::initializeAction7()
	{
		a7 = af->get_MakeDeposit();
	}

	void op::initializeAction8()
	{
		a8 = af->get_MakeWithdraw();
	}
	
	void op::initializeAction9()
	{
		a9 = af->get_Penalty();
	}

	void op::initializeAction10()
	{
		a10 = af->get_eject_card();
	}
	
	void op::initializeAction11()
	{
		a11 = af->get_DisplayBalance();
	}


	
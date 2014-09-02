#include <iostream>
#include <string>
#include <fstream>
#include"AF.h"
using namespace std;


//resposible for the absatract pattern


//CF1 class operations
   Action1 * CF1::get_store_pin()
   {
		Action1 *aa1 = new Action1_1;
		//assign the address of DS to the pointer in Action object
		aa1->d = CF1::d1;          
		return aa1;
	}


	Action2 * CF1::get_store_balance()
	{
		Action2 *aa2 = new Action2_1;
		//assign the address of DS to the pointer in Action object
		aa2->d = CF1::d1;
		return aa2;
	}
	Action3 * CF1::get_prompt_for_PIN()
	{
		Action3 *aa3 = new Action3;
		//assign the address of DS to the pointer in Action object
		return aa3;
	}

	Action4 * CF1::get_display_menu()
	{
		Action4 * aa4 = new Action4_1;
		return aa4;
	}
	Action5 * CF1::get_incorrect_pin_msg()
	{
		Action5 * aa5 = new Action5;
		return aa5;
	}
	Action6 * CF1::get_too_many_attempts_msg()
	{
		Action6 * aa6 = new Action6;
		return aa6;
	}
	Action7 * CF1::get_MakeDeposit()
	{
		Action7 * aa7 = new Action7_1;
		//assign the address of DS to the pointer in Action object
		aa7->d = CF1::d1;
		return aa7;

	}
	Action8 * CF1::get_MakeWithdraw()
	{
		Action8 *aa8 = new Action8_1;
		//assign the address of DS to the pointer in Action object
		aa8->d = CF1::d1;
		return aa8;
	}
	Action9 * CF1::get_Penalty()
	{
		Action9 *aa9 = new Action9_1;
		//assign the address of DS to the pointer in Action object
		aa9->d = CF1::d1;
		return aa9;

	}
	Action10 * CF1::get_eject_card()
	{
		Action10 *aa10 = new Action10;
		return aa10;
	}
	Action11 * CF1::get_DisplayBalance()
	{
		Action11 *aa11 = new Action11_1;
		//assign the address of DS to the pointer in Action object
		aa11->d = CF1::d1;
		return aa11;
	}

	// create DS object 
	DS*  CF1::createDS()
	{
		return new DS1;
	}


	//CF2 class operations
	
		Action1 * CF2::get_store_pin()
		{
			Action1 *aa1 = new Action1_2;
			//assign the address of DS to the pointer in Action object
			aa1->d = CF2::d2;
			return aa1;
		}
		Action2 * CF2::get_store_balance()
		{
			Action2 *aa2 = new Action2_2;
			//assign the address of DS to the pointer in Action object
			aa2->d = CF2::d2;
			return aa2;
		}
		Action3 * CF2::get_prompt_for_PIN()
		{
			Action3 *aa3 = new Action3;
			return aa3;
		}

		Action4 * CF2::get_display_menu()
		{
			Action4 * aa4 = new Action4_2;
			return aa4;
		}
		Action5 * CF2::get_incorrect_pin_msg()
		{
			Action5 * aa5 = new Action5;
			return aa5;
		}
		Action6 * CF2::get_too_many_attempts_msg()
		{
			Action6 * aa6 = new Action6;
			return aa6;
		}
		Action7 * CF2::get_MakeDeposit()
		{
			Action7 * aa7 = new Action7_2;
			//assign the address of DS to the pointer in Action object
			aa7->d = CF2::d2;
			return aa7;

		}
		Action8 * CF2::get_MakeWithdraw()
		{
			Action8 *aa8 = new Action8_2;
			//assign the address of DS to the pointer in Action object
			aa8->d = CF2::d2;
			return aa8;
		}
		Action9 * CF2::get_Penalty()
		{
			Action9 *aa9 = new Action9_2;
			//assign the address of DS to the pointer in Action object
			aa9->d = CF2::d2;
			return aa9;

		}
		Action10 *CF2::get_eject_card()
		{
			Action10 *aa10 = new Action10;
			return aa10;
		}
		Action11 * CF2::get_DisplayBalance()
		{
			Action11 *aa11 = new Action11_2;
			//assign the address of DS to the pointer in Action object
			aa11->d = CF2::d2;
			return aa11;
		}

		DS*  CF2::createDS()
		{
			return new DS2;
		}
	

		//CF3 class operations
	
			Action1 * CF3::get_store_pin()
			{
				Action1 *aa1 = new Action1_2;
				//assign the address of DS to the pointer in Action object
				aa1->d = CF3::d3;
				return aa1;
			}
			Action2 * CF3::get_store_balance()
			{
				Action2 *aa2 = new Action2_1;
				//assign the address of DS to the pointer in Action object
				aa2->d = CF3::d3;
				return aa2;
			}
			Action3 * CF3::get_prompt_for_PIN()
			{
				Action3 *aa3 = new Action3;
				return aa3;
			}

			Action4 * CF3::get_display_menu()
			{
				Action4 * aa4 = new Action4_1;
				return aa4;
			}
			Action5 * CF3::get_incorrect_pin_msg()
			{
				Action5 * aa5 = new Action5;
				return aa5;
			}
			Action6 * CF3::get_too_many_attempts_msg()
			{
				Action6 * aa6 = new Action6;
				return aa6;
			}
			Action7 * CF3::get_MakeDeposit()
			{
				Action7 * aa7 = new Action7_1;
				aa7->d = CF3::d3;
				return aa7;

			}
			Action8 * CF3::get_MakeWithdraw()
			{
				Action8 *aa8 = new Action8_1;
				//assign the address of DS to the pointer in Action object
				aa8->d = CF3::d3;
				return aa8;
			}
			Action9 * CF3::get_Penalty()
			{
				Action9 *aa9 = new Action9_3;
				//assign the address of DS to the pointer in Action object
				aa9->d = CF3::d3;
				return aa9;

			}
			Action10 * CF3::get_eject_card()
			{
				Action10 *aa10 = new Action10;
				return aa10;
			}
			Action11 * CF3::get_DisplayBalance()
			{
				Action11 *aa11 = new Action11_1;
				//assign the address of DS to the pointer in Action object
				aa11->d = CF3::d3;
				return aa11;
			}
		
			//create DS object
			 DS*  CF3::createDS()
			{
				 return new DS3;
			}
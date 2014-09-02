#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include"MDA_EFSM.h"



using namespace std;

//this part resposible for the state pattern



   MDA_EFSM::MDA_EFSM()
{
		int attempts = 0;
}


   int MDA_EFSM::get_attempts()
{
	return attempts;
}

   void MDA_EFSM::set_attempts(int x)
{
	attempts = x;
}

   void MDA_EFSM::create()
{
	S = LS[0];
}

   void MDA_EFSM::card()
{

	  
	S->card();
	int x = S->getID();
	switch (x)
	{
	case 0:  S = LS[1]; break;
	case 1:   break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::IncorrectPin(int max)
{
	S->IncorrectPin(max);
	int x = S->getID();
	switch (x)
	{
	case 0:   break;
	case 1:  if (attempts < max+1) break;
			 else if (attempts == max+1)
				 S = LS[0]; break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}


   void MDA_EFSM::CorrectPinBelowMin()
{
	S->CorrectPinBelowMin();
	int x = S->getID();
	switch (x)
	{
	case 0:   break;
	case 1:   S = LS[5]; break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}

}

   void MDA_EFSM::CorrectPinAboveMin()
{

	S->CorrectPinAboveMin();
	int x = S->getID();
	switch (x)
	{
	case 0:   break;
	case 1:   S = LS[2]; break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::deposit()
{
	S->deposit();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: S = LS[3]; break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::BelowMinBalance()
{
	S->BelowMinBalance();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: break;
	case 3: S = LS[5]; break;
	case 4: S = LS[5]; break;
	case 5:  break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::AboveMinBalance()
{
	S->AboveMinBalance();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: break;
	case 3: S = LS[2]; break;
	case 4: S = LS[2]; break;
	case 5: break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::exit()
{
	S->exit();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: S = LS[0]; break;
	case 3: break;
	case 4: break;
	case 5: S = LS[0]; break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::balance()
{
	S->balance();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5:  break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::withdraw()
{
	S->withdraw();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2:S = LS[3]; break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}



   void MDA_EFSM::lock()
{
	S->lock();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: S = LS[6]; break;
	case 3: break;
	case 4: break;
	case 5: S = LS[6]; break;
	case 6: break;
	default: cout << " error happen" << endl; break;

	}
}

   void MDA_EFSM::unlock()
{
	S->unlock();
	int x = S->getID();
	switch (x)
	{
	case 0:  break;
	case 1:   break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: S = LS[4]; break;
	default: cout << " error happen" << endl; break;

	}
}



   idle::idle()
   {
	   ID = 0;
   }


   
   void idle::card()
   {
	   opt->store_pin();
	   opt->store_balance();
	   opt->prompt_for_PIN();
	   m->set_attempts(0);
   }

   int idle::getID()
   {
	   return ID;
   }


  //abstract class inherit from the state class, do nothing 
   void idle::create()
   {
	   cout << "";
   }
   void idle::IncorrectPin(int)
   {
	   cout << "";
   }
   void idle::CorrectPinBelowMin()
   {
	   cout << "";
   }
   void idle::CorrectPinAboveMin()
   {
	   cout << "";
   }
   void idle::deposit()
   {
	   cout << "";
   }
   void idle::BelowMinBalance()
   {
	   cout << "";
   }
   void idle::AboveMinBalance()
   {
	   cout << "";
   }
   void idle::exit()
   {
	   cout << "";
   }
   void idle::balance()
   {
	   cout << "";
   }
   void idle::withdraw()
   {
	   cout << "";
   }
   void idle::lock()
   {
	   cout << "";
   }
   void idle::unlock()
   {
	   cout << "";
   }







   //for the state : check_pin
   check_pin::check_pin()
   {
	   ID = 1;
   }

   void check_pin::IncorrectPin(int max)
   {
	   if (m->get_attempts() < max)
	   {

		   opt->incorrect_pin_msg();
		   m->set_attempts(m->get_attempts() + 1);
	   }
	   else if (m->get_attempts() == max)
	   {
		   opt->incorrect_pin_msg();
		   opt->too_many_attempts_msg();
		   opt->eject_card();
		   m->set_attempts(m->get_attempts() + 1);
	   }

   }

   void check_pin::CorrectPinAboveMin()
   {
	   opt->display_menu();

   }

   void check_pin::CorrectPinBelowMin()
   {
	   opt->display_menu();
   }

   int check_pin::getID()
   {
	   return ID;
   }

   ////abstract class inherit from the state class, do nothing 
   void check_pin::create()
   {
	   cout << "";
   }
   void check_pin::card()
   {
	   cout << "";
   }
   void check_pin::deposit()
   {
	   cout << "";
   }
   void check_pin::BelowMinBalance()
   {
	   cout << "";
   }
   void check_pin::AboveMinBalance()
   {
	   cout << "";
   }
   void check_pin::exit()
   {
	   cout << "";
   }
   void check_pin::balance()
   {
	   cout << "";
   }
   void check_pin::withdraw()
   {
	   cout << "";
   }
   void check_pin::lock()
   {
	   cout << "";
   }
   void check_pin::unlock()
   {
	   cout << "";
   }






   //for class : ready 

   ready::ready()
   {
	   ID = 2;
   }

   void ready::deposit()
   {

	   opt->MakeDeposit();
   }

   void ready::balance()
   {
	   opt->DisplayBalance();

   }

   void ready::exit()
   {
	   opt->eject_card();

   }

   void ready::withdraw()
   {
	   opt->MakeWithdraw();
   }

   void ready::lock()
   {
	   cout << "already lock " << endl;
   }

   int ready::getID()
   {
	   return ID;
   }


   //abstract operation inherit fromt he state class, do nothing 
   void ready::create()
   {
	   cout << "";
   }
   void ready::card()
   {
	   cout << "";
   }
   void ready::IncorrectPin(int max)
   {
	   cout << "";
   }
   void ready::CorrectPinBelowMin()
   {
	   cout << "";
   }
   void ready::CorrectPinAboveMin()
   {
	   cout << "";
   }
   void ready::BelowMinBalance()
   {
	   cout << "";
   }
   void ready::AboveMinBalance()
   {
	   cout << "";
   }
   void ready::unlock()
   {
	   cout << "";
   }







   //for state s1

   s1::s1()
   {
	   ID = 3;
   }


   void   s1::BelowMinBalance()
   {
	   cout << "Below Min Balance" << endl;
	   opt->Penalty();
   }
   void s1::AboveMinBalance()
   {
	   cout << "above min balance" << endl;
   }

   int s1::getID()
   {
	   return ID;
   }

   //abstract operation inherit fromt he state class, do nothing 
   void s1::create()
   {
	   cout << "";
   }
   void s1::card()
   {
	   cout << "";
   }
   void s1::IncorrectPin(int max)
   {
	   cout << "";
   }
   void s1::CorrectPinBelowMin()
   {
	   cout << "";
   }
   void s1::CorrectPinAboveMin()
   {
	   cout << "";
   }
   void s1::deposit()
   {
	   cout << "";
   }
   void s1::exit()
   {
	   cout << "";
   }
   void s1::balance()
   {
	   cout << "";
   }
   void s1::withdraw()
   {
	   cout << "";
   }
   void s1::lock()
   {
	   cout << "";
   }
   void s1::unlock()
   {
	   cout << "";
   }









   //for state s2


   s2::s2()
   {
	   ID = 4;
	
   }

   int s2::getID()
   {
	   return ID;
   }

   void s2::AboveMinBalance()
   {
	   cout << "AboveMinBalance" << endl;
   }
   void s2::BelowMinBalance()
   {
	   cout << "BelowMinBalance" << endl;
   }

   //abstract operation inherit fromt he state class, do nothing 
   void s2::create()
   {
	   cout << "";
   }
   void s2::card()
   {
	   cout << "";
   }
   void s2::IncorrectPin(int max)
   {
	   cout << "";
   }

   void s2::CorrectPinBelowMin()
   {
	   cout << "";
   }
   void s2::CorrectPinAboveMin()
   {
	   cout << "";
   }
   void s2::deposit()
   {
	   cout << "";
   }
   void s2::exit()
   {
	   cout << "";
   }
   void s2::balance()
   {
	   cout << "";
   }
   void s2::withdraw()
   {
	   cout << "";
   }
   void s2::lock()
   {
	   cout << "";
   }
   void s2::unlock()
   {
	   cout << "";
   }






   //for state overdraw
   overdraw::overdraw()
   {
	   ID = 5;
   }

   int overdraw::getID()
   {
	   return ID;
   }

   void 	overdraw::exit()
   {
	   opt->eject_card();
   }

   void overdraw::deposit()
   {

	   opt->MakeDeposit();

   }

   void overdraw::balance()
   {
	   opt->DisplayBalance();
   }

   void overdraw::lock()
   {
	   cout << "already lock" << endl;
   }



   //abstract operation inherit fromt he state class, do nothing 
   void overdraw::create()
   {
	   cout << "";
   }
   void overdraw::card()
   {
	   cout << "";
   }
   void overdraw::IncorrectPin(int max)
   {
	   cout << "";
   }
   void overdraw::CorrectPinBelowMin()
   {
	   cout << "";
   }
   void overdraw::CorrectPinAboveMin()
   {
	   cout << "";
   }
   void overdraw::BelowMinBalance()
   {
	   cout << "";
   }
   void overdraw::AboveMinBalance()
   {
	   cout << "";
   }
   void overdraw::withdraw()
   {
	   cout << "";
   }
   void overdraw::unlock()
   {
	   cout << "";
   }







   //for state locked


   locked::locked()
   {
	   ID = 6;
   }

   int locked::getID()
   {
	   return ID;
   }
			
   void locked::unlock()
   {
	   cout << "now is unlocked" << endl;
   }


   //abstract operation inherit fromt he state class, do nothing 
   
   void locked::create()
   {
	   cout << "";
   }
   void locked::card()
   {
	   cout << "";
   }
   void locked::IncorrectPin(int max)
   {
	   cout << "";
   }
   void locked::CorrectPinBelowMin()
   {
	   cout << "";
   }
   void locked::CorrectPinAboveMin()
   {
	   cout << "";
   }
   void locked::deposit()
   {
	   cout << "";
   }
   void locked::BelowMinBalance()
   {
	   cout << "";
   }
   void locked::AboveMinBalance()
   {
	   cout << "";
   }
   void locked::exit()
   {
	   cout << "";
   }
   void locked::balance()
   {
	   cout << "";
   }
   void locked::withdraw()
   {
	   cout << "";
   }
   void locked::lock()
   {
	   cout << "";
   }
   
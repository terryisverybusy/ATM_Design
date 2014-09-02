#include <iostream>
#include <string>
#include <fstream>
#include"MDA_EFSM.h"
#include"DS.h"
#include"Action.h"
#include"AF.h"
#include"ATM_1.h"
#include"ATM_2.h"
#include"ATM_3.h"
#include"op.h"

using namespace std;



int main()
{
	int  commandATM =2;
	int  commandOp = 0;
	int stop = 1;

	//create class object
	MDA_EFSM mda;                //create MDA_EFSM object
	idle idle1;                 //create idel object 
	check_pin check_pin1;        //create check_pin object
	ready ready1;               //create ready object
	s1 s11;                       //create s1 object
	overdraw overdraw1;          //create overdraw object
	s2 s21;                      //create s2 object
	locked locked1;                //create lock object
	op op1;                        //create op object
	
	mda.LS[0] = &idle1;        //make LS[0] points to idle1
	mda.LS[1] = &check_pin1;    //make LS[1] points to check_pin1
	mda.LS[2] = &ready1;            //make LS[2] points to ready
	mda.LS[3] = &s11;              //make LS[3] points to s1
	mda.LS[4] = &s21;               //make LS[4] points to s2
	mda.LS[5] = &overdraw1;            //make LS[5] points to overdraw
	mda.LS[6] = &locked1;              //make LS[6] points to locked1
	idle1.opt = &op1;                    //make idel.opt points to op1
	check_pin1.opt = &op1;              //make check_pin1.opt points to op1
	ready1.opt = &op1;                    //make ready.opt points to op1
	s11.opt = &op1;                          //make s11.opt points to op1
	overdraw1.opt = &op1;                  // make overdraw.opt points to op1
	s21.opt = &op1;                        //make s21.opt points to op1
	locked1.opt = &op1;                   //make lock1.opt points to op1
	mda.S = mda.LS[0];                   //set the current state as LS[0]

	//initialize the pointers in states ( point to mda_efsm object)
	idle1.m = &mda;                   //make idel1.m points to MDA_EFSM
	check_pin1.m = &mda;              //make checkpin.m points to MDA_EFSM
	ready1.m = &mda;                  //make ready1.m points to MDA_EFSM
	s11.m = &mda;                     //make s11.m points to MDA_EFSM
	overdraw1.m = &mda;                    //make overdraw.m points to MDA_EFSM
	s21.m = &mda;                           //make s21.m points to MDA_EFSM
	locked1.m = &mda;                           //make lock1.m points to MDA_EFSM

	//initialize the pointers in states (point to op object)
	idle1.opt = &op1;                      //make idle1.opt points to op1
	check_pin1.opt = &op1;                 //make check_pin1.opt points to op1
	ready1.opt = &op1;                    //make ready1.opt points to op1
	s11.opt = &op1;                        //make s11.opt points to op1
	overdraw1.opt = &op1;                  //make overdraw.opt points to op1
	s21.opt = &op1;                       //make s21.opt points to op1 
	locked1.opt = &op1;                     //make lock1.opt point sto op1

	cout << "CS 586  PROJECT" << endl;
	cout << "Select ATM1 , ATM2 OR ATM3" << endl << endl << endl << endl << endl;
	cout << "1. ATM1" << endl;
	cout << "2. ATM2" << endl;
	cout << "3. ATM3" << endl<<endl<<endl<<endl<<endl<<endl;

	cin >> commandATM;
	
	//choose the ATM1
	if (commandATM == 1)
	{   
		ATM_1 atm1;   //create ATM_1 object
		CF1 cf1;           //ceate object cf1
		atm1.m = &mda;             //make m points to mda
		atm1.af = &cf1;             // make atm1.af points to cf1
		cf1.d1 = atm1.af->createDS();      //atm1 ask af to create the DS1, and then let  cf1.di points to DS1
		atm1.d = cf1.d1;           //let atm1.d points to DS1         
		op1.af = &cf1;   //let op1.af points to CF1
			
		cout << "                          ATM1                                   " << endl;
		cout << "                            menu of operations                  " << endl;
		cout << "  create()     " << endl;
		cout << "  card (int , string )" << endl;
		cout << "  deposit(int )" << endl;
		cout << "  withdraw (int ) " << endl;
		cout << "  pin (string )" << endl;
		cout << "  exit() " << endl;
		cout << "  balance() " << endl;
		cout << "  lock (string ) " << endl;
		cout << "  unlock(string ) " << endl << endl << endl << endl << endl;
		cout << "  ATM1    EXEECUTION " << endl << endl;
		cout << "  Select Operaion" << endl;

		//to make the loop 
		while (stop != 0)
		{
		
			cout << "1-create,2-card,3-deposit,4-withdraw,5-pin,6-exit,7-balance,8-lock,9- unlock" << endl;
			cin >> commandOp;
			//create operation 
			if (commandOp == 1)
			{
				atm1.create();

			}

			//card
			if (commandOp == 2)
			{
				cout << "operation card (int x, string  y)  " << endl;
				cout << "  Enter value of the parameter x:" << endl;
				int x;
				cin >> x;
				cout << "  Enter value of the parameter y:" << endl;
				string y;
				cin >> y;
				
				atm1.card(x, y);
			}


			//deposit
			if (commandOp == 3)
			{
				cout << "operation deposit(int d)" << endl;
				cout << "  Enter value of the parameter d:" << endl;
				int s;
				cin >> s;
				atm1.deposit(s);
			}


			//withdraw
			if (commandOp == 4)
			{
				cout << "operation withdraw(int u)" << endl;
				cout << "  Enter value of the parameter u:" << endl;
				int u;
				cin >> u;
				atm1.withdraw(u);
			}

			//pin
			if (commandOp == 5)
			{
				cout << "operation : PIN(string  x)" << endl;
				cout << "  Enter value of the parameter x:" << endl;
				string y;
				cin >> y;
				atm1.pin(y);
			}

			//exit
			if (commandOp == 6)
			{
				cout << "operation : exit()" << endl;
				atm1.exit();
			}


			//balance
			if (commandOp == 7)
			{
				cout << "operation balance()" << endl;
				atm1.balance();
			}

			//lock
			if (commandOp == 8)
			{
				cout << "operation : lock( string g)" << endl;
				cout << "  Enter value of the parameter g:" << endl;
				string g;
				cin >> g;
				atm1.lock(g);

			}

			//unlcok
			if (commandOp == 9)
			{
				cout << "operation : unlock( string k)" << endl;
				cout << "  Enter value of the parameter k:" << endl;
				string k;
				cin >> k;
				atm1.unlock(k);
			}

		}


	}


	//chosse ATM2
	if (commandATM == 2)
	{
		ATM_2 atm2;   //create ATM_1 object
		CF2 cf2;           //create CF2 object
		atm2.m = &mda;             //make m points to mda
		atm2.af = &cf2;               //let atm2.af points to cf2
		cf2.d2 = atm2.af->createDS();      // atm2 ask cf2to create ds2, and then assign address to d 
		atm2.d = cf2.d2;                   //let atm2.d points to ds2
		op1.af = &cf2;                  //let op1.af points to cf2

		cout << "                          ATM2                                   " << endl;
		cout << "                            menu of operations                  " << endl;
		cout << "  create()     " << endl;
		cout << "  CARD (float x, int y) " << endl;
		cout << "  PIN (int x) " << endl;
		cout << "  DEPOSIT (float d) " << endl;
		cout << "  WITHDRAW (float w)" << endl;
		cout << "  BALANCE () " << endl;
		cout << "  EXIT()  " << endl << endl << endl;
		cout << "  ATM2    EXEECUTION " << endl << endl;
		cout << "  Select Operaion" << endl;


		//the loop
		while (stop != 0)
		{

			cout << "1-create,2-CARD,3-PIN,4-DEPOSIT,5-WITHDRAW,6-BALANCEt,7-EXIT" << endl;
			cin >> commandOp;

			//create
			if (commandOp == 1)
			{
				atm2.create();

			}

			//CARD
			if (commandOp == 2)
			{
				cout << "operation CARD (float x, int  y)  " << endl;
				cout << "  Enter value of the parameter x:" << endl;
				float x;
				cin >> x;
				cout << "  Enter value of the parameter y:" << endl;
				int y;
				cin >> y;

				atm2.CARD(x, y);
			}

			//PIN
			if (commandOp == 3)
			{
				cout << "operation : PIN(int  x)" << endl;
				cout << "  Enter value of the parameter x:" << endl;
				int y;
				cin >> y;
				atm2.PIN(y);

			}

			//DEPOSIT
			if (commandOp == 4)
			{
				
					cout << "operation DEPOSIT(float d)" << endl;
					cout << "  Enter value of the parameter d:" << endl;
					float s;
					cin >> s;
					atm2.DEPOSIT(s);			
			}
		
			//WITHDRAW
			if (commandOp == 5)
			{

				cout << "operation withdraw(float u)" << endl;
				cout << "  Enter value of the parameter u:" << endl;
				float u;
				cin >> u;
				atm2.WITHDRAW(u);
			}

			//BALANCE
			if (commandOp == 6)
			{
				cout << "operation BALANCE()" << endl;
				atm2.BALANCE();
			}

			//EXIT
			if (commandOp == 7)
			{
				cout << "operation : exit()" << endl;
				atm2.EXIT();
			}
		}
	}

//choose ATM3
	if (commandATM == 3)
	{

		ATM_3 atm3;   //create ATM_1 object
		CF3 cf3;         //create CF3 object
		atm3.m = &mda;             //make m points to mda
		atm3.af = &cf3;	                  //let  atm3.af points to cf3
		cf3.d3 = atm3.af->createDS();      // atm3 ask cf3 to create ds3, and then assign address to d 
		atm3.d = cf3.d3;                  //let atm3.d point to cf3
		op1.af = &cf3;                    // let op1.af points to cf3

		cout << "                          ATM3                                  " << endl;
		cout << "                            menu of operations                  " << endl;
		cout << "  create()     " << endl;
		cout << "  card (int , int )" << endl;
		cout << "  deposit(int )" << endl;
		cout << "  withdraw (int ) " << endl;
		cout << "  pin (int )" << endl;
		cout << "  exit() " << endl;
		cout << "  balance() " << endl;
		cout << "  lock ( ) " << endl;
		cout << "  unlock( ) " << endl << endl << endl << endl << endl;
		cout << "  ATM3    EXEECUTION " << endl << endl;
		cout << "  Select Operaion" << endl;

		//the loop
		while (stop != 0)
		{

			cout << "1-create,2-card,3-pin,4-deposit,5-withdraw,6-balance,7-lock,8-unlock,9-exit()" << endl;
			cin >> commandOp;

			//create
			if (commandOp == 1)
			{
				atm3.create();

			}

			//card
			if (commandOp == 2)
			{
				cout << "operation card (int x, int  y)  " << endl;
				cout << "  Enter value of the parameter x:" << endl;
				int x;
				cin >> x;
				cout << "  Enter value of the parameter y:" << endl;
				int y;
				cin >> y;

				atm3.card(x, y);
			}


			//pin
			if (commandOp == 3)
			{
				cout << "operation : pin(int  x)" << endl;
				cout << "  Enter value of the parameter x:" << endl;
				int y;
				cin >> y;
				atm3.pin(y);
			}

			//deposit
			if (commandOp == 4)
			{

				cout << "operation deposit(int d)" << endl;
				cout << "  Enter value of the parameter d:" << endl;
				int s;
				cin >> s;
				atm3.deposit(s);
			}

			//withdraw
			if (commandOp == 5)
			{
				cout << "operation withdraw(int u)" << endl;
				cout << "  Enter value of the parameter u:" << endl;
				int u;
				cin >> u;
				atm3.withdraw(u);
			}

			//balance
			if (commandOp == 6)
			{
				cout << "operation balance()" << endl;
				atm3.balance();
			}

			//lock
			if (commandOp == 7)
			{
				cout << "operation : lock( )" << endl;
				atm3.lock();
			}

			//unlcok
			if (commandOp == 8)
			{
				cout << "operation : unlock()" << endl;
				atm3.unlock();

			}

			//exit 
			if (commandOp == 9)
			{
				cout << "operation : exit()" << endl;
				atm3.exit();
			}

		}
	}

	

system("pause");
return 0;
}
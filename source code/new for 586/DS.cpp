#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include"DS.h"




using namespace std;


//for DS
/*
void DS::set_strPin(string)
{
	cout << "" << endl;
}
string DS::get_strPin()
{
	return "a";
}
int  DS::get_intPin()
{
	return 1;
}
void DS::set_intPin(int)
{
	cout << "" << endl;
}
float DS::get_floTmpBalance()
{
	return 1.1;
}
void DS::set_floTmpBalance(float)
{
	cout << "" << endl;
}
int DS::get_intBalance()
{
	return 1;

}
int DS::get_intTmpDeposit()
{
	return 1;
}
void DS::set_intBalance(int)
{
	cout << "" << endl;
}
float DS::get_floTmpDeposit()
{
	return 1.1;
}
float DS::get_floBalance()
{
	return 1.1;
}
void DS::set_floBalance(float)
{
	cout << "" << endl;
}
int  DS::get_intTmpBalance()
{
	return 1;
}
void  DS::set_intTmpBalance(int)
{
	cout << "" << endl;
}
int   DS::get_intTmpWithdraw()
{
	return 1;
}
void  DS::set_intTmpWithdraw(int)
{
	cout << "" << endl;
}
float  DS::get_floTmpWithdraw()
{
	return 1.1;
}
int DS::get_Penalty()
{
	return 1;
}

string DS::get_strTmpPin()
{
	return "a";
}


void DS::set_strTmpPin(string x)
{
	cout << "";
}


void DS::set_intTmpDeposit(int x)
{
	cout << "";
}

int DS::get_intTmpPin()
{
	return 1;
}

void DS::set_intTmpPin(int x)
{
	cout << "";
}

void DS::set_floTmpDeposit(float x)
{
	cout << "";
}

void DS::set_floTmpWithdraw(float x)
{
	cout << "";
}

*/


// for DS1

	DS1::DS1(){
		DS1::Penalty = 10;
	}

	int DS1::get_Penalty()
	{
		return DS1::Penalty;
	}

	string DS1::get_strPin()
	{
		return DS1::strPin;
	}

	void DS1::set_strPin(string a)
	{
		DS1::strPin = a;
	}

	string DS1::get_strTmpPin()
	{
		return DS1::strTmpPin;
	}

	void DS1::set_strTmpPin(string a)
	{
		DS1::strTmpPin = a;
	}


	int DS1::get_intBalance()
	{
		return DS1::intBalance;
	}

	void DS1::set_intBalance(int a)
	{
		DS1::intBalance = a;
	}

	int DS1::get_intTmpBalance()
	{
		return DS1::intTmpBalance;
	}

	void DS1::set_intTmpBalance(int a)
	{
		DS1::intTmpBalance = a;
	}

	int DS1::get_intTmpDeposit()
	{
		return DS1::intTmpDeposit;
	}

	void DS1::set_intTmpDeposit(int a)
	{
		DS1::intTmpDeposit = a;
	}


	int DS1::get_intTmpWithdraw()
	{
		return DS1::intTmpWithdraw;

	}



	void DS1::set_intTmpWithdraw(int a)

	{
		DS1::intTmpWithdraw = a;
	}

// to implementation the  pure virtual fuction , actually do nothing 
	int DS1::get_intPin()
	{
		return 1;
	}
	void DS1::set_intPin(int X)
	{
		cout << "";
	}
	float DS1::get_floTmpBalance()
	{
		return 1.1;
	}
	void DS1::et_floTmpBalance(float X)
	{
		cout << "";
	}
	
	float DS1::get_floTmpDeposit()
	{
		return 1.1;
	}
	float DS1::get_floBalance()
	{
		return 1.1;
	}
	void DS1::set_floBalance(float X)
	{
		cout << "";
	}
	float DS1::get_floTmpWithdraw()
	{
		return 1.1;
	}
	void DS1::set_floTmpWithdraw(float X)
	{
		cout << "";
	}
	
	void DS1::set_floTmpDeposit(float X)
	{
		cout << "";
	}
	int DS1::get_intTmpPin()
	{
		return 1;
	}
	void DS1::set_intTmpPin(int x)
	{
		cout << "";
	}

	void DS1::set_floTmpBalance(float x)
	{
		cout << "";
	}





//for DS2
		DS2::DS2()
		{
			DS2::Penalty = 20;
		}

		int DS2::get_Penalty()
		{
			return DS2::Penalty;
		}

		int DS2::get_intPin()
		{
			return DS2::intPin;
		}

		void DS2::set_intPin(int a)
		{
			DS2::intPin = a;
		}

		int DS2::get_intTmpPin()
		{
			return DS2::intTmpPin;
		}

		void DS2::set_intTmpPin(int a)
		{
			DS2::intTmpPin = a;
		}


		float DS2::get_floBalance()
		{
			return DS2::floBalance;
		}

		void DS2::set_floBalance(float a)
		{
			DS2::floBalance = a;
		}

		float DS2::get_floTmpBalance()
		{
			return DS2::floTmpBalance;
		}

		void DS2::set_floTmpBalance(float a)
		{
			DS2::floTmpBalance = a;
		}

		float DS2::get_floTmpDeposit()
		{
			return DS2::floTmpDeposit;
		}

		void DS2::set_floTmpDeposit(float a)
		{
			DS2::floTmpDeposit = a;
		}


		float DS2::get_floTmpWithdraw()
		{
			return DS2::floTmpWithdraw;

		}

		void DS2::set_floTmpWithdraw(float a)

		{
			DS2::floTmpWithdraw = a;
		}



		//implement virtual function, do nothing  
		string DS2::get_strPin()
		{
			return "s";
		}
		void DS2::set_strPin(string x)
		{
			cout << "";
		}
	
		int DS2::get_intTmpDeposit()
		{
			return 1;
		}
		void DS2::set_intTmpDeposit(int x )
		{
			cout << "";
		}
		int DS2::get_intBalance()
		{
			return 1;
		}
		void DS2::set_intBalance(int x)
		{
			cout << "";
		}
		int DS2::get_intTmpWithdraw()
		{
			return 1;
		}
		void DS2::set_intTmpWithdraw(int x)
		{
			cout << "";
		}
		string DS2::get_strTmpPin()
		{
			return "s";
		}
		void DS2::set_strTmpPin(string x)
		{
			cout << "";
		}

		int DS2::get_intTmpBalance()
		{
			return 1;
		}

		void DS2::set_intTmpBalance(int x)
		{
			cout << "";
		}



//for DS3
		
			DS3::DS3()
			{
				DS3::Penalty = 0;
			}


			int DS3::get_Penalty()
			{
				return DS3::Penalty;
			}

			int DS3::get_intPin()
			{
				return DS3::intPin;
			}

			void DS3::set_intPin(int a)
			{
				DS3::intPin = a;
			}

			int DS3::get_intTmpPin()
			{
				return DS3::intTmpPin;
			}

			void DS3::set_intTmpPin(int a)
			{
				DS3::intTmpPin = a;
			}


			int DS3::get_intBalance()
			{
				return DS3::intBalance;
			}

			void DS3::set_intBalance(int a)
			{
				DS3::intBalance = a;
			}

			int DS3::get_intTmpBalance()
			{
				return DS3::intTmpBalance;
			}

			void DS3::set_intTmpBalance(int a)
			{
				DS3::intTmpBalance = a;
			}

			int DS3::get_intTmpDeposit()
			{
				return DS3::intTmpDeposit;
			}

			void DS3::set_intTmpDeposit(int a)
			{
				DS3::intTmpDeposit = a;
			}


			int DS3::get_intTmpWithdraw()
			{
				return DS3::intTmpWithdraw;

			}

			void DS3::set_intTmpWithdraw(int a)

			{
				DS3::intTmpWithdraw = a;
			}


			//imeplement the virtual function , do nothing 
			void DS3::set_strPin(string x)
			{
				cout << "";
			}
			string DS3::get_strPin()
			{
				return "s";
			}
			float DS3::get_floTmpBalance()
			{
				return 1.1;
			}
			void DS3::set_floTmpBalance(float x)
			{
				cout << "";
			}
			float DS3::get_floTmpDeposit()
			{
				return 1.1;
			}
			void DS3::set_floTmpDeposit(float x)
			{
				cout << "";
			}
			float DS3::get_floBalance()
			{
				return 1.1;
			}
			void DS3::set_floBalance(float x)
			{
				cout << "";
			}
			float DS3::get_floTmpWithdraw()
			{
				return 1.1;
			}
			void DS3::set_floTmpWithdraw(float x)
			{
				cout << "";
			}
			string DS3::get_strTmpPin()
			{
				return "s";
			}
			void DS3::set_strTmpPin(string)
			{
				cout << "";
			}
		
	


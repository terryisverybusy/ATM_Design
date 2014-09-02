#include <iostream>
#include <string>
#include <fstream>
#include"Action.h"
using namespace std;

//this part resposible for the strategy pattern 
//Action store_pin() for AMT 1 
	void Action1_1::store_pin()
	{

		string a = Action1_1::d->get_strTmpPin();
		Action1_1::d->set_strPin(a);
	}


	//Action store_pin() for ATM 2 and ATM3
		void Action1_2::store_pin()
		{
			int a = Action1_2::d->get_intTmpPin();
			Action1_2::d->set_intPin(a);
		}
	

		//Action store_blance() for ATM1 and ATM3
			void Action2_1::store_balance()
			{
				int x = Action2_1::d->get_intTmpBalance();
				Action2_1::d->set_intBalance(x);
			}


			//Action store_ balance for ATM2
				void Action2_2::store_balance()
				{
					float x = Action2_2::d->get_floTmpBalance();
					Action2_2::d->set_floBalance(x);
				}


				//Action prompt_for_PIN  for all ATM
					void Action3::prompt_for_PIN()
					{
						cout << "please enter PIN"<<endl<<endl;

					}
			
					//Action display_menu for ATM1 and ATM3	
						void Action4_1::display_menu()
						{
							cout << "Transaction Menu"<<endl<<endl;
							cout << "Balance" << endl;
							cout << "Deposit" << endl;
							cout << "Withdraw" << endl;
							cout << "Lock" << endl;
							cout << "unlock" << endl;

						}


						//Action display_menu() for ATM 2
						void Action4_2::display_menu()
						{
							cout << "Transaction Menu" << endl << endl;
							cout << "Balance" << endl;
							cout << "Deposit" << endl;
							cout << "Withdraw" << endl;
						

						}


						// Action incorrect pin msg for all ATM
							void Action5::incorrect_pin_msg()
							{
								cout << "the PIN is wrong" << endl << endl;

							}


							//action too many attempts msg for all ATM
								void Action6::too_many_attempts_msg()
								{
									cout << "you try too many times" << endl<<endl;
								}
								
							//action make depposit for ATM1 and ATM3
									void Action7_1::MakeDeposit()
									{
										int x = Action7_1::d->get_intTmpDeposit();
										int y = Action7_1::d->get_intBalance();
										int z = x + y;
										Action7_1::d->set_intBalance(z);
									}


									//Action makedeposit for AMT2
										void Action7_2::MakeDeposit()
										{
											float x = Action7_2::d->get_floTmpDeposit();
											float y = Action7_2::d->get_floBalance();
											float z = x + y;
											Action7_2::d->set_floBalance(z);
										}

										//Action make withdraw for ATM1 and ATM3
											void Action8_1::MakeWithdraw()
											{
												int x = Action8_1::d->get_intTmpWithdraw();
												int y = Action8_1::d->get_intBalance();
												int z = y - x;
												if (z >= 0)
													Action8_1::d->set_intBalance(z);

											}


									//Action  make withdraw for ATM2

												void Action8_2::MakeWithdraw()
												{
													float x = Action8_2::d->get_floTmpWithdraw();
													float y = Action8_2::d->get_floBalance();
													float z = y - x;
													Action8_2::d->set_floBalance(z);

												}

												//Action penalty for ATM1
													void Action9_1::Penalty()
													{
														int x = Action9_1::d->get_intBalance();
														int y = Action9_1::d->get_Penalty();
														int z = x - y;
														Action9_1::d->set_intBalance(z);
													}
												

												//Action penalty for ATM2
													void Action9_2::Penalty()
													{
														float x = Action9_2::d->get_floBalance();
														int y = Action9_2::d->get_Penalty();
														float z = x - y;
														Action9_2::d->set_floBalance(z);
													}

													//Action penalty for ATM3									
														void Action9_3::Penalty()
														{
															int x = Action9_3::d->get_intBalance();
															int y = Action9_3::d->get_Penalty();
															int z = x - y;
															Action9_3::d->set_intBalance(z);

														}
									
														//Action eject card for ATM 1,2,3
															void Action10::eject_card()
															{
																cout << "eject the card" << endl;
																cout << "Have a good day " << endl<<endl;
															}

															
															//Action display balance for ATM1,3
																void Action11_1::DisplayBalance()
																{
																	int x = Action11_1::d->get_intBalance();
																	cout << "the current balance is  " << x << endl;
																}


															//Action display balance for ATM2
																	void Action11_2::DisplayBalance()
																	{
																		float x = Action11_2::d->get_floBalance();
																		cout << "the current balance is  " << x << endl;
																	}


																

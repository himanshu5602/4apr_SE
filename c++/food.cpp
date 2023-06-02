#include<iostream>
using namespace std;
class aasutosh
{
	public:
		string name;
		int choice;
		int i,q,total;
		void inputdata()
		{
			cout<<"enter your name :-";
			cin>>name;
		}
		void displaydata()
		{
			cout<<"hello "<<name;
			while(1)
			{
				cout<<"\n\nWHAT WOULD YOU LIKE TO ORDER ?\n\n";
				cout<<"--------------MENU--------------\n";
	
				cout<<"1)pizza\n2)burger\n3)sandwich\n4)rolls";
				cout<<"\n\nplease enter your choice:-";
				cin>>choice;
				switch(choice)
				{
					case 1:
						cout<<"--------------PIZZA--------------";
						cout<<"\n1.margreta..........100Rs\n2.italian..........120Rs\n3.seven cheese..........150Rs\n4.thincrush..........180Rs";
						cout<<"\n\nplease select your pizza:-";
						cin>>choice;
						
						switch(choice)
						{
							case 1:
								cout<<"you have selected margreta pizza";
								cout<<"\nenter your quantity :-";
								cin>>q;
								total=q*100;
								cout<<"your bill is ="<<total;
								break;
								
								case 2:
									cout<<"you have selected italian pizza";
									cout<<"\nenter your quantity :-";
						            cin>>q;
						            total=q*120;
								    cout<<"your bill is="<<total;
									break;
									
									case 3:
										cout<<"you have selected seven cheese pizza";
										cout<<"\nenter your quantity :-";
						                cin>>q;
						                total=q*150;
								        cout<<"your bill is="<<total;
										break;
										
										case 4:
											cout<<"you have selected thincrush pizza";
											cout<<"\nenter your quantity :-";
						                    cin>>q;
											total=q*180;
								            cout<<"your bill is="<<total; 
											break;
						}
						break;
						
						case 2:
							cout<<"--------------BURGER--------------";
							cout<<"\n1.vegetable..........50Rs\n2.aalu tikki..........60Rs\n3.dubble cheese..........70Rs";
							cout<<"\n\nplease select your burger:-";
							cin>>choice;
							switch(choice)
							{
								case 1:
									cout<<"you have selected vegetable burger";
									cout<<"\nenter your quantity :-";
									cin>>q;
							        total=q*50;
								    cout<<"your bill is="<<total;
                                   	break;
									
									case 2:
										cout<<"you have selected aalu tikki burger";
										cout<<"\nenter your quantity :-";
						                cin>>q;
				                        total=q*60;
								        cout<<"your bill is="<<total;
										break;
										
										case 3:
										cout<<"you have selected dubble cheese burger";
										cout<<"\nenter your quantity :-";
						                cin>>q;
				                        total=q*70;
                                        cout<<"your bill is="<<total;
										break;
							}
							break;
							
							case 3:
								cout<<"---------------SANDWICH---------------";
								cout<<"\n1.greel sandwich..........100Rs\n2.simple sandwich..........200Rs\n3.vegitable sandwich..........300Rs";
								cout<<"\n\nplease select your sandwich:-";
								cin>>choice;
								switch(choice)
								{
									case 1:
										cout<<"you have selected greel sandwich";
										cout<<"\nenter your quantity :-";
						                cin>>q;
   	                                    total=q*100;
								        cout<<"your bill is="<<total;
										break;
										
										case 2:
										cout<<"you have selected simple sandwich";
										cout<<"\nenter your quantity :-";
						                cin>>q;
   	                                    total=q*200;
								        cout<<"your bill is="<<total;
										break;
											
										case 3:
								        cout<<"you have selected vegitablr sandwich";
										cout<<"\nenter your quantity :-";
						                cin>>q;
   	                                    total=q*300;
								        cout<<"\n\nyour bill is="<<total;
										break;
												
								}
								break;
								
								case 4:
									cout<<"---------------ROLL---------------";
									cout<<"\n1.spring roll..........10Rs\n2.cinnamon roll..........20Rs\n3.egg roll..........30Rs";
									cout<<"\n\nplease select your roll:-";
									cin>>choice;
									switch(choice)
									{
										case 1:
										cout<<"you have selected spring roll";
										cout<<"\nenter your quantity :-";
						                cin>>q;
   	                                    total=q*10;
								        cout<<"your bill is="<<total;
											break;
											
											case 2:
												cout<<"you have selected cinnamon roll";
										        cout<<"\nenter your quantity :-";
			                         			cin>>q;
                                                total=q*20;
								                cout<<"your bill is="<<total;
												break;
												
												case 3:
												cout<<"you have selected egg roll";
							               		cout<<"\nenter your quantity :-";
                                                cin>>q;
     	                                        total=q*30;
							                 	cout<<"your bill is="<<total;
													break;
									}
									break;
						
				}
				break;
				
				
			}
		}
};
main()
{
	aasutosh ash;
	ash.inputdata();
	ash.displaydata();
	
}

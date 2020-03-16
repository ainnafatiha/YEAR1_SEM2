#include<iostream>
#include<string>

using namespace std;

class Address //YANG PALING BASIC!!!
{
	private :
		string registrar;
		string country;
		
	public :
		Address ()
		{
			registrar = " ";
			country = " ";
		}
	
		void set (string aRegistrar, string aCountry)
		{
			registrar = aRegistrar;
			country = aCountry;
		}
		
		string getRegistrar () const
		{
			return registrar;
		}
		
		string getCountry () const
		{
			return country;
		}
};


class Ship //AGGREGATION APPLIED !!!
{
	private :
		string name;
		int yearMade;
		Address address;
		
	public :
		Ship ()
		{
			name = " ";
			yearMade = 0;
		}
		
		void read ()
		{
			cout<<"Ship Name : ";
			getline (cin, name);
			
			cout<<"Year Built : ";
			cin>>yearMade;
			
			cout<<"The address the ship was registered : ";
			cout<<"Registrar Office : ";
			getline (cin, registrar);
			
			cout<<"Country : ";
			getline (cin, country);
			
			address.set(registrar, country);
		}
		
		void print () const 
		{
			cout<<"Ship Name: "<<name<<endl;
			cout<<"Year Built: "<<yearMade<<endl;
			cout<<"The address the ship was registered: "<<endl;
			cout<<" "<<address.getRegistrar<<endl;
			cout<<" "<<address.getCountry<<endl;	
		}
};
		
int menu ()
{
	int choice = 0;
	
	while ( (choice > 0) || (choice < 4 ) )
	{
		cout<<"========MENU========"<<endl;
		cout<<"1. Add a ship"<<endl;
		cout<<"2. Display ships"<<endl;
		cout<<"3. Exit"<<endl<<endl<<endl<<endl;
		
		
		cout<<"Choose an operation";
		cin>>choice;
		cin.ignore();
		cout<<endl<<endl;
	}
	
	return choice;
}

int main ()
{
	Ship *ships = new Ship [100];
	int shipCount = 0;
	int oper;
	
	do 
	{
		oper = menu ();
		
		switch (oper)
		{
			case 1:
				cout<<"Enter the information of the ship >>> "<<endl;
				ships[shipCount].read();
				shipCount++;
				break;
				
			case 2:
				cout<<"<<< Inventory of Ship >>>"<<endl<<endl;
				cout<<"Total ships = "<<shipCount<<endl;
				cout<<endl;
				
				cout<<"====Ship List===="<<endl<<endl;
				for (int i = 0; i<shipCount; i++)
				{
					(ships+i)->print();
				}
				
			case 3:
				break;
		}	
	}
	while(oper != 3);
	return 0; 
	
}

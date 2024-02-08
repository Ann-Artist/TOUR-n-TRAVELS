#include<iostream.h>
#include<conio.h>

class customer
{
	public:
	int id;
	char name[20];
	char phno[10];
	char reg;

	int pplno;

		void acceptc()
		{
			cout<<endl;
			cout<<"ENTER THE DETAILS OF CUSTOMER:"<<endl;
			cout<<"Enter the customer id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Phone no. ";
			cin>>phno;
		}
		void displayc()
		{
			cout<<endl;
			cout<<"CUSTOMER DETAILS"<<endl;
			cout<<"Customer id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Phone no: "<<phno<<endl;
		}
		void register1()
		{
			cout<<endl;
			cout<<"Do you want to register ?(y/n): ";
			cin>>reg;
			if(reg=='y'||reg=='Y')
			{
				acceptc();
				displayc();
				makereservation();
			}
			else if(reg=='n'||reg=='N')
			{
				cout<<endl;
				cout<<"Thank you for visiting"<<endl;
			}
			else
			{
				cout<<"INVALID CHOICE!"<<endl;
			}
		}
		void makereservation()
		{
			char r;
			cout<<endl<<"Confirm Reservation (Y/N): ";
			cin>>r;
			if(r=='Y'||r=='y')
			{
				cout<<endl<<"Reservation done"<<endl<<"Thank you!"<<endl;
			}
			else if(r=='N'||r=='n')
			{
				cout<<endl<<"Reservation not confirmed!"<<"Thank you for visiting"<<endl;
			}
			else
			{
				cout<<"\nInavalid Choice!";
			}
		}
};
class guide
{
	int age;
	char gender;
	public:
	void acceptg()
	{
		cout<<endl;
		cout<<"Guide = Male or Female?(m/f): ";
		cin>>gender;
		if(gender=='m'||gender=='M')
		{
			again1:

			cout<<"Enter suitable age of guide you prefer: ";
			cin>>age;

			if(age<25 && age>18)
			{
				cout<<endl;
				cout<<"GUIDE AVAILABLE"<<endl<<endl;
				cout<<"Guide Details:- "<<endl;
				cout<<"Name: Maxx Rio"<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Charges: 1000rs"<<endl;
			}
			else if(age<45 && age>25)
			{
				cout<<endl;
				cout<<"GUIDE AVAILABLE"<<endl<<endl;
				cout<<"Guide Details:- "<<endl;
				cout<<"Name: Michal Ferro"<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Charges: 1500rs"<<endl;
			}
			else
			{
				cout<<endl;
				cout<<"Guide Not Available!"<<endl;
				goto again1;
			}
		}
		else if(gender=='f'||gender=='F')
		{
			again2:

			cout<<"Enter suitabled age of guide you prefer: ";
			cin>>age;

			if(age<25 && age>18)
			{
				cout<<endl;
				cout<<"GUIDE AVAILABLE"<<endl<<endl;
				cout<<"Guide Details:- "<<endl;
				cout<<"Name: Mery Riche"<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Charges: 1000rs"<<endl;
			}
			else if(age<45 && age>25)
			{
				cout<<endl;
				cout<<"GUIDE AVAILABLE"<<endl<<endl;
				cout<<"Guide Details:- "<<endl;
				cout<<"Name: Marcy colombia"<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Charges: 1500rs"<<endl;
			}
			else
			{
				cout<<endl;
				cout<<"Guide Not Available!"<<endl;
				goto again2;
			}
		}
		else
		{
			cout<<endl;
			cout<<"INVALID CHOICE !!"<<endl;
		}
	}
};

int main()
{
	clrscr();
	cout<<"\t|------------------------------------------------------------|"<<endl;
	cout<<"\t|               WELCOME TO A&K TOURS & TRAVELS               |"<<endl;
	cout<<"\t|------------------------------------------------------------|"<<endl;
	cout<<"\t|============================LIST============================|"<<endl;
	cout<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
	cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
	cout<<"| 101 | 2023-05-15  | 07 days   | Jaipur    | Royal Heritage        | 25,000  |"<<endl;
	cout<<"| 102 | 2023-06-10  | 10 days   | Goa       | Beach Getaway         | 30,000  |"<<endl;
	cout<<"| 103 | 2023-07-20  | 05 days   | Manali    | Hill Station Retreat  | 20,000  |"<<endl;
	cout<<"| 104 | 2023-08-05  | 14 days   | Kerala    | Backwater Adventure   | 35,000  |"<<endl;
	cout<<"| 105 | 2023-09-15  | 08 days   | Udaipur   | Romantic Lakeside     | 28,000  |"<<endl;
	cout<<"| 106 | 2023-10-10  | 06 days   | Shimla    | Mountain Escape       | 22,000  |"<<endl;
	cout<<"| 107 | 2023-11-12  | 09 days   | Agra      | Taj Mahal Discovery   | 27,000  |"<<endl;
	cout<<"| 108 | 2023-12-20  | 07 days   | Mysore    | Cultural Extravaganza | 24,000  |"<<endl;
	cout<<"| 109 | 2024-01-05  | 12 days   | Mumbai    | City of Dreams        | 32,000  |"<<endl;
	cout<<"| 110 | 2024-02-14  | 14 days   | Rishikesh | Yoga and Wellness     | 29,000  |"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	re:
	int ch;
	cout<<"Enter id of tour you're interested in: ";
	cin>>ch;

	switch(ch)
	{
		case 101:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 101 | 2023-05-15  | 07 days   | Jaipur    | Royal Heritage        | 25,000  |"<<endl;
		break;
		case 102:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 102 | 2023-06-10  | 10 days   | Goa       | Beach Getaway         | 30,000  |"<<endl;
		break;
		case 103:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 103 | 2023-07-20  | 05 days   | Manali    | Hill Station Retreat  | 20,000  |"<<endl;
		break;
		case 104:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 104 | 2023-08-05  | 14 days   | Kerala    | Backwater Adventure   | 35,000  |"<<endl;
		break;
		case 105:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 105 | 2023-09-15  | 08 days   | Udaipur   | Romantic Lakeside     | 28,000  |"<<endl;
		break;
		case 106:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 106 | 2023-10-10  | 06 days   | Shimla    | Mountain Escape       | 22,000  |"<<endl;
		break;
		case 107:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 107 | 2023-11-12  | 09 days   | Agra      | Taj Mahal Discovery   | 27,000  |"<<endl;
		break;
		case 108:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 108 | 2023-12-20  | 07 days   | Mysore    | Cultural Extravaganza | 24,000  |"<<endl;
		break;
		case 109:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 109 | 2024-01-05  | 12 days   | Mumbai    | City of Dreams        | 32,000  |"<<endl;
		break;
		case 110:
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"| ID  | DATE        | DURATION  | LOCATION  | PACKAGE               | PRICE   |"<<endl;
		cout<<"|-----|-------------|-----------|-----------|-----------------------|---------|"<<endl;
		cout<<"| 110 | 2024-02-14  | 14 days   | Rishikesh | Yoga and Wellness     | 29,000  |"<<endl;
		break;

		default:
			cout<<endl;
			cout<<"INVALID CHOICE !!"<<endl;
			break;
	}

	if(ch==101||ch==102||ch==103||ch==104||ch==105||ch==106||ch==107||ch==108||ch==109||ch==110)
	{
		customer c;
		c.register1();

		guide g;
		g.acceptg();
	}
	else
	{
		goto re;
	}

	getch();
	return 0;
}
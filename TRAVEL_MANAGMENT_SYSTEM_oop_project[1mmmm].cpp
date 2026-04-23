#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;
void menu();
void admin();
class managemenu
{
	private:
		string id = "admin";
		int password = 1122;
	protected:
		int login;
	public:
		string id_1;
		int password_1;
		managemenu()
		{
			system("color FD");
			cout<<"\n\n";
			cout<<"\t********************************************"<<endl;
			cout<<"\t********************************************"<<endl;
			cout<<"\t**                                        **"<<endl;
			cout<<"\t** ------LAHORE GARRISON UNIVERSITY------ **"<<endl;
			cout<<"\t**                                        **"<<endl;
			cout<<"\t**     Topic:Travel Managment System      **"<<endl;
			cout<<"\t**                                        **"<<endl;
			cout<<"\t**       Alisha Naveed      (042)         **"<<endl;
			cout<<"\t**                                        **"<<endl;
			cout<<"\t********************************************"<<endl;
			cout<<"\t********************************************"<<endl;
			
			log:
			cout<<"\n\n\n\n\tPress 1 to login as admin or 2 to continue as user: ";
			cin>>login;
			if(login==1){
				system("cls");
				cout<<"\n\n\tEnter id: ";
				cin>>id_1;
				cout<<"\n\tEnter password: ";
				cin>>password_1;
				
				if(id_1 == id && password_1 == password){
					system("cls");
					admin();
				}
				else{
					cout<<"\tInvalid id or password try again !"<<endl;
					goto log;
				}
			}
			else if(login==2){
				system("cls");
				menu();
			}
			else {
				cout<<"Invalid Input!Redircting to Login Menu\n Please Wait !"<<endl;
				Sleep(1);
				goto log;
			}
			system("CLS");
		}
		~managemenu(){
		}
	
};
class Customers
{
	public:
		string name,gender,address;
		int age;
		string mobile;
		static int cusID;
		char all[999];
	void getDetails()
	{
		ofstream out("old-customers.txt",ios::app);
		{
			cout<<"Enter Customer ID : ";
		    cin>>cusID;
		    cout<<"Enter Name : ";
		    cin>>name;
		    cout<<"Enter Age : ";
		    cin>>age;
		    cout<<"Enter Mobile Number : ";
		    again:
		    cin>>mobile;
		    
		    if(mobile.size()!=11){
		    	cout<<"Invalid number!"<<endl;
		    	cout<<"Enter again."<<endl;
		    	goto again;
			}
			
			cout<<"Enter Address : ";
		    cin>>address;
		    cout<<"Enter Gender : ";
		    cin>>gender;
			
			
		}
		
		out<<"\nCustomer ID :"<<cusID<<"\nName :"<<name<<"\nAge :"<<age<<"\nMobile Number :"<<mobile<<"\nAddress :"<<address<<"\nGender :"<<gender<<endl;
		out.close();
		cout<<"\nSAVED \n Note: We save your details record for future purpose\n"<<endl;
	}
	void showDetails()
	{
		ifstream in("old-customers.txt");
		{
			if(!in)
			{
				cout<<"File Error!"<<endl;
			}
			while(!(in.eof()))
			{
				in.getline(all,999);
				cout<<all<<endl;
			}
			//in.close();
		}
	}
};
int Customers::cusID;
class Cabs
{
	public:
		int cabChoice;
		int kilometers;
		int hireCab;
		float cabcost;
	    static float lastcabCost;
		void cabDetails()
		{
			cout<<"We collaborated with fastest,safest,and smartest cab service around the country"<<endl;
			cout<<"----------------ABC Cabs-----------------\n"<<endl;
			cout<<"1. Rent a Standard Cab - Rs.15 for 1KM "<<endl;
			cout<<"2. Rent a Luxury Cab - Rs.25 for 1KM "<<endl;
			
			cout<<"\nto calculate the cost of your journey : "<<endl;
			cout<<"Enter which kind of cab you need : ";
			cin>>cabChoice;
			cout<<"Enter kilometers you have to travel :";
			cin>>kilometers;
			
			if(cabChoice==1)
			{
				cabcost=kilometers*15;
				cout<<"\n Your tour cost "<<cabcost<<" rupees for a Standard Cab."<<endl;
				cout<<"Press 1 to hire this cab: or";
				cout<<"Press 2 to select another cab: ";
				cin>>hireCab;
				
				system("CLS");
				
				if(hireCab==1)
				{
					lastcabCost=cabcost;
					cout<<"\nYou have successfully hired a Standard Cab"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else if(hireCab==2)
				{
					cabDetails();
				}
				else{
					cout<<"Invalid Input!Redircting to previous menu\n Please Wait !"<<endl;
					Sleep(999);
					system("CLS");
					cabDetails();
				}
			}
			else if(cabChoice==2)
			{
				cabcost=kilometers*25;
				cout<<"\n Your tour will cost "<<cabcost<<" rupees for a luxury Cab."<<endl;
				cout<<"Press 1 to hire this cab: or";
				cout<<"Press 2 to select another cab: ";
				cin>>hireCab;
				
				system("CLS");
				
				if(hireCab==1)
				{
					lastcabCost=cabcost;
					cout<<"\nYou have successfully hired a luxury Cab"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else if(hireCab==2)
				{
					cabDetails();
				}
				else{
					cout<<"Invalid Input!Redircting to previous menu\n Please Wait !"<<endl;
					Sleep(1100);
					system("CLS");
					cabDetails();
				}
			}
			else
			{
				cout<<"Invalid Input!Redircting to Main menu\n Please Wait !"<<endl;
					Sleep(1100);
					system("CLS");
					menu();
			}
			cout<<"\nPress 1 to Redirect Main Menu : ";
			cin>>hireCab;
			system("CLS");
			if(hireCab==1)
			{
				menu();
			}
			else
			{
				menu();
			}
		}
};
float Cabs::lastcabCost;
class Booking
{
	public:
		int choicehotel,packchoice;
		static float hotelcost;
		void hotels()
		{
			string hotelno[]={"Avendra","Choiceyou","Elephantbay"};
			for(int a=0;a<3;a++)
			{
				cout<<(a+1)<<". Hotel"<<hotelno[a]<<endl;
			}
			cout<<"\nCurrently we collaborated with above hotels! "<<endl;
			cout<<"Press any key to back or\nEnter number of the hotel you want to book:";
			cin>>choicehotel;
			system("CLS");
			if(choicehotel==1)
			{
				cout<<"----------------WELCOME TO HOTEL AVENDRA------------------\n"<<endl;
				cout<<"The Garden,food and beverage.Enjoy all you can drink,Stay cool and get chilled in the summer sun. "<<endl;
				cout<<"Packages offered by Avendra:\n"<<endl;
				cout<<"1.Standard Pack"<<endl;
				cout<<"\tAll basic facilities you need just for :Rs.5000.00"<<endl;
				cout<<"2.Premium Pack"<<endl;
				cout<<"\tEnjoy Premium:Rs.10000.00"<<endl;
					cout<<"3.Luxury Pack"<<endl;
				cout<<"\tLive a luxury at Avendra :Rs.15000.00"<<endl;
				cout<<"\nPress another key to back or\nEnter package number you want to book: ";
				cin>>packchoice;
				if(packchoice==1)
				{
					hotelcost=5000.00;
					cout<<"\nYou have successfully booked Standard pack at Avendra"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else if(packchoice==2)
				{
					hotelcost=10000.00;
					cout<<"\nYou have successfully booked Premium pack at Avendra"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else if(packchoice==3)
				{
					hotelcost=15000.00;
					cout<<"\nYou have successfully booked Luxury pack at Avendra"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else
				{
					cout<<"Invalid Input! Redirecting to previous menu \nPlease wait!"<<endl;
					Sleep(1100);
					system("CLS");
					hotels();
				}
				int gotomenu;
				cout<<"Press 1 to redirect main menu: ";
				cin>>gotomenu;
				if(gotomenu==1)
				{
					menu();
				}
				else
				{
					menu();
				}
			}
			else if(choicehotel==2)
			{
				cout<<"------------WELCOME TO HOTEL CHOICEYOU-------------\n"<<endl;
				cout<<"Swimming pool | Free wiFi | Family rooms \nFitness center | Restaurant & Bar"<<endl;
				cout<<"Packages offered by choiceyou:\n"<<endl;
				
				cout<<"1.Family Pack"<<endl;
				cout<<"\t Rs.15000.00 for a day"<<endl;
				cout<<"2.Couple Pack"<<endl;
				cout<<"\t Rs.10000.00 for a day"<<endl;
				cout<<"3.Single Pack"<<endl;
				cout<<"\t 5000.00 for a day"<<endl;
				cout<<"\nPress another key to back or\nEnter package number you want to book: ";
				cin>>packchoice;
				if(packchoice==1)
				{
					hotelcost=15000.00;
					cout<<"\nYou have successfully booked Family pack at Choiceyou"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else if(packchoice==2)
				{
					hotelcost=10000.00;
					cout<<"\nYou have successfully booked Couple pack at Choiceyou "<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else if(packchoice==3)
				{
					hotelcost=5000.00;
					cout<<"\nYou have successfully booked Single pack at Choiceyou"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
				else
				{
					cout<<"Invalid Input! Redirecting to previous menu \nPlease wait!"<<endl;
					Sleep(1100);
					system("CLS");
					hotels();
				}
				int gotomenu;
				cout<<"Press 1 to redirect main menu: ";
				cin>>gotomenu;
				if(gotomenu==1)
				{
					menu();
				}
				else
				{
					menu();
				}
			}
			else if(choicehotel==3)
			{
					cout<<"------------WELCOME TO HOTEL ELEPHANTBAY-------------\n"<<endl;
				cout<<"Set in tropical gardens on the Banks of the Maha Oya river While seeing Elephants"<<endl;
				cout<<"Amazing offer in this summer: Rs 5000 for a one day!!! "<<endl;
				cout<<"\nPress another key to back or\nPress 1 to book this special package: ";
				cin>>packchoice;
				
				if(packchoice==1)
				{
					hotelcost=5000.00;
					cout<<"\nYou have successfully booked Elephantbay Special pack"<<endl;
					cout<<"Goto Menu and take the receipt"<<endl;
				}
	
				else
				{
					cout<<"Invalid Input! Redirecting to previous menu \nPlease wait!"<<endl;
					Sleep(1100);
					system("CLS");
					hotels();
				}
				int gotomenu;
				cout<<"Press 1 to redirect main menu: ";
				cin>>gotomenu;
				if(gotomenu==1)
				{
					menu();
				}
				else
				{
					menu();
				}
			}
			else
			{
				cout<<"Invalid Input! Redirecting to previous menu \nPlease wait!"<<endl;
					Sleep(1100);
					system("CLS");
			}
		}
};
float Booking :: hotelcost;
class Charges : public Cabs, Booking, Customers
{
	public:
		void printBill()
		{
			ofstream outf("receipt.txt",ios::trunc);
			{
				outf<<"------ABC Travel Agency------"<<endl;
				outf<<"----------Receipt------------"<<endl;
				outf<<"_____________________________"<<endl;
				outf<<"Customer ID :"<<Customers::cusID<<endl;
				outf<<"Descriptation \t\t total "<<endl;
				outf<<"Hotel Cost :\t\t"<<fixed<<setprecision(2)<<Booking::hotelcost<<endl;
				outf<<"Travel (Cab) Cost :\t\t"<<fixed<<setprecision(2)<<Cabs::lastcabCost<<endl;
				outf<<"_____________________________"<<endl;
				outf<<"Total Charges:\t\t"<<fixed<<setprecision(2)<<Booking::hotelcost+Cabs::lastcabCost<<endl;
				outf<<"_____________________________"<<endl;
				outf<<"---------THANK YOU-----------"<<endl;
			}
			outf.close();
		}
		void showBill()
		{
			ifstream inf("receipt.txt");
			{
				if(!inf)
				{
					cout<<"File opening error!"<<endl;
				}
				while(!(inf.eof()))
				{
					inf.getline(all,999);
					cout<<all<<endl;
				}
			}
			inf.close();
		}
};


class admin_bills : public Cabs, Booking, Customers
{
	public:
		void printBill()
		{
			ofstream outf("admin-receipt.txt",ios::app);
			{
				outf<<"------ABC Travel Agency------"<<endl;
				outf<<"----------Receipt------------"<<endl;
				outf<<"_____________________________"<<endl;
				outf<<"Customer ID :"<<Customers::cusID<<endl;
				outf<<"Descriptation \t\t total "<<endl;
				outf<<"Hotel Cost :\t\t"<<fixed<<setprecision(2)<<Booking::hotelcost<<endl;
				outf<<"Travel (Cab) Cost :\t\t"<<fixed<<setprecision(2)<<Cabs::lastcabCost<<endl;
				outf<<"_____________________________"<<endl;
				outf<<"Total Charges:\t\t"<<fixed<<setprecision(2)<<Booking::hotelcost+Cabs::lastcabCost<<endl;
				outf<<"_____________________________"<<endl;
				outf<<"---------THANK YOU-----------\n\n"<<endl;
			}
			outf.close();
		}
		void showBill()
		{
			ifstream inf("admin-receipt.txt");
			{
				if(!inf)
				{
					cout<<"File opening error!"<<endl;
					return ;
				}
				while(!(inf.eof()))
				{
					inf.getline(all,999);
					cout<<all<<endl;
				}
			}
			inf.close();
		}
};


void admin(){ 
		int inchoice;
		Customers a2;
		admin_bills b1;
		
		cout<<"\t-----Admin-------\n"<<endl;
		cout<<"\t1.Enter New Customrs"<<endl;
		cout<<"\t2.See Old Customers"<<endl;
		cout<<"\t3.See all Receipts"<<endl;
		cout<<"\t4.Exit"<<endl;
		
		cout<<"\t\nEnter Choice :";
		cin>>inchoice;
		system("CLS");
		if(inchoice==1)
		{
		    a2.getDetails();
			admin();
		}
		if(inchoice==2)
		{
			a2.showDetails();
			system("pause");
			admin();
		}
		
		if(inchoice==3){
			b1.showBill();
			system("pause");
			admin;
		}
		
		if(inchoice==4)
	{
		cout<<"---GOOD-BYE---"<<endl;
		Sleep(999);
		system("CLS");
	}
	
	else
	{
		cout<<"Invalid Input!Redircting to Main menu\n Please Wait !"<<endl;
		Sleep(1100);
		system("CLS");
		admin();
	}
	
}
void menu()
{
	int mainchoice; 
	int inchoice;
	int gotomenu; 
	cout<<"\t\t    *ABC Travels*\n"<<endl;
	cout<<"----------------Main Menu----------------"<<endl;
	cout<<"        - - - - - - - - - - - - - - - - -"<<endl;
	cout<<"\t|\t\t\t\t|"<<endl;
	cout<<"\t|\t1- Cabs Managment    \t|"<<endl;
	cout<<"\t|\t2- Bookings Managment\t|"<<endl;
	cout<<"\t|\t3- Charges & bill    \t|"<<endl;
	cout<<"\t|\t4- Exit        \t\t|"<<endl;
	cout<<"\t|\t\t\t\t|"<<endl;
	cout<<"        - - - - - - - - - - - - - - - - -"<<endl;
	
	cout<<"\nEnter Your Choice :";
	cin>>mainchoice; 
	
	system("CLS");
	Customers a2;
	Cabs a3;
	Booking a4;
	Charges a5;
	admin_bills b1;
	
	if(mainchoice==1)
	{
		a3.cabDetails();
		
	}
	else if(mainchoice==2)
	{
		cout<<"--->Book a luxury hotel using the system<---"<<endl;
		a4.hotels();
	}
	else if(mainchoice==3)
	{
		cout<<"--->Get your Receipt<---"<<endl;
		a5.printBill();
		b1.printBill();
		cout<<"Your receipt is already printed you can get it from file path/n"<<endl;
		cout<<"to Display the your receipt in the screen ,Enter 1:or Enter another key to back main menu :";
		
		cin>>gotomenu;
		if(gotomenu==1)
		{
			system("CLS");
			a5.showBill();
			cout<<"\n Press 1 to Redirect main menu :";
			cin>>gotomenu;
			system("CLS");
			if(gotomenu==1)
			{
				menu();
			}
			else
			{
				menu();
			}
		}
		else{
			system("CLS");
			menu();
		}
	}
	else if(mainchoice==4)
	{
		cout<<"---GOOD-BYE---"<<endl;
		Sleep(999);
		system("CLS");
	}
	else
	{
		cout<<"Invalid Input!Redircting to Main menu\n Please Wait !"<<endl;
		Sleep(1100);
		system("CLS");
		menu();
	}
	
}
int main()
{
	managemenu startObj;

	return 0;
}

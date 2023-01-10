#include<iostream>

#include<conio.h>

#include<windows.h>

using namespace std;

struct emp{

	string name,id,address,contact;

	float salary;
	
	int working_hours;
	
	char AnyLoan;

    int HRA;
    
    int PF;
    
    int tax;
    
    int MealAllowance;
    
    int TransportAllowance;
    
    int MedicalAllowance;
    
    int LoanBalance;
    
    int LoanDebit;
    
    int grosspay;
    
    int workingHours;
    
    int DA;

};

int total=0;

emp e[100];

void empdata(){

	int user=0;

	cout<<"How many employees data do you want to enter??"<<endl;

	cin>>user;

	for(int i=total;i<total+user;i++){
		
        int sal,PF,TAX,HRA,MealA,MedicalA,TransportA,LoanBal,LoanDeb,h,DA;
        
        char loan;
        
		cout<<"Enter data of employee "<<i+1<<endl<<endl;

		cout<<"Enter employee name: ";
		
		getline(cin,e[i].name);
		getline(cin,e[i].name);

		cout<<"Enter id: ";

		cin>>e[i].id;

		cout<<"Enter address: ";
		
		getline(cin,e[i].address);
		getline(cin,e[i].address);

		cout<<"Enter contact: ";

		cin>>e[i].contact;

		cout<<"Enter Working Hours: ";

		cin>>e[i].working_hours;
		
		sal = e[i].working_hours*300;
		
		do
        {
   
        cout<<"Any Loan (Y/N) ?: ";
        
        loan=getche();
        
        if(loan=='Y'|| loan == 'y' || loan =='n' || loan == 'N')
        
            break;
            
        }
		while(1);
		
        if(loan=='y'|| loan=='Y')
        
		{
        
        cout<<"Enter Loan Balance : ";
        
        cin>>LoanBal;
        
        }
        
        else
        
        {
        	
        LoanBal=0;
        
        }
		
		TAX =  0.04 * sal;
		
        DA = 1.20 * sal;
        
        PF = 0.12 * sal;
        
        HRA = sal * 0.27;
        
        MealA = 300;
        
        MedicalA = 300;
        
        TransportA = 300;
        
        LoanDeb = sal * 0.09;
        
        if(LoanDeb > LoanBal)
        
        {
        	
          LoanBal = 0;
          
          LoanDeb = LoanBal;
          
        }
        
        e[i].salary = sal;
        
        e[i].DA = DA;
        
        e[i].tax=TAX;
        
        e[i].PF = PF;
        
        e[i].HRA = HRA;
        
        e[i].MealAllowance = MealA;
        
        e[i].MedicalAllowance = MedicalA;
        
        e[i].TransportAllowance = TransportA;
        
        e[i].LoanBalance = LoanBal-LoanDeb;
        
        e[i].AnyLoan = loan;
        
        e[i].LoanDebit = LoanDeb;
        
        e[i].grosspay = (sal+MealA+MedicalA+TransportA+HRA+DA)-(PF+TAX+LoanDeb) ;
    

	}

	total=total+user;

}

void show(){

	if(total!=0){

	for(int i=0;i<total;i++){

		cout<<"\n\nDetails for employee --- "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Address: "<<e[i].address<<endl;

		cout<<"Contact: "<<e[i].contact<<endl;
		
		cout<<"Working Hours: "<<e[i].working_hours<<endl;
		
		cout<<"\n\nPlease find below pay deatils for the employee : \n\n"<<endl;
		
		cout<<"Employee Salary: "<<e[i].salary<<endl;
		
		cout<<"Dearness Allowance (DA): "<<e[i].DA<<endl;
		
		cout<<"TAX : "<<e[i].tax<<endl;
		
		cout<<"PF : "<<e[i].PF<<endl;
		
		cout<<"HRA: "<<e[i].HRA<<endl;
		
		cout<<"Meal Allowance: "<<e[i].MealAllowance<<endl;
		
		cout<<"Medical Allowance: "<<e[i].MedicalAllowance<<endl;
		
		cout<<"Transport Allowance: "<<e[i].TransportAllowance<<endl;
		
		cout<<"Loan Balance: "<<e[i].LoanBalance<<endl;
		
		cout<<"Any Loan: "<<e[i].AnyLoan<<endl;
		
		cout<<"Loan Debit: "<<e[i].LoanDebit<<endl;
		
		cout<<"Gross Pay: "<<e[i].grosspay<<endl;
		


	}

    }

    else{

    	cout<<"No data is entered"<<endl;

	}

}

void search(){

	if(total!=0){

	string id;

	cout<<"Enter id of employee which you want to search"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"\n\nDeatils for employee "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Address: "<<e[i].address<<endl;

		cout<<"Contact: "<<e[i].contact<<endl;

		cout<<"Working Hours: "<<e[i].working_hours<<endl;
		
		cout<<"\n\nPlease find below pay deatils for the employee : \n\n"<<endl;
		
		cout<<"Employee Salary: "<<e[i].salary<<endl;
		
		cout<<"Dearness Allowance (DA): "<<e[i].DA<<endl;
		
		cout<<"TAX : "<<e[i].tax<<endl;
		
		cout<<"PF : "<<e[i].PF<<endl;
		
		cout<<"HRA: "<<e[i].HRA<<endl;
		
		cout<<"Meal Allowance: "<<e[i].MealAllowance<<endl;
		
		cout<<"Medical Allowance: "<<e[i].MedicalAllowance<<endl;
		
		cout<<"Transport Allowance: "<<e[i].TransportAllowance<<endl;
		
		cout<<"Loan Balance: "<<e[i].LoanBalance<<endl;
		
		cout<<"Any Loan: "<<e[i].AnyLoan<<endl;
		
		cout<<"Loan Debit: "<<e[i].LoanDebit<<endl;
		
		cout<<"Gross Pay: "<<e[i].grosspay<<endl;
		
		

		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

void update(){
	
	int sal,PF,TAX,HRA,MealA,MedicalA,TransportA,LoanBal,LoanDeb,h,DA;
	
    char loan;

	if(total!=0){

	string id;

	cout<<"Enter id of employee which you want to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id){

		cout<<"Old Details for employee "<<i+1<<endl;

		cout<<"Name: "<<e[i].name<<endl;

		cout<<"ID: "<<e[i].id<<endl;

		cout<<"Address: "<<e[i].address<<endl;

		cout<<"Contact: "<<e[i].contact<<endl;

		cout<<"Working Hours: "<<e[i].working_hours<<endl;

		cout<<"\nEnter new data"<<endl;

		cout<<"Enter employee name: ";

		getline(cin,e[i].name);
		getline(cin,e[i].name);
		
		cout<<"Enter id: ";

		cin>>e[i].id;

		cout<<"Enter address: ";

		getline(cin,e[i].address);
		getline(cin,e[i].address);

		cout<<"Enter contact: ";

		cin>>e[i].contact;

		cout<<"Enter Working Hours: ";

		cin>>e[i].working_hours;
		
		sal = e[i].working_hours*300;
		
		do
		
        {
        
        cout<<"Any Loan (Y/N) ?: ";
        
        loan=getche();
        
        if(loan=='Y'|| loan == 'y' || loan =='n' || loan == 'N')
        
            break;
            
        }
		while(1);
		
        if(loan=='y'|| loan=='Y')
        
        {
        
        cout<<"Enter Loan Balance : ";
        
        cin>>LoanBal;
        
        }
        
        else
        
        {
        	
        LoanBal=0;
        
        }
		
		TAX =  0.04 * sal;
		
        DA = 1.20 * sal;
        
        PF = 0.12 * sal;
        
        HRA = sal * 0.27;
        
        MealA = 300;
        
        MedicalA = 300;
        
        TransportA = 300;
        
        LoanDeb = sal * 0.09;
        
        if(LoanDeb > LoanBal)
        
        {
        	
          LoanBal = 0;
          
          LoanDeb = LoanBal;
          
        }
        
        e[i].salary = sal;
        
        e[i].DA = DA;
        
        e[i].tax=TAX;
        
        e[i].PF = PF;
        
        e[i].HRA = HRA;
        
        e[i].MealAllowance = MealA;
        
        e[i].MedicalAllowance = MedicalA;
        
        e[i].TransportAllowance = TransportA;
        
        e[i].LoanBalance = LoanBal-LoanDeb;
        
        e[i].AnyLoan = loan;
        
        e[i].LoanDebit = LoanDeb;
        
        e[i].grosspay = (sal+MealA+MedicalA+TransportA+HRA+DA)-(PF+TAX+LoanDeb) ;


		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

void del(){

	if(total!=0){

	int press;

	cout<<"Press 1 to delete specific record"<<endl;

	cout<<"Press 2 to delete full record"<<endl;

	cin>>press;

	if(press==1){

		string id;

		cout<<"Enter id of employee which you want to delete"<<endl;

		cin>>id;

		for(int i=0;i<total;i++){

			if(e[i].id==id){

				e[i].name=e[i+1].name;

				e[i].id=e[i+1].id;

				e[i].address=e[i+1].address;

				e[i].contact=e[i+1].contact;

				e[i].working_hours=e[i+1].working_hours;
				
				e[i].salary=e[i+1].salary;
				
				e[i].DA=e[i+1].DA;
				
				e[i].tax=e[i+1].tax;
				
				e[i].PF=e[i+1].PF;
				
				e[i].HRA=e[i+1].HRA;
				
				e[i].MealAllowance=e[i+1].MealAllowance;
				
				e[i].MedicalAllowance=e[i+1].MedicalAllowance;
				
				e[i].TransportAllowance=e[i+1].TransportAllowance;
				
				e[i].LoanBalance=e[i+1].LoanBalance;
				
				e[i].AnyLoan=e[i+1].AnyLoan;
				
				e[i].LoanDebit=e[i+1].LoanDebit;
				
				e[i].grosspay=e[i+1].grosspay;

				total--;

				cout<<"Your required record is deleted"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"No such record found"<<endl;

		}

		}

	}

	else if(press==2){

		total=0;

		cout<<"All record is deleted"<<endl;

	}

	else{

		cout<<"Invalid Input"<<endl;

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

main(){

	cout<<"\n\n\t\tPayroll Management System"<<endl;

	  string username,password;

    cout<<"\n\n\n\t\t***Signup***"<<endl;

	cout<<"\t\tEnter new username: ";

	cin>>username;

	cout<<"\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\tYour new id is creating please wait";

	for(int i=0;i<6;i++)

	{

		cout<<".";

		Sleep(500);

	}

	cout<<"\n\t\tYour id created successfully";

	Sleep(2000);

	start:

	system("CLS");

	string usrn,pswd;

	cout<<"\n\n\t\tPayroll Management System"<<endl;

	cout<<"\n\n\n\t\t   LOGIN"<<endl;

	cout<<"\t\tEnter username: ";

	cin>>usrn;

	cout<<"\t\tEnter password: ";

	cin>>pswd;

	if(usrn==username&&pswd==password)

	{

	system("CLS");

	char ch;

	while(1){

	cout<<"\n\n\t\tPress -> i to insert the data"<<endl;

	cout<<"\t\tPress -> d to display the data"<<endl;

	cout<<"\t\tPress -> s to search the data"<<endl;

	cout<<"\t\tPress -> u to update the data"<<endl;

	cout<<"\t\tPress -> r to remove the data"<<endl;

	cout<<"\t\tPress -> l to logout"<<endl;

	cout<<"\t\tPress -> x to exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case 'i':

			empdata();

			break;

		case 'd':

			show();

			break;

		case 's':

			search();

			break;

		case 'u':

			update();

			break;

		case 'r':

			del();

			break;

		case 'l':

			goto start;

			break;

		case 'x':

			exit(0);

			break;

		default:

			cout<<"\a Invalid Input"<<endl;

			break;

	}

}

}

  else if(usrn!=username)

  {

  	cout<<"\t\t\a Invalid username please try again";

  	Sleep(3000);

  	goto start;

  }

  else if(pswd!=password)

  {

  	cout<<"\t\t\a Invalid password please try again";

  	Sleep(3000);

  	goto start;

  }

  else{

  	cout<<"\t\t\a Invalid username and password";

  	Sleep(3000);

  	goto start;

  }

}
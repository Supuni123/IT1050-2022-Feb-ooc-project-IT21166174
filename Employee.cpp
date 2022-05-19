//class Employee
#include <string>
#include<iostream>
using namespace std;

class Employee{
private:
string username[50]; 
string password[12];
string email[80];
string empID[7];

public:
Employee();
Employee(string get_username[], string get_Usermail, string get_pw[], string get_EID[]);
void set_username(string get_username);    
void set_password(string get_Usermail);    
void set_email(string get_pw);
void set_empID(string get_EID); 
virtual void display_details();
void registration();     
void login();     
void updateprofile();     
void deletedetails(); 
~Employee();
};

//methods implement

void Employee :: display_details(){
cout<<"User Name: "<<username<<endl;
cout<<"E-mail: "<<email<<endl;
cout<<"Password: "<<password<<endl;
cout<<"Employee ID: "<<empID<<endl;
cout<<"................."<<endl;

}


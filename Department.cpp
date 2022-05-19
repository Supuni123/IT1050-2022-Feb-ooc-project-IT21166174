//class Department
#include <cstring>
#include <iostream>
class Department{
	
private:
char departmentName[30];
char depID[10];
int TelephoneNo; 

Public:
Department
Department(char get_depName[], char get_DID[], int get_TelNo);
void set_departmentName(char get_depname);
void set_depID(char get_DID);
void set_TelephoneNo(int get_Telno);
virtual void display_details;
void update_department;
~Department();
};


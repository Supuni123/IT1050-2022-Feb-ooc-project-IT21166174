//IT21163104	M.S.D.Costa
//Teacher
#include<iostream>
#include<string>
using namespace std;

class teacher
{
private:
string name; 
int ID;

public:
teacher(string Uname, int TID);
void setTeacherDetails(string name, int ID);
void loginSystem(){
}
void checkPapers(){
}
void declareResults(){
}
void logoutFromSystem(){
}
~teacher(){
}
};


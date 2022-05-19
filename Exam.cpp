//IT21163104	M.S.D.Costa
//Exam
#include <iostream>  
Exam::Exam(string ename,int number,string eStructure,int dur){
  exam=ename;
  examNumber=number;
  structure=eStructure;
  duration=dur;
}
int Exam::numberOfStudents(){
  
}
string Exam::subjects(){
  
}
int Exam::dateOfExamination(){
  
}
int Exam::declareFinalResultOfStudents(){
  }
 

#include<iostream>
#include<string>
using namespace std;

class Exam{
  private:
    string exam;
    int examNumber;
    string structure;
    int duration;
  public:
    Exam(string ename,int number,string eStructure,int dur);
    int numberOfStudents();
    string subjects();
    int dateOfExamination();
    int declareFinalResultOfStudents();
  
}; 

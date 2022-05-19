//IT21165948	D.T.D.Dissanayake
//Subject

#include<cstring>
#include<iostream>

class Subject 
{
private:
	
	int SubjectID; 
    char SubjectName[20];
  

public:
    Subject();
    Subject(int pSubjectID, const char pSubjectName[]);

    void listSubject();
    
    ~Subject();
};


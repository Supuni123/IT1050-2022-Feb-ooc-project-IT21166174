//Admin
//IT21166242 Jayathissa K.A.D.S.S

#include<iostream>
#include<cstring>
class Admin 
{ 
    private:     
	    char adminName;     
		int adminID;     
		char password;     
		char email;     
		int phoneNo[10]; 
		    
	 
    public:     
	    Admin()     
		{              
		
		}  
            Admin(char pName, int pID, char pWord[], char pMail[], int pPhnNo);     
		    	
		void setAdminDetails(char pName[], int pID, char pWord[], char pMail[], int pPhnNo);     
                void displayDetails();     
		void addData();     
		void removeData();     
		void manageUserProfile();     
		void createProfiles(); 
	};  





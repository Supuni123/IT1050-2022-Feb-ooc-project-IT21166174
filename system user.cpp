//System User class
//IT21166242 Jayathissa K.A.D.S.S

#include <cstring>
#include <iostream>
class SystemUser{     

    private:         
	    char username[32];         
	    char password[32];         
	    char address[32];         
	    int phnNo;         
	    int age;                  
	    int userID;  
   
         
    
     public:
		
           void setUserDetails(char pName[], char pWord[], char pAdrs[],int pPhn, int pAge, int pPkgID, int pUserID);
	   void displayDetails();
	   void registeruser();   
	   void edituser();    
	   void login();
		        
	    
		
} 
		 
		 
//methods implement
    
    SystemUser::SystemUser(char pName[], char pWord[], char pAdrs[],int pPhn, int pAge, int pUserID); 
    void SystemUser :: registeruser(){} ;
    void SystemUser :: edituser(){} ;
    void SystemUser :: login(){} ;


         
    
     public:
		
           void setUserDetails(char pName[], char pWord[], char pAdrs[],int pPhn, int pAge, int pPkgID, int pUserID);
	   void displayDetails();
	   void registeruser();   
	   void edituser();    
	   void login();
		        
	    
		
} 
		 
		 
//methods implement
    
    User::User(char pName[], char pWord[], char pAdrs[],int pPhn, int pAge, int pUserID); 
    void User :: registeruser(){} 
    void User :: edituser(){} 
    void User :: login(){} 



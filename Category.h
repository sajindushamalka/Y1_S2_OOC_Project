/*Name - Jayasinghe K.A.K.N
IT Number - IT21032806*/

//include the Registered Customer heder
#include "RegisteredCustomer.h" 

class Category
{
   private:

   	int CID;
   	char CName[20];
    RegisteredCustomer *RegCust1; 
    
   
   public:
  
   Category(); 
   Category(int cid ,const char cname[],RegisteredCustomer *regcust1);
   void displayCat();
   void addNewCat();
   ~Category();
};
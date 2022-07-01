/*Name - Jinasena H.D.S.S
IT Number - IT21042560*/

//include the rate heder
#include "Rate.h"

class UnregisteredCustomer
{
   private:

   	int contact;
   	char UnName[20];
    char UnAdress[50];
    Rate *rtt;
   
   public:
  
   UnregisteredCustomer(); 
   UnregisteredCustomer(int cnt, const char name[],const char adress[], Rate RTT );
   void displayDetails();
   void registernow();
   ~ UnregisteredCustomer();  
};
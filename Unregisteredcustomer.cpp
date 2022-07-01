/*Name - Jinasena H.D.S.S
IT Number - IT21042560*/

#include <iosteram>
#include<cstring>
#include "UnregisteredCustomer.h"
using namespace std;

   //implement the defult constructors
    UnregisteredCustomer::UnregisteredCustomer()
   {
      contact = 0;
   	  strcpy(UnName,"");
      strcpy(UnAdress,"");

   }

    //implement the overloaded constructors
    UnregisteredCustomer::UnregisteredCustomer(int cnt, const char name[],const char adress[], Rate RTT )
   {
      contact = cnt;
      strcpy(UnName,name);
      strcpy(UnAdress, RTT);
   }

   void  UnregisteredCustomer::displayDetails()
   {


   }

   void  UnregisteredCustomer::registernow()
   {



   }

    //implement the distructors
    UnregisteredCustomer::~ UnregisteredCustomer()
   {
      cout<<"UnregisteredCustomer Destructor called !!!"<<endl;

   } 


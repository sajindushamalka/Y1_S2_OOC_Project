/*Name - Jayasinghe K.A.K.N
IT Number - IT21032806*/

#include<iostream>
#include<cstring>
#include "Category.h"

using namespace std;
  //implement the defult constructors
   Category::Category()
   {
      	CID = 0;
   	    strcpy(CName,"");

   } 
  //implement the overloaded constructors
   Category::Category(int cid ,const char cname[],RegisteredCustomer *regcust1);
   {
     CID = cid;
     strcpy(CName,cname);
     RegCust1 = regcust1;

   }


   void Category::displayCat()
   {


   }


   void Category::addNewCat()
   {


   }

  //implement the distructors
  Category::~Category()
  {

    cout<<"Category Destructor called !!!"<<endl;

    
  }
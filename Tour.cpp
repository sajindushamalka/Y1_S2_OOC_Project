/*Name - Nishshanka N.A.P.K.R
IT Number - IT21033032*/

#include<iostream>
#include<cstring>
#include "Tour.h"
using namespace std;

  //implement the defult constructors
  Tour::Tour()
  {

    tID = 0;
   	strcpy(tName,"");
    tPrice =0; 

  } 

  //implement the overloaded constructors
   Tour::Tour(int tid, const char tname[], double tprice, Payment *p1 ,Discount *d1, Category *ct1)
   {
     tID = tid;
     strcpy(tName,tname);
     tPrice = tprice;
     pay1 = p1;
     dis_1 = d1;
     cat1 = ct1;
   }


   void Tour::DisplayTourDetails()
   {


   }


   void Tour::BookedTour()
   {


   }

  //implement the distructors
   Tour::~Tour()
   {

     cout<<"Tour Destructor called !!!"<<endl;
     
   } 
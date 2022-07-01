/*Name - Jinasena H.D.S.S
IT Number - IT21042560*/

#include<iostream>
#include "Payment.h"
using namespace std;


    //implement the defult constructors
    Payment::Payment()
    {
        pID = 0;
        serviceCharge = 0;
        totalAmount = 0;
        netAmount = 0;

    }
    //implement the overloaded constructors
    Payment::Payment(int payID,double sc,double tot)
    {
        pID = payID;
        serviceCharge = sc;
        totalAmount = tot;
      

    }

    double Payment::calcNetAmount()
    {


    }

   void  Payment::displayNetAmount()
    {


    }

     void Payment::getDiscount(Discount *d1)
     {


     }

   void Payment:: getpaymentMethod(PaymentMethod pay1)
   {


   }
     
    //implement the distructors
    Payment::~Payment()
    {
      cout<<"Payment Destructor called !!!"<<endl;

    }

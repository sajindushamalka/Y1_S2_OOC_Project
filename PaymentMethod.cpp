/*Name - Nishshanka N.A.G.A.A
IT Number - IT21032974*/

#include<iostream>
#include<cstring>
#include "PaymentMethod.h"
using namespace std;


    //implement the defult constructors
    PaymentMethod::PaymentMethod()
    {
      strcpy(ptye,"");

    }

    //implement the overloaded constructors
    PaymentMethod::PaymentMethod(const char pType[])
    {
      strcpy(ptye,pType);

    }


    void PaymentMethod::diplayMethod()
    {



    }

    //implement the distructors
    PaymentMethod::~PaymentMethod()
    {
      cout<<"PaymentMethod Destructor called !!!"<<endl;
      
    }
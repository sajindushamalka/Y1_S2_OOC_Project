/*Name - Jayasinghe K.A.K.N
IT Number - IT21032806*/


#include<iostream>
#include "Discount.h"
using namespace std;

    //implement the defult constructors
    Discount::Discount()
    {
       disId = 0;
		   disc = 0;
       percentage = 0;

    }

    //implement the overloaded constructors
		Discount::Discount(int dId, int per)
    {
       disId = dId;
       percentage = per;
    }


    double Discount::calDiscount()
    {



    }


		void Discount::displayDiscount()
    {



    }

    //implement the distructors
		Discount::~Discount()
    {
      cout<<"Discount Destructor called !!!"<<endl;

    }
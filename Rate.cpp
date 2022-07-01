/*Name - Abeykoon R.M.S.P
IT Number - IT21021602*/

#include<iostream>
#include "Rate.h"
using namespace std;

//implement the defult constructors
Rate::Rate()
{
   rateID = 0;
   rating = 0;

}

//implement the overloaded constructors
Rate::Rate(int id,int rt ,RegisteredCustomer *rt1,UnregisteredCustomer *Unrte1);
{

  rateID = id;
  rating = rt;
  rate1 = rt1;
  unrate1 = Unrte1;
}


void Rate::displayRating()
{


}

//implement the distructors
Rate::~Rate()
{
  cout<<"Rate Destructor called !!!"<<endl;
  
}
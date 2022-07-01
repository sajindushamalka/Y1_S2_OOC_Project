/*Name - Nishshanka N.A.P.K.R
IT Number - IT21033032*/

#include<iostream>
#include "RegisteredCustomer.h"
using namespace std;

//implement the defult constructors
RegisteredCustomer::RegisteredCustomer()
{
  RegId = 0;
}

//implement the overloaded constructors
RegisteredCustomer::RegisteredCustomer(int regId ,Category *cte1 , Feedback *Fdbck , Rate rating1);;
{
 RegId = regId;
 cate1 = cte1;
 fb1 = Fdbck;
 rte12 = rating1;
}


void RegisteredCustomer::DisplaySelectCategory()
{


}

//implement the distructors
RegisteredCustomer::~RegisteredCustomer()
{
cout<<"RegisteredCustomer Destructor called !!!"<<endl;

}
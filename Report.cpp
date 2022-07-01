/*Name - Abeykoon R.M.S.P
IT Number - IT21021602*/

#include<iostream>
#include "Report.h"                             
using namespace std;

//implement the defult constructors
Report::Report()
{
  RepId = 0;
}

//implement the overloaded constructors
Report::Report(int rID, Payment *py)
{
  RepId = rID;
  payR = py;
}

void Report::displayNetamount()
{


}

void Report::displayBokkedTour()
{

  
}

//implement the distructors
Report::~Report()
{
cout<<"Report Destructor called !!!"<<endl;
}
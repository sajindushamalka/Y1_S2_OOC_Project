/*Name - Nishshanka N.A.G.A.A
IT Number - IT21032974*/

#include <iostream>
#include <cstring>
#include "Feedback.h"

using namespace std;
    //implement the defult constructors
    Feedback::Feedback()
    {
      FNo = 0;
      strcpy(E_mail,"");
      strcpy(FeedBack,"");
    }

    //implement the overloaded constructors
     Feedback::Feedback(int fno, const char email[] , const char feedback[])
    {

      FNo = fno;
      strcpy(E_mail,email);
      strcpy(FeedBack,feedback);
    }


    void  Feedback::DisplayFeedback()
    {



    }

    //implement the distructors
     Feedback::~Feedback()
    {
      cout<<"Feedback Destructor called !!!"<<endl;

    }
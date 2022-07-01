/*Name - Nishshanka N.A.P.K.R
IT Number - IT21033032*/

//include categor,feedback and rate heders
#include"Category.h"
#include "Feedback.h"
#include "Rate.h"

class RegisteredCustomer
{
   private:
        int RegId
        Category *cate1;
        Feedback *fb1;
        Rate *rte12;
   
   public:  
      RegisteredCustomer();
      RegisteredCustomer(int regId ,Category *cte1 , Feedback *Fdbck , Rate rating1);
      void DisplaySelectCategory();
      ~RegisteredCustomer();

};
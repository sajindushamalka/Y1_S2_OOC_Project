/*Name - Nishshanka N.A.P.K.R
IT Number - IT21033032*/


//include payment, discount and category heders
#include "Payment.h"
#include "Discount.h"
#include "Category.h"

class Tour
{
   private:
        int tID;
        char tName[20];
        double tPrice; 
        Payment *pay1;
        Discount *dis_1;
        Category *cat1;
      
   public:
      Tour(); 
      Tour(int tid, const char tname[], double tprice, Payment *p1 ,Discount *d1,Category *ct1);
      void DisplayTourDetails();
      void BookedTour();
      ~Tour();  
};
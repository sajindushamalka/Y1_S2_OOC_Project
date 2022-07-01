/*Name - Jinasena H.D.S.S
IT Number - IT21042560*/

//include the discount and payment method heders
#include "Discount.h"
#include "PaymentMethod.h"

class Payment 
{
  private :
    
    PaymentMethod *pm1;
    int pID;
    double serviceCharge;
    double totalAmount;
    double netAmount;
    Discount *dis;


  public :
    Payment();
    Payment(int payID,double sc,double tot);
    void getpaymentMethod(PaymentMethod pay1);
    double calcNetAmount();
    void displayNetAmount();
    void getDiscount(Discount *d1);
    ~Payment();
};

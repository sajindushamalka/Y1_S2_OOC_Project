/*Name - Abeykoon R.M.S.P
IT Number - IT21021602*/

//include payment heder
#include "Payment.h"

class Report
{
   private:
   	int RepId
   	Payment *payR; 
   
   public:  
    Report();
    Report(int rID,Payment *py); 
   	void displayNetamount();
    void displayBokkedTour();
    ~Report();
    

};
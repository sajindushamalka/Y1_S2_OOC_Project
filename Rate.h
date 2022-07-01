/*Name - Abeykoon R.M.S.P
IT Number - IT21021602*/

//include Registered Customer and unregistered Customer heders
#include "RegisteredCustomer.h"
#include "UnregisteredCustomer.h"

class Rate
{
private:
    int rateID;
    int rating;
    RegisteredCustomer *rate1;
    UnregisteredCustomer *unrate1;

public:
    Rate();
    Rate(int id,int rt ,RegisteredCustomer *rt1,UnregisteredCustomer *Unrte1);
    void displayRating();
    ~Rate();
};


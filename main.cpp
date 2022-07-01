
#include<iostream>
#include<cstring>

//called the heder files
#include "Payment.h"
#include "PaymentMethod.h"
#include "Discount.h"
#include "Report.h"
#include "Category.h"
#include "Tour.h"
#include "RegisteredCustomer.h"
#include "Feedback.h"
#include "Rate.h"
#include "UnregisteredCustomer.h"

using namespace std;

int main ()
{
//create the pointer
PaymentMethod *pm1;
Discount *dis1;
Payment *pt1;
Report *rep1;
Feedback *fb123;
Rate *r1;
Category *Cat12;
RegisteredCustomer *regc1;
Tour *tour1;
UnregisteredCustomer *unregc1;

//create object for payment method
pm1 = new PaymentMethod ("Dibet");
pm1->diplayMethod();

//create object for discount
dis1 = new Discount(1111,5);
dis1->calDiscount();
dis1->displayDiscount();

//create object for payment 
pt1 = new Payment(1234,2500,60000);
pt1->calcNetAmount();
pt1->displayNetAmount();
pt1->getpaymentMethod(*pm1);
pt1->getDiscount(dis1);

//create object for report
rep1 = new Report(121212,pt1);
rep1->displayNetamount();
rep1->displayBokkedTour();

//create object for feedback
fb123 = new Feedback(333,"Pasindunishshanka82@gmail.com","Good service");
fb123->DisplayFeedback();

//create object for category
Cat12 = new Category(911,"Special Tour",regc1);
Cat12->displayCat();
Cat12->addNewCat();

//create object for rate
r1 = new Rate(011,3 ,regc1);
r1->void displayRating();

//create object registered Customer
regc1 = new RegisteredCustomer(12345,Cat12,fb123,r1);
regc1->DisplaySelectCategory();

//create object tour
tour1 = new Tour(25665,"Water Crafting",50000,pt1,dis1,Cat12);
tour1->DisplayTourDetails();
tour1->BookedTour();

//create object unregistered Customer
unregc1 = new UnregisteredCustomer(0715569321,"Amal","38/1,Colombo1",r1);
unregc1->displayDetails();
unregc1->registernow();

//delete the object
delete pm1;
delete dis1;
delete pt1;
delete rep1;
delete Cat12;
delete tour1;
delete fb123;
delete regc1;
delete r1;
delete unregc1;

return 0;

}
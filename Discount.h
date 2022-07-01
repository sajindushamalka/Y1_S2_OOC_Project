/*Name - Jayasinghe K.A.K.N
IT Number - IT21032806*/


class Discount
{
private :

		int disId;
		double disc;
    int percentage; 


public :

    Discount();
		Discount(int dId,int per);
    double calDiscount();
		void displayDiscount();
		~Discount();
	
};
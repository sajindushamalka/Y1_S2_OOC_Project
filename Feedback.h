/*Name - Nishshanka N.A.G.A.A
IT Number - IT21032974*/

class Feedback {
  
  private:
    int FNo;
    char E_mail[30];
    char FeedBack[100];

  public:
    Feedback();
    Feedback(int fno, const char email[] , const char feedback[]);
    void DisplayFeedback();
    ~Feedback();
};
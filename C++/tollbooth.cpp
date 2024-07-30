#include <iostream>
using namespace std;
class tollbooth 
{
    private:
        unsigned int tc;
        double ta;

    public:
        tollbooth() 
        {
            tc=0;
            ta=0.0d;
        }  
        void payingCar() 
        {
            tc++;
            ta=ta+50.0;
        }
        void nonPayingCar()
        {
            tc++;
        }
        void display() 
        {
            cout<<"Total Cars: "<< tc <<endl;
            cout<<"Total Amount: Rs"<< ta<<endl;
        }
};
int main() 
{
    tollbooth tb;
    int ch;
    
    do 
    {
        cout << "\nTollbooth Menu:" <<endl;
        cout << "1. Paying Car" <<endl;
        cout << "2. Non-Paying Car" <<endl;
        cout << "3. Display Totals" <<endl;
        cout << "4. Exit" <<endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) 
        {
            case 1:
                tb.payingCar();
                cout << "Paying car processed." <<endl;
                break;
            case 2:
                tb.nonPayingCar();
                cout << "Non-paying car processed." <<endl;
                break;
            case 3:
                tb.display();
                break;
            case 4:
                cout << "Exiting the program." <<endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." <<endl;
        }
    } while (ch!=4);

    return 0;
}
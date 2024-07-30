// virtualfunction 
#include<iostream>
using namespace std;
class one
{
    public :
    virtual void function()
            {
                cout<<"go"<<endl;
            }
};
class two : public one
{
    public :
    void function()
    {
        cout<<"want"<<endl;
    }

};
int main()
{
    one* msg1;
    two msg2;
    msg1=&msg2;
    msg1->function();
}
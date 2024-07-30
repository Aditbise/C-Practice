#include<iostream>
using namespace std;
class base1
{
    public:
    void display()
    {
        cout<<"1.Hello! ,This one is a BASE CLASS function ,and you are a good soul :)"<<endl;
    }
};
class derived1: public base1
{
    public:
    void display()
    {
        cout<<"1.Hi!,This one is a DERIVED CLASS function you are a good soul\n"<<endl;
    }
};
class base2
{
    public:
    virtual void display()
    {
        cout<<"2.Hello! ,This one is a BASE CLASS function ,and you are a good soul :)"<<endl;
    }
};
class derived2: public base2
{
    public:
    void display()
    {
        cout<<"2.Hi!,This one is a DERIVED CLASS function you are a good soul\n"<<endl;
    }
};
int main()
{
    // this one is example of overriding or run time polymorphism function
    base1 b1, *p1;
    derived1 d1;
    
    d1.display();
    
    d1.base1::display();

    p1=&d1;
    p1->display();

    // this one is exmaple of virtual function
    base2 *p2;
    derived2 d2;
    p2=&d2;
    p2->display();

    return 0;
}
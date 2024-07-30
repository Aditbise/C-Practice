#include<iostream>
using namespace std;
class constructor
{
    public:
    int a,b;
    constructor()
    {
        a=0;
        b=0;
    }
    constructor(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    constructor(const constructor& c)
    {
        a=c.a;
        b=c.b;
    }
    void sum()
    {
        int c;
        c=a+b;
        cout<<"Sum :"<<c<<endl;
    }
};
int main()
{
    constructor o1(2,4);
    o1.sum();
    constructor o2=o1;
    o2.sum();
}
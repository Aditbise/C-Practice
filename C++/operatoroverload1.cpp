#include<iostream>
using namespace std;
class pluss
{
    public:
    int add;
    pluss(int a=0)
    {
        add=a;
    }
    void display()
    {
        cout<<"Sum : "<<add;
    }
    friend pluss operator +(pluss&,pluss&);
};  
pluss operator +(pluss& pl1,pluss&pl2)
{
    pluss p;
    p=pl1.add+pl2.add;
    return p;
}
int main()
{
    int n1,n2;
    cout<<"Enter 2 number\n";
    cin>>n1;
    cin>>n2;
    pluss p1(n1);
    pluss p2(n2);
    pluss p3;
    p3=p1+p2;
    p3.display();
    return 0;
}

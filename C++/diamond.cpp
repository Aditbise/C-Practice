#include<iostream>
using namespace std
class diamond
{
    int m,n;
    public:
        diamond(int m,int n);
        void display();
};
diamond::diamond(int x,int y)
{
    m=x;
    n=y;
}
// copy constructer it is used to declare and initialised an object from another object eg diamond i2=diamond i1; the process of initializing through a copy constructer is known as copy initialization
// now this statement i2=i1 will not invoke the copy constructer however i1i2 are object then this statement is legal and value is assigned from i1 to i2 
// a copy construceter is 
//Wap to show use of copy constructer
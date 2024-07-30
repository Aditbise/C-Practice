#include<iostream>
int main()
{
    int a,b,c,g;
    std::cout<<"Enter 3 number ";
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    if(a>b)
    {
        if(a>c)
         g=a;
        else
         g=c;
    }
        if(b>a)
    {
        if(b>c)
         g=b;
        else
         g=c;
    }
        if(c>a)
    {
        if(c>b)
         g=c;
        else
         g=b;
    }
    std::cout<<"the greatest number is "<<g<<".";                                             
    return 0;
}
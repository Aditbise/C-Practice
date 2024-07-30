//Program to find the raise to the power of a number 
#include<iostream>
int r=1;
int power(double m,int n)
{
    for(int i=1;i<=n;i++)
    {
        r=r*m;
    }
    return r;
}
int main()
{
    int n=2;
    double m;
    std::cout<<"Enter the value and power respectively\n";
    std::cin>>m;
    std::cout<<"\n";
    std::cin>>n;
    std::cout<<"\n";
    std::cout<<"The result is :"<<power(m,n);
}
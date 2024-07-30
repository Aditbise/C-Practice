//Program to find the factorial of a number 
#include<iostream>
int main()
{
    int i,j,n1,n2;
    double f=1;
    std::cout<<"Enter the value\n";
    std::cin>>n1;
    n2=n1;
    while(n2>0)
    {
        f=f*n2;
        n2--;
    }
    std::cout<<"Factorial of given number is "<<f;
    return 0;
}
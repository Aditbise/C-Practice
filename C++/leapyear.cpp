//Program to check leap year
#include<iostream>
int main()
{
    int i,j,y;
    std::cout<<"Enter the year\n";
    std::cin>>y;
    if(((y%4==0) && (y%100!=0))|| (y%400==0)  )
    {
        std::cout<<"\nYear is a leap year\n";
    }
    else
    {
        std::cout<<"\nYear is not a leap year\n";
    }
    return 0;
}
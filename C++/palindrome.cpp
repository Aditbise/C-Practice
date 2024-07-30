#include<iostream>
int main()
{
    int n1,n2,r=0,s=0;
    std::cout<<"Enter the number \n";
    std::cin>>n1;
    n2=n1;
    while(n2>0)
    {
        r=n2%10;
        s=(s*10)+r;
        n2=n2/10;
    }
    if(s==n1)
     std::cout<<"Number is Palindrome";
    else
     std::cout<<"Number is not Palindrome";   
}
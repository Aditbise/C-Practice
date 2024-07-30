#include<iostream>
int main()
{
    int n,s=0,i;
    std::cout<<"Enter the n th term\n";
    std::cin>>n;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    std::cout<<"\nSum is :\n"<<s;
    return 0;
}
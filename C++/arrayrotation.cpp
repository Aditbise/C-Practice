//Program to rotate a array
#include<iostream>
int main()
{
    int i,s,t=0;
    int a=1;
    std::cout<<"Enter size of array :\n";
    std::cin>>s;
    int ar[s];
    std::cout<<"Enter the value in array :\n";
    for(int i=0;i<s;i++)
    {
        std::cin>>ar[i];
    }
    t=ar[s-1];
    for(int i=s-1;i>=0;i--)
    {
        if(a==s)
        {
            ar[0]=t;
        }
        else
        {
            ar[i]=ar[i-1];
            a++;
        }
    }
    std::cout<<"\nThe rotated array is : \n";
    for(int i=0;i<s;i++)
    {
        std::cout<<"  "<<ar[i];
    }
}
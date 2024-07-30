//Program to print the product of 1 matrix in tabular form
#include<iostream>
int main()
{
    int i,j,p;
    int m1[3][3],m2[3][3];
    std::cout<<"Enter the 9 value for matrix\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            std::cin>>m1[i][j];
        }
    }
    std::cout<<"Enter the 9 value for another matrix\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            std::cin>>m2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p=(m1[i][j]*m2[3][3]);
            if(p<10)
            std::cout<<p<<"  ";
            else
            std::cout<<p<<" ";
        }
        std::cout<<"\n";
    }
}
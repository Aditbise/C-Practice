//Program to find the average of marks in six subjects
#include<iostream>
int main()
{
    float p,c,m,h,e,cs;
    double avg;
    std::cout<<"Enter the marks in 6 subject physics,chemistry,maths,english,hindi,computer respectively\n";
    std::cin>>p;
    std::cin>>c;
    std::cin>>m;
    std::cin>>e;
    std::cin>>h;
    std::cin>>cs;
    avg=(p+c+m+e+h+cs)/6;
    std::cout<<"Average is :"<<avg;
    return 0;
}

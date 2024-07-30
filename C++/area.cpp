//Program to fing the area of triangle,rectangle,square and circle using function overloading 
#include<iostream>
double A;
int area(float b,float h)
{
    A=(1/2)*b*h;
    return A;
}
int area(double l,double b)
{
    A=l*b;
    return A;
}
int area(double a)
{
    A=a*a;
    return A;
}
int area(float r)
{
    A=3.14*r*r;
    return A;
}
int main()
{
    int ch;
    float b1,h,r;
    double s,l,b2;
    std::cout<<"Enter the shape of area you want \n1.Triangle \n2.Rectangle \n3.Square \n4.Circle\n";
    std::cin>>ch;
    switch(ch)
    {
        case 1: 
            std::cout<<"Enter the bredth and height respectively\n";
            std::cin>>b1;
            std::cin>>h;
            std::cout<<"Area :"<<area(b1,h);
            break;
        case 2: 
            std::cout<<"Enter the length and bredth respectively\n";
            std::cin>>l;
            std::cin>>b2;
            std::cout<<"Area :"<<area(l,b2);
            break;
        case 3: 
            std::cout<<"Enter side respectively\n";
            std::cin>>s;
            std::cout<<"Area :"<<area(s);
            break;
        case 4: 
            std::cout<<"Enter radius\n";
            std::cin>>r;
            std::cout<<"Area :"<<area(r);
            break;
        
        default :
            std::cout<<"Wrong choice";
    }
}
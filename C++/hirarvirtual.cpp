#include <iostream>
#include <cmath>
using namespace std;
class Shape 
{
public:
    virtual void calculateArea() 
    {
        cout<<"Area calculation not defined for the base class."<<endl;
    }
};

class Triangle : public Shape 
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h)    
    {
        base=b;
        height=h;
    }

    void calculateArea() override 
    {
        double area = 0.5*base*height;
        cout<<"Area of the triangle: "<<area<<endl;
    }
};
class Circle : public Shape 
{
protected:
    double radius;

public:
    Circle(double r)   
    {
        radius=r;
    }

    void calculateArea() override 
    {
        double area=3.14*pow(radius, 2);
        cout<<"Area of the circle: "<<area<<endl;
    }
};

int main() 
{
    double base, height, radius;

    cout << "Enter the base and height of the triangle: ";
    cin>>base>> height;
    Triangle triangle(base, height);

    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    Circle circle(radius);

    Shape* shapes[] = { &triangle, &circle };

    for (Shape* shape : shapes) {
        shape->calculateArea();
    }

    return 0;
}
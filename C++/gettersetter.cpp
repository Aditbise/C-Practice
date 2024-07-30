#include <iostream>
using namespace std;
class Point 
{
private:
    float x; 
    float y; 

public:
    Point()
    {
        float x=0.0f;
        float y=0.0f;
    } 
    Point(float xCoordinate, float yCoordinate) 
    {
        x=xCoordinate;
        y=yCoordinate;
    }
    float getX() const 
    {
        return x;
    }

    float getY() const 
    {
        return y;
    }
    void setX(float newX) 
    {
        x = newX;
    }

    void setY(float newY) 
    {
        y = newY;
    }
};

int main() 
{
    Point myPoint(3.5, 7.2);
    cout << "Initial Coordinates: X = " << myPoint.getX() << ", Y = " << myPoint.getY() << std::endl;
    myPoint.setX(1.2);
    myPoint.setY(5.8);
    cout << "Updated Coordinates: X = " << myPoint.getX() << ", Y = " << myPoint.getY() << std::endl;
    return 0;
}
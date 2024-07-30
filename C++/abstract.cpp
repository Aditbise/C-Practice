#include <iostream>
#include <cmath>
class Shape 
{
public:
    virtual float calculateSquare(float num) const = 0;
    virtual float calculateCube(float num) const = 0;
    virtual ~Shape() {} 
};
class Square : public Shape 
{
public:
    float calculateSquare(float num) const override 
    {
        return num * num;
    }

    float calculateCube(float num) const override 
    {
        return 0.0f;
    }
};
class Cube : public Shape 
{
public:
    float calculateSquare(float num) const override 
    {
        return 0.0f;
    }
    float calculateCube(float num) const override 
    {
        return std::pow(num, 3);
    }
};

int main() 
{
    Square square;
    Cube cube;

    float num = 2.5;

    std::cout << "Square of " << num << " is: " << square.calculateSquare(num) << std::endl;
    std::cout << "Cube of " << num << " is: " << cube.calculateCube(num) << std::endl;

    return 0;
}
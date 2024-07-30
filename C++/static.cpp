#include <iostream>
using namespace std;
class MyClass 
{
private:
    static int staticData; 

public:
    static void printStaticData() 
    {
        cout<<"Static Data: "<<staticData<<endl;
    }

    
    void setStaticData(int value) 
    {
        staticData = value;
    }
};


int MyClass::staticData = 0;

int main() 
{
    MyClass obj1, obj2;

    obj1.setStaticData(42);
    obj1.printStaticData();

    obj2.printStaticData();
    MyClass::printStaticData(); 

    return 0;
}
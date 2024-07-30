#include<iostream>
#include<string>
using namespace std;
class parent
{
    public:
    void parentinfo()
    {
        int age=30;
        string name="Mother";
        cout<<"Age of parent: "<<age<<endl;
        cout<<"Name of your name: "<<name<<endl<<endl;
    }
    
};
class child:private parent
{
    public:
    void childinfo()
    {
        parentinfo();
        int age=2;
        string name="Kid";
        cout<<"Age of child : "<<age<<endl;
        cout<<"Name of child : "<<name<<endl;
    }
    
};
int main()
{
    child c;
    c.childinfo();

}
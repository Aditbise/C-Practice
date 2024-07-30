#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base con"<<endl;
    }
    virtual ~base()
    {
        cout<<"base des"<<endl;
    }
};
class derived :public base
{
    public:
    derived()
    {
        cout<<"derived con"<<endl;
    }
    ~derived()
    {
        cout<<"derived des"<<endl;
    }
};
int main()
{
    derived *d=new derived();
    base *b=d;
    delete b;
    getchar();
    return 0;
}
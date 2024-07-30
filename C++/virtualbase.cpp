#include<iostream>
using namespace std;
class base
{
    public:
            int a,b;
            void input()
            {
                cout<<"Enter a,b resectively:   "<<endl;
                cin>>a>>b;
            }

};
class derived1 :public virtual base
{
    public:  
            int sum()
            {
                int sum=a+b;
                return sum;
            }
};
class derived2 :public virtual base
{
    public:
            int diff=(a-b);
};

class dn: public derived1 , public derived2
{
    public:
            int multi,div;
            
            void output()
            {
                multi=a*b;
                div=a/b;
                cout<<"Sum:     "<<sum()<<endl;
                cout<<"diff:    "<<diff<<endl;
                cout<<"multi:   "<<multi<<endl;
                cout<<"div:     "<<div<<endl;
            }
};
int main()
{
    dn o;
    o.input();
    o.sum();
    o.output();

}
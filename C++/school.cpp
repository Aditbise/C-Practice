#include <iostream>
#include <cmath>
using namespace std;
class staff
{
    public:
        int code;
        string name;
        void detail()
        {
            cout<<"Enter Code:"<<endl;
            cin>>code;
            cout<<"Enter Name: "<<endl;
            cin>>name;
        }

};
class teacher:public staff
{
    public:
    string subject,publication;
        void info()
        {
            cout<<"Enter the Subject and Publication: ";
            cin>>subject>>publication;
        }
        void display()
        {
            detail();
            info();
            cout<<"Code:"<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Publication: "<<publication<<endl;
        }
};
class officer:public staff
{
    public:
    char grade;
        void info()
        {
            cout<<"Enter Grade: ";
            cin>>grade;
        }
    void display()
        {
            detail();
            info();
            cout<<"Code:"<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Grade: "<<grade<<endl;
        }
};
class typist:public staff 
{
    public:
        int speed;
        void info()
        {
            cout<<"Enter Speed: ";
            cin>>speed;
        }
};
class regular:public typist
{
        
        public:
        int salary;
        void salary1()
        {
            cout<<"Enter Salary: ";
            cin>>salary;
        }
        void display()
        {
            detail();
            info();
            salary1();
            cout<<"Code:"<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
class casual:public typist 
{
   
    public:
     int wage;
    void wage1()
        {
            cout<<"Enter Daily Wage:";
            cin>>wage;
        }
    void display()
        {
            detail();
            info();
            wage1();
            cout<<"Code:"<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Daily Wage: "<<wage<<endl;
        }

};
int main()
{
    teacher t;
    t.display();
    officer o;
    o.display();
    regular r;
    r.display();
    casual c;
    c.display();
}
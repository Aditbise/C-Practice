#include<iostream>
#include<string>
using namespace std;
class hirarcalA
{
    private:
            string h;
            string fc;
            string dob;
            string n;
            string s;
    public:
            void status()
            {
                cout<<"Enter your name: "<<endl;
                cin>>n;
                cout<<"Enter the Date Of Birth: "<<endl;
                cin>>dob;
                cout<<"Enter your favoutive color: "<<endl;
                cin>>fc;
                cout<<"Enter hobby: "<<endl;
                cin>>h;
            }
            void statement()
            {
                cout<<"Enter your statement";
                cin>>s;
            }
            void display()
            {
                cout<<"Name: "<<n<<endl;
                cout<<"Date Of Birth: "<<dob<<endl;
                cout<<"Favoutive color: "<<fc<<endl;
                cout<<"Hobby: "<<h<<endl;
            }
};
class hirarcalB : public hirarcalA
{
    private:
            string cc;
    public:
            void crime()
            {
                status();
                cout<<"Enter crime cummited "<<endl;
                cin>>cc;
                display();
                cout<<"Crime cummited: "<<cc<<endl;
            }
};
class hirarcalC :public hirarcalA
{
    private:
            string c;
    public:
            void complaint()
            {
                status();
                statement();
                cout<<"Enter complaint"<<endl;
                cin>>c;
                display();
                cout<<"Complaint: "<<c<<endl;

            }
};
int main()
{
    int ch;
    hirarcalB o1;
    hirarcalC o2;
    cout<<"Enter your choice: "<<endl<<"1.Criminal"<<endl<<"2.Victim"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                
                o1.crime();
                break;
        case 2:
                
                o2.complaint();
                break;
    }   
    return 0;
}
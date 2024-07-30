#include<iostream>
#include<string>
using namespace std;
class printer
{
    string name;
    int ap;
    public:
            printer(string name,int ap)
            {
                this->name=name;
                this->ap=ap;
            }
            void print(string txt)
            {
                int rp=txt.length()/10;
                if(rp>ap)
                    throw "No paper";
                
                cout<<"Printng..."<<txt<<endl;
                ap=ap-rp;

            }
};
int main()
{
    printer myprinter("Aditya Bisht",10);
    try
    {
        myprinter.print("Yo! , Hello how  do you dop and how have you been");
        myprinter.print("Yo! , Hello how  do you dop and how have you been");
        myprinter.print("Yo! , Hello how  do you dop and how have you been");
    }
    catch(const char *txt)
    {
        cout << "Exception"<< txt << endl;
    }
    
    
    return 0;

}
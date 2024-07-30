#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter Numer: ";
    cin>>x;
    try
    {
        if(x==-1)
        throw("Negative number not allowed");
        else if(x==2)
        throw(3);
        else if(x==3)
        throw(2.5);
    }
    catch(int j)
    {
        cout<<"Double Exception Block: "<<j<<endl;
    }
    catch(double i)
    {
        cout<<"Integer Exception Block: "<<i<<endl;
    }
    catch(const char *temp)
    {
        cout<<"Character String Exception Block\n"<<temp<<endl;
    }
    cout<<"End of the Program.....";
    return 0;
}
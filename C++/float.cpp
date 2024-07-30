#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x=12345.1235478f;
    double y=4.15292178921;
    long double yy=999.421345261L;
    cout<<"float : "<<x<<"\n";
    cout<<"double : "<<y<<"\n";
    cout<<"long double : "<<yy<<"\n";

    cout<<"\n After uncluding setprecision forn iomanip \n\n "<<setprecision(10);

    cout<<"float : "<<x<<"\n";
    cout<<"double : "<<y<<"\n";
    cout<<"long double : "<<yy<<"\n";
    return 0;


}
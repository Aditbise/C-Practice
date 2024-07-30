//Program to find electric bill
//100 unit - 60 paisa
//next 200 unit -80 paisa
//beyond 300 unit - 90 paisa
//all are charged a minimum of rs 50 if total amount is more than rs 300 than ana additional sircharge of 15% is added 
//WAP to read the name of users and the number of  units consume and print outt the charges with names
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    double u;
    double b=0.0;
    cout<<"Enter the name of user\n";
    getline(cin,n);
    cout<<"Enter the unit of electricity used\n";
    cin>>u;
    if(u<=100)
    {
        b=u*0.60;
    }      
    else if(u>100 && u<=300)
    {
        b=b+(0.60*100);
        b=b+(u-100)*0.80;
    }
    else if(u>300)
    {
        b=b+(0.60*100);
        b=b+(0.80*200);
        b=(u-300)+0.90;
    }
    if(b>300)
    {
        b=b+((15*b)/100);
    }
    cout<<"Name :"<<n<<"\nBill is : "<<b;
}
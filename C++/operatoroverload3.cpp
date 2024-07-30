#include<iostream>
#include<string>
#include<list>
using namespace std;
struct ytchannal
{
    string name;
    int subcount;

    ytchannal(string n ,int sc)
    { 
        name=n;
        subcount=sc;
    }
};
ostream& operator<<(ostream& COUT ,ytchannal& ytc)
{
    COUT<< "Name: " << ytc.name <<endl;
    COUT<< "Subscribers: " << ytc.subcount <<endl;
    return COUT;
}
struct MyCollection
{
    list<ytchannal>mychannal;
    void operator+=(ytchannal& myc)
    {
        this->mychannal.push_back(myc);
    }
};
ostream& operator <<(ostream& COUT,MyCollection& mc)
{
    for(ytchannal y:mc.mychannal)
    {
        COUT << y <<endl;
        return COUT;
    } 
}
int main()
{
    ytchannal yt1 =ytchannal("Aditbise",45000000);
    ytchannal yt2 =ytchannal("A",55000);
   // cout << yt1 << yt2;
    
    MyCollection myCollection;
    myCollection +=yt1;
    myCollection +=yt2;
    cout << myCollection;
}
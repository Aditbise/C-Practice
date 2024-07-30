#include<iostream>
#include<list>
#include<string>
using namespace std;
class yt
{
    public:
    string name;
    string ownername;
    int subcount;
    list<string> publishviodeotitle;

    yt(string n,string on)
    {
        name=n;
        ownername=on;
        subcount=0;
    }
    void getinfo()
    {
        cout<<"Channal Name :"<<name<<endl;
        cout<<"Creater Name :"<<ownername<<endl;
        cout<<"Subscribers : "<<subcount<<endl;
        cout<<"Video playlist : "<<endl;
        for(string vt:publishviodeotitle)
        {
            cout<<"\t\t"<<vt<<endl;
        }
        cout<<"\n";
    }
};
int main()
{

    yt ytchannal1("Adit-bise","Aditya Bisht");
    yt ytchannal2("yona","yo");

    ytchannal1.getinfo();
    ytchannal2.getinfo();
    return 0;

}
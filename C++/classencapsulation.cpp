#include<iostream>
#include<list>
#include<string>
using namespace std;
class yt
{
    private:
    string name;
    string ownername;
    int subcount;
    list<string> publishviodeotitle;

    public:
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
    void sub()
    {
        subcount++;
    }
    void unsub()
    {
        if(subcount==0)
        {
            subcount--;
        }
    }
    void publicvideo(string s)
    {
        publishviodeotitle.push_back(s);
    }
};
int main()
{

    yt ytchannal1("Adit-bise","Aditya Bisht");
    yt ytchannal2("yona","yo");

    ytchannal1.publicvideo("Valorant");

    ytchannal1.sub();

    ytchannal1.getinfo();
    ytchannal2.getinfo();
    return 0;

}
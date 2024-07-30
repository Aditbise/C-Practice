#include<iostream>
#include<list>
#include<string>
using namespace std;
class yt
{
    public:
    string name;
    string ownerneam;
    int subcount;
    list<string> publishviodeotitle;
};
int main()
{
    yt ytchannal;
    ytchannal.name=" Adit-Bise";
    ytchannal.ownerneam=" Aditya Bisht";
    ytchannal.subcount=12;
    ytchannal.publishviodeotitle={"Valorant","Minecraft","The forest of quartet"};

    cout<<"Channal Name :"<<ytchannal.name<<endl;
    cout<<"Creater Name :"<<ytchannal.ownerneam<<endl;
    cout<<"Subscribers : "<<ytchannal.subcount<<endl;
    cout<<"Video playlist : "<<endl;
    for(string vt:ytchannal.publishviodeotitle)
    {
        cout<<"\t\t"<<vt<<endl;
    }


}
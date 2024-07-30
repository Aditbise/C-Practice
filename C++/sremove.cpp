#include<iostream>
#include<string>
using namespace std;
class rmove
{
    public :
    string s1,s2;
    rmove()
    {
        s1="";
        s2="";
    }
    rmove(string w1,string w2)
    {
        s1=w1;
        s2=w2;
    }
    void removchar()
    {
        for(int i=0;i<s2.length();i++)
        {
            for(int j=0;j<s1.length();j++)
            {
                if(s2[i]==s1[j])
                {
                    s1.erase(j,1);
                }
            }
        }
    }
    void removedchar()
    {
        cout<<s1;
    }
};
int main()
{
    string s1,s2;
    cout<<"Enter 2 different strings:"<<endl;
    cin>>s1;
    cin>>s2;

    rmove so(s1,s2);
    so.removchar();
    so.removedchar();
}
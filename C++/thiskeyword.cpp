#include<iostream>
#include<string>
using namespace std;
class Word
{
    private :
        string name="Happy";
    public :
        void names(string name)
        {
            cout<<"Home name: "<<this->name<<endl;
            cout<<"Real name: "<<name<<endl;
        }

};
int main()
{
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;
    Word w;
    w.names(name);
    return 0;
}
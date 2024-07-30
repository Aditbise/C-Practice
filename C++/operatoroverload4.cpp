#include<iostream>
#include<string>
using namespace std;
class exandin
{
    public:
    string word;
        exandin()
        {
            word="";
        }
        friend exandin& operator >>(istream& CIN ,exandin& wordinput) ;
        friend exandin& operator <<(ostream& COUT ,exandin& wordoutput) ;
        friend exandin& operator <<(exandin& wordoutput1 ,exandin& wordoutput2) ;
};
    istream& operator >>(istream& CIN ,exandin& wordinput)
    {
        CIN>>wordinput.word>>endl;
        return CIN;
    }
    ostream& operator <<(ostream& COUT ,exandin& wordoutput)
    {
        COUT<<wordoutput.word;
        return COUT;
    }
    exandin& operator <<(exandin& wordoutput1 ,exandin& wordoutput2)
    {
        cout<<wordoutput2.word<<endl;
    }
int main()
{
    exandin word1;
    exandin word2;
    cout<<"Enter words you want to concat"<<endl;
    cin>>word1;
    cin>>word2;
    cout<<word1<<word2;
}
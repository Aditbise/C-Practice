#include<iostream>
using namespace std;
class overload
{
    private:
        string s;
    public:
        overload()
        {
            s="";
        }
        friend overload operator <<(ostream& ,overload&);
        friend overload operator >>(istream& ,overload&);
};
overload operator <<(ostream& COUT,overload& o1)
{
    COUT<<o1.s;
}
overload operator >>(istream& CIN,overload& o1)
{
    CIN>>o1.s;
}
int main()
{
    overload o1;
    overload o2;
    cout<<"Enter 2 string"<<endl;
    cin>>o1;
    cin>>o2;
    cout<<endl;
    cout<<o1;
    cout<<o2;
    return 0;

}
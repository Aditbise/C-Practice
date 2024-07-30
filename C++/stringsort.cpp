#include<iostream>
#include<string>
using namespace std;
class sort
{
    public :
    int as;
    string *ar;
        sort(int s)
        {
            as=s;
            ar=new string[s];        
        }
        ~sort()
        {
            delete []ar;
        }
        void input()
        {
            cout<<"Enter "<<as<<" strings :"<<endl;
            for(int i=0;i<as;i++)
            {
                cin>>ar[i];
            }
        }
        void sorting()
        {
            string s;
            for(int i=0;i<as;i++)
            {
                for(int j=i+1;j<as;j++)
                {
                    if(ar[i].length()>ar[j].length())
                    {
                        s=ar[i];
                        ar[i]=ar[j];
                        ar[j]=s;
                    }
                }
            }
        }
        void output()
        {
            sorting();
            for(int i=0;i<as;i++)
            {
                cout<<ar[i]<<"  ";
            }
        }
};
int main()
{
    int l;
    cout<<"Enter the size of array :"<<endl;
    cin>>l;
    sort sting(l);
    sting.input();
    sting.output();
    return 0;
}
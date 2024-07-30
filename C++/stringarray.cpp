#include <iostream>
#include <string>
using namespace std;
void sort(char* p)
{   
    char t;
    int a1,a2;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            a1=*(p+i);
            a2=*(p+j);
            if(a1>a2)
            {
                cout<<t<<"*";
                t=*(p+i);
                *(p+j)=*(p+i);
                *(p+i)=t;
            }
        }
    }
}
int main()
{
    const int s = 5; 
    char stringArray;
    for(int i=0;i<s;++i)
    {
        std::cout<<"Enter string "<<i+1<<": ";
        std::cin>>stringArray[i];
    }
    char* p=&stringArray[0];
    std::cout<<"\nShorted Strings:\n";
    sort(p);
    for(int i=0;i<s;++i) 
    {
        std::cout<<" "<<stringArray[i];
    }

    return 0;
}
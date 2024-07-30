#include<iostream>
namespace atd
{
    int x=2;
}
namespace outer
    {
        int x=9;
        int y=100;
        namespace inner
        {
            int y=10;
        }
    }
    using namespace atd;
int main()
{
    //int x=190;// <-- priority
    std::cout<<x<<" \n";
    std::cout<<outer::y<<"\n";
    std::cout<<outer::inner::y<<"\n";
    return 0;

}
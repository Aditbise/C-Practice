#include<iostream>
#include<string>
using namespace std;
class square
{
    private:
        int l,b;
        int area,perimeter;

    public:
        void calculation(int le,int bd)
        {
           l=le;
           b=bd;
           area=l*b;
           perimeter=2*(l+b);
        }
        friend void display(square aq);
        friend class homework;
};
void display(square aq)
{
    cout<<"Area :"<<aq.area << endl <<"Perimeter :"<<aq.perimeter<<endl;
}
class homework
{
    public:
        void display(square aq)
    {
        cout<<"Area :"<<aq.area << endl <<"Perimeter :"<<aq.perimeter;
    }
};
int main()
{       
    square sq;
    sq.calculation(10,14);
    display(sq);

    sq.calculation(20,14);
    homework hw;
    hw.display(sq);
    return 0;

}


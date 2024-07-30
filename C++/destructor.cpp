#include<iostream>
#include<string>
using namespace std;
class Book
{
    public:
    string Title;
    string Author;
    int Rate*;
    int Ratecount;
    Book(string title,string author)
    {
        Title=title;
        Author=author;
        Ratecount=2;
        Rate=new int{Ratecount};
        Rate[0]=4;
        Rate[1]=5;

        cout<<Tttle + "destructor invoked\n";
    }
    ~Book()
    {
        delete [] Rate;
        cout<<Title + "destructor invoked\n";
        Rate =nullptr;
    }
}
int main()
{
    Book book1("the lie of pie","Unknown");
    Book book2("the heart of the tree","--");
}
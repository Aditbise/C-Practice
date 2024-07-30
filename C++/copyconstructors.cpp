#include<iostream>
#include<string>
using namespace std;
class Book
{
    public:
        string Title;
        string Author;
        int *Rate;
        int Ratecount;
        Book(string title,string author)
        {
            Title=title;
            Author=author;
            Ratecount=2;
            Rate=new int{Ratecount};
            Rate[0]=4;
            Rate[1]=5;

            cout<<Title + "\ndestructor invoked\n";
        }
        ~Book()
        {
            delete [] Rate;
            cout<<Title + "\ndestructor invoked\n";
            Rate=nullptr;
        }
        Book(const Book& original)
        {
            Title=original.Title;
            Author=original.Author;
            Ratecount=original.Ratecount;
            Rate=original.Rate;
            for(int i=0;i<Ratecount;i++)
            {
                Rate[i]=original.Rate[i];
            }
            cout<<original.Title<<"<-original \n"<<Title<<"<-copy"<<endl;
        }
};
int main()
{
    Book book1("the life of pie ","Unknown");
    Book book2("the heart of the tree   ","--");
    /*Book book3(book1) or Book book3=book1 same*/
    Book book3=book1;
}
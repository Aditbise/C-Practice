#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student 
{
    string name;
    string id;
};

int main() 
{
    Student s;
    ofstream file("student.txt");
    if (!file.is_open()) 
    {
        cout<<"Error opening the file!" << endl;
        return 1;
    }

    cout<<"Enter the name and id respectively:" << endl;
    cin>>s.name>>s.id;

    file<<"Name : "<<s.name<<"\n";
    file<<"Id   : "<<s.id<<"\n";

    file.close();

    ifstream inFile("student.txt");

    if (!inFile.is_open()) 
    {
        cout<<"Error opening the file for reading!"<<endl;
        return 1;
    }

    cout<<"\nStudent details from the file:"<<endl;
    string line;

    while(getline(inFile, line)) 
    {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
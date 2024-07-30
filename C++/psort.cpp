#include <iostream>
using namespace std;
class SortArray 
{
    public:
    virtual void sort(int arr[], int size)=0;
};
class DescendingSort : public SortArray 
{
public:
    void sort(int arr[], int size) override 
    {
        for (int i=0;i<size-1;++i) 
        {
            for (int j=0;j<size-i-1;++j) 
            {
                if (arr[j]<arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
};
class AscendingSort : public SortArray
{
    public:
    void sort(int arr[],int size) override 
    {
        for (int i=0;i<size-1;++i) {
            for (int j=0;j<size-i-1;++j) 
            {
                if (arr[j]>arr[j+1]) 
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
};

int main()
{
    int s;
    cout<<"Enter the size of array"<<endl;
    cin>>s;
    cout<<"Enter "<<s<<" element in array"<<endl;
    int ar[s];
    for(int i=0;i<s;i++)
    {
        cin>>ar[i];
    }

    SortArray* sorter=new DescendingSort();
    sorter->sort(ar,s);

    cout <<"Sorted in descending order: ";
    for (int i=0;i<s;++i) 
    {
       cout<<ar[i]<<" ";
    }
    cout<<endl;

    sorter=new AscendingSort();
    sorter->sort(ar,s);

    cout<<"Resorted in ascending order: ";
    for (int i=0;i<s;++i) 
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    delete sorter;
    return 0;
}
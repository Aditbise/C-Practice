#include<iostream>
using namespace std;
class lamp
{
    public :
            virtual void light() =0;
};
class colour1:public lamp
{
    public :
            void light()
            {
                cout<<"red lamp on"<<endl;
            } 
};
class colour2:public lamp
{
    public :
            void light()
            {
                cout<<"blue lamp on"<<endl;
            }
};
class colour3:public lamp
{
    public :
            void light()
            {
                cout<<"green lamp on"<<endl;
            }
};
class colour4:public lamp
{
    public :
            void light()
            {
                cout<<"yellow lamp on"<<endl;
            }
};
int main()
{
    lamp *color1=new colour1();
    lamp *color2=new colour2();
    color1->light();
    color2->light();

    lamp *colours[2] = { new colour3, new colour4 };
    for(int i=0;i<2;i++)
    {
        colours[i]->light();
        delete colours[i];
    }
    delete color1;
    delete color2;
    return 0;
}
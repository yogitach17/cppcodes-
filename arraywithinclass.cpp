// wap in c++ enter 5 student name and print using array within class.
#include<iostream>
using namespace std;
class student {
   private:
   char name[20];
    public:
    void getdata()
    {
        cout<<"enter name\n";
        cin>>name;
    }
    void putdata()
    {
        cout<<"name="<<name<<endl;
    }
};
int main()
{
    class student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
    }
    for(int j=0;j<5;j++)
    {
        s[j].putdata();
    }
    return 0;
}
/*enter name
yogita
enter name
yashashvi
enter name
vanshika
enter name
vaishnavi
enter name
twinkle
name=yogita
name=yashashvi
name=vanshika
name=vaishnavi
name=twinkle
*/
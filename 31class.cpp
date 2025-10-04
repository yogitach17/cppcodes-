// 3.1 wap in c++ to enter student data and print using class and object.

#include<iostream>
using namespace std;

class student  {
    private:
    int rollno;
    char name[20];
    float fees;
    public:
    void input()
    {
        cout<<"enter roll no\n";
        cin>>rollno;
        cout<<"enter name\n";
        cin>>name;
        cout<<"enter fees\n";
        cin>>fees;
    }
    void show()
    {
        cout<<"roll no="<<rollno<<endl;
         cout<<"name="<<name<<endl;
          cout<<"fees="<<fees<<endl;
    }};
    int main()
    {
        class student s;
        s.input();
        s.show();
        return 0;

    }

    


    /* output:
      enter roll no
189
enter name
yogita
enter fees
0
roll no=189
name=yogita
fees=0*/


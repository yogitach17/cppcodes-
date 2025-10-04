//4.3 wap in c++ create a class and read and write data using new and delete operator .

#include<iostream>
using namespace std;
class student
{
   int rollno;
   char name[20];
   float fees;
   public:
   void input()
   {
    cout<<"enter rollno\n";
    cin>>rollno;
    cout<<"enter name\n";
    cin>>name;
   cout<<"enter fees\n";
    cin>>fees;
   }
   void show()
   {
    cout<<"rollno="<<rollno<<endl;
    cout<<"name="<<name<<endl;
     cout<<"fees="<<fees<<endl;

   }
};
int main()
{
    class student *s=new student;
    s->input();
    s->show();
    return 0;
}


/*enter name
yogita
enter fees
0
rollno=189
name=yogita
fees=0*/
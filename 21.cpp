// wap in c++ and inset & exit student data using structure.
#include<iostream>
using namespace std;
int main()
{
    struct student 
    {
        int rollno;
        char name[20];
        float fees;
    }
    s;
    cout<<"enter rollno"<<endl;
    cin>>s.rollno;
    cout<<"enter your name"<<endl;
    cin>>s.name;
    cout<<"enter fees"<<endl;
    cin>>s.fees;
    cout<<"student data= "<<endl;
    cout<<"rollno="<<s.rollno<<endl;
     cout<<"name="<<s.name<<endl;
      cout<<"fees="<<s.fees<<endl;
    return 0;

}

/*enter rollno
189
enter your name
yogita
enter fees
0
student data= 
rollno=189
name=yogita
fees=0*/
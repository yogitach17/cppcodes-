// 3.4 wap in c++ to enter n student data using array of object.

#include <iostream>
using namespace std;
class student {
    private:
        int roll;
        char name[20];
        float fees;
    public:
        void input(){
        cout<< "Enter roll number:\n ";
        cin>> roll;
        cout<< "Enter name:\n ";
        cin>> name;
        cout<< "Enter fees:\n ";
        cin>> fees; }
void show()
{
    cout<<"roll="<<roll<<endl;
    cout<<"Name="<<name<<endl;
    cout<<"Fees="<<fees<<endl;

}};
int  main()
{
    class student st[20];
    int i,n;
    cout<<"Enter number of students:\n";
    cin>>n;
    cout<<"enter student data:\n";
    for(i=0;i<n;i++)
    {
        st[i].input();
    }
    cout<<"Student data is:\n";
    for(i=0;i<n;i++)
    {
        st[i].show();
    }
return 0;
}

         
/*  output
Enter number of students:
2
enter student data:
Enter roll number:
 189
Enter name:
 yogita
Enter fees:
 0
Enter roll number:
 184
Enter name:
 yashavi
Enter fees:
 0
Student data is:
roll=189
Name=yogita
Fees=0
roll=184
Name=yashavi
Fees=0*/
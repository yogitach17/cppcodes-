// 2.3 ERROR WAP in c++ enter student detail having 5 student marks using concept array within structre.
#include<iostream>
using namespace std;
int main()
{ 
    struct student {
        int roll,marks[5];
        char name[20];
    float fees; 
   }
    s;
    int i,j;
    cout<<"enter roll no , name , fees\n";
    cin>>s.roll>>s.name>>s.fees;
    cout<<"enter 5 students \n";
    for(i=0;i<5;i++)
    {
        cin>>s[5].marks;
    }
    cout<<"student data "<<endl;
    cout<<"rollno="<<s.roll<<endl;
    cout<<"name="<<s.name<<endl;
    cout<<"fees="<<s.fees<<endl;
    cout<<"5 subject marks\n";
    for(int j=0;j<5;j++){
        cout<<s[j].marks<<endl;
    }
 
    return 0;

}

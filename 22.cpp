//2.2 WAP in c++ enter n student data using array of structure
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    struct student 
    {
        int rollno;
        char name[20];
        float fees;
    } s[10]; 
    cout<<"Enter number of student data u want : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter rollno for student "<<i+1<<": "<<endl;
        cin>>s[i].rollno;
        cout<<"Enter name for student "<<i+1<<": "<<endl;
        cin>>s[i].name;
        cout<<"Enter fees for student "<<i+1<<": "<<endl;
        cin>>s[i].fees;
    }
    cout<<"Student data: "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Student "<<i+1<<"name= "<<s[i].name<<endl;
         cout<<"Student "<<i+1<<"roll= "<<s[i].rollno<<endl;
    cout<<"Student "<<i+1<<"fees= "<<s[i].fees<<endl;
   return 0;
   
    }

}
/*Enter number of student data u want : 
2
Enter rollno for student 1: 
189
Enter name for student 1: 
yogita
Enter fees for student 1: 
0
Enter rollno for student 2: 
184
Enter name for student 2: 
yashavi
Enter fees for student 2: 
0
Student data: 
Student 1name= yogita
Student 1roll= 189
Student 1fees= 0
*/
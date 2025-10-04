// wap in c++ enter a student detail and print using array of structure and array within structure .
#include<iostream>
using namespace std;
int main()
{
    int n;
    struct student 
    {
        int rollno;
        char name[20];
        int marks[5];
        char sname[20]; 
    } s[100]; 
    cout <<"how many students data you want to enter: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter rollno for student "<<i+1<<": ";
        cin>>s[i].rollno;
        cout<<"Enter name for student "<<i+1<<": ";
        cin>>s[i].name;

        // Input marks for 5 subjects
        for (int j = 0; j < 5; j++) {
            cout << "Enter marks for subject " << (j + 1) << "subject: ";
            cin >> s[i].marks[j];
        }
        cout<<"your data"<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<"rollno="<<s[k].rollno<<endl;
            cout<<"name="<<s[k].name<<endl;
            for (int l= 0; l < 5; l++) {
                cout << "Marks in subject " << (l + 1) << ": " << s[k].marks[l] << endl;
            }
        }

    
    }
}

/*how many students data you want to enter: 2
Enter rollno for student 1: 189
Enter name for student 1: yogita
Enter marks for subject 1subject: 90
Enter marks for subject 2subject: 90
Enter marks for subject 3subject: 90
Enter marks for subject 4subject: 90 
Enter marks for subject 5subject: 90
your data
rollno=189
name=yogita
Marks in subject 1: 90
Marks in subject 2: 90
Marks in subject 3: 90
Marks in subject 4: 90
Marks in subject 5: 90
rollno=6416060
name=pµa
Marks in subject 1: 33
Marks in subject 2: 6416128
Marks in subject 3: 256
Marks in subject 4: 0
Marks in subject 5: 6598080
Enter rollno for student 2: 184
Enter name for student 2: yashavi
Enter marks for subject 1subject: 95
Enter marks for subject 2subject: 95 
Enter marks for subject 3subject: 95
Enter marks for subject 4subject: 95
Enter marks for subject 5subject: 95
your data
rollno=189
name=yogita
Marks in subject 1: 90
Marks in subject 2: 90
Marks in subject 3: 90
Marks in subject 4: 90
Marks in subject 5: 90
rollno=184
name=yashavi
Marks in subject 1: 95
Marks in subject 2: 95
Marks in subject 3: 95
Marks in subject 4: 95
Marks in subject 5: 95*/
// wap in c++ enter a student detail having 5 subject marks  using concept of  array within structure
#include<iostream>
using namespace std;
    int main()
    {
        struct student 
        {
            int rollno;
            char name[20];
            float fees;
            int marks[5]; // Array to hold marks for 5 subjects
        } s;

        cout << "Enter rollno: " << endl;
        cin >> s.rollno;
        cout << "Enter your name: " << endl;
        cin >> s.name;
        cout << "Enter fees: " << endl;
        cin >> s.fees;

        // Input marks for 5 subjects
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << (i + 1) << ": ";
            cin >> s.marks[i];
        }

        cout << "Student data: " << endl;
        cout << "Rollno: " << s.rollno << endl;
        cout << "Name: " << s.name << endl;
        cout << "Fees: " << s.fees << endl;

        // Display marks
        for (int i = 0; i < 5; i++) {
            cout << "Marks in subject " << (i + 1) << ": " << s.marks[i] << endl;
        }

        return 0;
    }


    /*Enter rollno: 
189
Enter your name: 
yogita
Enter fees: 
0
Enter marks for subject 1: 50
Enter marks for subject 2: 20
Enter marks for subject 3: 30
Enter marks for subject 4: 40
Enter marks for subject 5: 70
Student data: 
Rollno: 189
Name: yogita
Fees: 0
Marks in subject 1: 50
Marks in subject 2: 20
Marks in subject 3: 30
Marks in subject 4: 40
Marks in subject 5: 70*/
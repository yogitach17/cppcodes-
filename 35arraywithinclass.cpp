// 3.5 wap in c++ enter student data having 5 subject marks and print data using array within class

#include <iostream>
using namespace std;
class Student {
    private:
        int roll;
        char name[20];
        float marks[5];
    public:
        void input() {
            cout << "Enter roll number:\n";
            cin >> roll;
            cout << "Enter name:\n";
            cin >> name;
            cout << "Enter marks for 5 subjects:\n";
            for (int i = 0; i < 5; i++) {
                cin >> marks[i];
            }
        }
        
        void show() {
            cout << "Roll Number: " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "5 subject Marks: ";
            for (int i = 0; i < 5; i++) {
                cout << marks[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    Student st[10];
    int i,n;
    cout << "Enter number of students:\n";
    cin >> n;
    cout << "Enter student data:\n";
    for (int i = 0; i < n; i++) {
        st[i].input();
    }
    cout << "Student data is:\n";
    for (int i = 0; i < n; i++) {
        st[i].show();
    }

    return 0;
}


/*Enter number of students:
2
Enter student data:
Enter roll number:
189
Enter name:
yogita
Enter marks for 5 subjects:
90
90
90
90
90
Enter roll number:
184
Enter name:
yashavi
Enter marks for 5 subjects:
90
90
90
90
90
Student data is:
Roll Number: 189
Name: yogita
5 subject Marks: 90 90 90 90 90
Roll Number: 184
Name: yashavi
5 subject Marks: 90 90 90 90 90*/
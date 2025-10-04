// 3.6 wap in c++ enter student data having 5 subject marks and print data using array within classand array of object.

#include <iostream>
using namespace std;
class student {
    private :
    char name [20];
    int roll;
    int marks[5];
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
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;

    }
};
    int main(){
        class student st[10];
        int i,n;
        cout << "Enter number of students:\n";
        cin >> n;
        cout << "Enter student data:\n";
        for (i = 0; i < n; i++) {
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
20
20
20
20
20
Enter roll number:
184
Enter name:
yashavi
Enter marks for 5 subjects:
10
10 
10
10
10
Student data is:
Roll Number: 189
Name: yogita
Marks in 5 subjects: 20 20 20 20 20
Roll Number: 184
Name: yashavi
Marks in 5 subjects: 10 10 10 10 10 */



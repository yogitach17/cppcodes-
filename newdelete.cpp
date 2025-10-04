// question:
//wap in c++ enter a integer value, float value and a character, a string , a long double no, and print its value and relese the space  using new & delete operator 
#include<iostream>
using namespace std;
int main()
{
    int *p = new int;
    float *q = new float;
    char *r = new char;
    string *s = new string;
    long double *t = new long double;
    cout<<"Enter an integer value: ";
    cin>>*p;
    cout<<"Enter a float value: ";
    cin>>*q;
    cout<<"Enter a character: ";
    cin>>*r;
    cout<<"Enter a string: ";
    cin>>*s;
    cout<<"Enter a long double value: ";
    cin>>*t;
    cout<<"Integer value: "<<*p<<endl;
    cout<<"Float value: "<<*q<<endl;
    cout<<"Character: "<<*r<<endl;
    cout<<"String: "<<*s<<endl;
    cout<<"Long double value: "<<*t<<endl;
    delete p;
    delete q;
    delete r;
    delete s;
    delete t;
    return 0;
     
}

/*Enter an integer value: 20
Enter a float value: 20.2
Enter a character: z
Enter a string: yogita
Enter a long double value: yogita chugh
Integer value: 20
Float value: 20.2
Character: z
String: yogita
Long double value: 0*/
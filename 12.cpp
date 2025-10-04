// wap in c++ enter two no. and perform all arithmetic operations and print output.
#include<iostream>
using namespace std;
int main()
{
    int a,b,add,sub,mul,div,rem;
    cout<<"enter value of a "<<endl;
    cin>>a;
      cout<<"enter value of b "<<endl;
    cin>>b;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem =a%b;
    cout<<"addition is ="<<add<<endl;
    cout<<"subtraction is ="<<sub<<endl;
    cout<<"division is ="<<div<<endl;
    cout<<"multiplication is ="<<mul<<endl;
    cout<<"remainder is ="<<rem<<endl;
    return 0;
}

/*enter value of a 
2
enter value of b 
2
addition is =4
subtraction is =0
division is =1
multiplication is =4
remainder is =0*/
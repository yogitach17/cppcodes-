// 3.2 wap in c++ enter 2 no. and perform arithmetic operations using class and object 

#include<iostream>
using namespace std;
class arithmetic{
    int a,b,sum,sub,mul,div,rem;
public:
void input()
{
    cout<<"enter value of a & b \n";
    cin>>a>>b;
    }
    void operation(){
        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
        rem=a%b;}
        void show()
        {
            cout<<"addition="<<sum<<endl;
            cout<<"subtraction="<<sub<<endl;
               cout<<"multiplication="<<mul<<endl;  
                  cout<<"division="<<div<<endl;   
                     cout<<"remainder="<<rem<<endl;
        }
};
int main()
{
    class arithmetic a;
    a.input();
    a.operation();
    a.show();
    return 0 ;
}
/*
output:
Enter three numbers:
1
2
3
Max: 3
Min: 1
Mid: 2*/
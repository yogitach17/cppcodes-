// 9.4wap in c++ overload + operator 
#include<iostream>
using namespace std;
class demo {
    private:
    int a,b,c,d;
    public:
    void input(){
        cout<<"enter value of a,b\n ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
          cout<<"b="<<b<<endl;     
    }
    demo operator +(demo obj)
    {
        demo temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }};
    int main(){
        class demo A,B,C;
        cout<<"enter value for object A\n";
        A.input();
        cout<<"enter value for object B\n";
        B.input();
        C=A+B;
        cout<<"result ; A+B= \n";
        C.show();
        return 0;
    }
    /*enter value for object A
enter value of a,b
 1
2
enter value for object B
enter value of a,b
 10
20
result ; A+B= 
a=11
b=22
*/
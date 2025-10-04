// 9.6 wap in c++ overload binary operator using friend function.
#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;
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
    friend demo operator +(demo obj1,demo obj2);
    
};
demo operator +(demo obj1,demo obj2)
{
    demo temp;
    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;
}
int main(){
    class demo A,B,C;
    cout<<"enter value for object A\n";
    A.input();
    cout<<"enter value for object B\n";
    B.input();
    A.show();
    B.show();
    C=A+B;
    cout<<"result ; A+B= \n";
    C.show();
    return 0 ;
}
/*enter value for object A
enter value of a,b
 10
20
enter value for object B
enter value of a,b
 10
20
a=10
b=20
a=10
b=20
result ; A+B=
a=20
b=40
*/
//9.5 wap in c++ overload binary + - * / remainder operator.
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
    demo operator +(demo obj)
    {
        demo temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
    demo operator -(demo obj)
    {
        demo temp;
        temp.a=a-obj.a;
        temp.b=b-obj.b;
        return temp;
    }
    demo operator *(demo obj)
    {
        demo temp;
        temp.a=a*obj.a;
        temp.b=b*obj.b;
        return temp;
    }
    demo operator /(demo obj)
    {
        demo temp;
        temp.a=a/obj.a;
        temp.b=b/obj.b;
        return temp;
    }
    demo operator %(demo obj)
    {
        demo temp;
        temp.a=a%obj.a;
        temp.b=b%obj.b;
        return temp;
    }
};
int main(){
    class demo A,B,C;
    cout<<"enter value for object A\n";
    A.input();
    cout<<"enter value for object B\n";
    B.input();
    C=A+B;
    cout<<"result ; A+B= \n";
    C.show();
    C=A-B;
    cout<<"result ; A-B= \n";
    C.show();
    C=A*B;
    cout<<"result ; A*B= \n";
    C.show();
    C=A/B;
    cout<<"result ; A/B= \n";
    C.show();
    C=A%B;
    cout<<"result ; A%B= \n";
    C.show();
    return 0;
}
/*enter value for object A
enter value of a,b
 10
20
enter value for object B
enter value of a,b
 10
20
result ; A+B= 
a=20
b=40
result ; A-B=
a=0
b=0
result ; A*B=
a=100
b=400
result ; A/B=
a=1
b=1
result ; A%B=
a=0
b=0
*/
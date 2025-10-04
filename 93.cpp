//9.3 wap in c++ to show unary increment using friend function.
#include<iostream>
using namespace std;
class demo{
    private:
    int a,b,c,d;
    public:
    void input(){
        cout<<"enter value of a,b,c,d\n ";
        cin>>a>>b>>c>>d;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
          cout<<"b="<<b<<endl;
            cout<<"c="<<c<<endl; 
              cout<<"d="<<d<<endl;
    }
    friend void increment (demo &obj);
};
void increment (demo &obj)
{
    obj.a++;
    obj.b++; 
    obj.c++;
    obj.d++;   
}
int main(){
    class demo A ;
    A.input();
    cout<<"before increment \n";
    A.show();
    increment (A);
    cout<<"after increment \n";
    A.show();
    return 0;
}
/*enter value of a,b,c,d
 1
2
3
4
before increment 
a=1
b=2
c=3
d=4
after increment
a=2
b=3
c=4
d=5*/
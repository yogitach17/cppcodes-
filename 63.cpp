// wap in c++ to swap two class data using friend function
#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    void input(){
        cout<<"enter the value of a \n";
        cin>>a;
}
void show()
{
    cout<<"a="<<a<<endl;

}
friend void swap (A&,B&);
};
class B
{
    private:
    int b;
    public: 
    void input(){
        cout<<"enter the value of b\n";
        cin>>b;
}
void show()
{
    cout<<"b="<<b<<endl;
}
friend void swap (A&,B&);
};
void swap (A&x,B&y)
{
    int temp=x.a;
    x.a=y.b;
    y.b=temp;}
    int main()
    {
        class A objA;
          class B objB;
          objA.input();
          objB.input();
          cout<<"before swap\n";
          objA.show();
             objB.show();
             swap (objA,objB);
             cout<<"after swap\n";
             objA.show();
              objB.show();
         return 0;   
    }
/*enter the value of a
21
enter the value of b
22
before swap
a=21       
b=22       
after swap 
a=22
b=21*/
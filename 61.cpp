// wap in c++ to find sqaure of a no using friend function
#include<iostream>
using namespace std;
class num{
    private:
    int a;
    public:
    num(int v)
    {
        a=v;
    }
    friend int findsqr (num n);

};
int findsqr(num n){
    return n.a*n.a;
}
int main()
{
    int x;
    class num ;
    cout<<"enter the value of x\n";
    cin>>x;
    cout<<"square of num="<<findsqr(x);
    return 0;
}

/*enter the value of x
2
square of num=4    */
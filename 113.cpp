// 11.3 W.A.P to creat binary  airthmateic template and print diff data type
#include<iostream>
using namespace std;
template<class T>
class calculator{
private:
T num1 ,num2;
public:
calculator(T a,T b)
{
    num1 = a;
    num2 = b;
}
T add ()
{
    return num1+num2;
}
T sub ()
{
    return num1-num2;
}
};

int main()
{
    int x,y;
    cout<<"Enter 2 Integer No.:"<<endl;
    cin>>x>>y;
    calculator<int>intcalc(x,y);
    cout<<"Add = "<<intcalc.add()<<endl;
    cout<<"Sub = "<<intcalc.sub()<<endl;

    float p,q;
    cout<<"Enter 2 Float No.:"<<endl;
    cin>>p>>q;
    calculator<float>floatcalc(p,q);
    cout<<"Add = "<<floatcalc.add()<<endl;
    cout<<"Sub = "<<floatcalc.sub()<<endl;
    return 0;
}
/*output:
Enter 2 Integer No.:
10
15
Add = 25
Sub = -5
Enter 2 Float No.:
1.5
1.5
Add = 3
Sub = 0*/
// 11.4Swap diff. data type value using class template
#include<iostream>
using namespace std;
template<class T>
void myswap (T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x,y;
    cout<<"Enter 2 Integer No.:"<<endl;
    cin>>x>>y;
    cout<<"Before Swap..."<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    myswap(x,y);
    cout<<"After Swap..."<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    float p,q;
    cout<<"Enter 2 Float No.:"<<endl;
    cin>>p>>q;
    cout<<"Before Swap..."<<endl;
    cout<<"p = "<<p<<" q = "<<q<<endl;
    myswap(p,q);
    cout<<"After Swap..."<<endl;
    cout<<"p = "<<p<<" q = "<<q<<endl;
    return 0;
}
/*Enter 2 Integer No.:
10
20
Before Swap...
x = 10 y = 20
After Swap...
x = 20 y = 10
Enter 2 Float No.:
1.2
2.5
Before Swap...
p = 1.2 q = 2.5
After Swap...
p = 2.5 q = 1.2*/

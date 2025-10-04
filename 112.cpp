// 11.2 W.A.P to swap value using template;
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
2
5
Before Swap...
x = 2 y = 5
After Swap...
x = 5 y = 2
Enter 2 Float No.:
1.2
3.2
Before Swap...
p = 1.2 q = 3.2
After Swap...
p = 3.2 q = 1.2
*/
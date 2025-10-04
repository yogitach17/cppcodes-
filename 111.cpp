//11.1 WAP in c++ to find max & min no using templates.
#include<iostream>
using namespace std;
template <class T>
T maximum ( T a,T b)
{
    return (a>b)?a:b;
}
template <class T>
T minimum (T a,T b)
{
    return (a<b)?a:b;
}
int main()
{
    int x,y;
    cout<<"enter 2 integer no \n";
    cin>>x>>y;
    cout<<"max int ="<<maximum(x,y)<<endl;
    cout<<"min int ="<<minimum(x,y)<<endl;
    float p,q;
    cout<<"enter 2 float no \n";
    cin>>p>>q;
    cout<<"max float no = "<<maximum(p,q)<<endl;
    cout<<"min float no = "<<minimum(p,q)<< endl;
    return 0;
}
/*enter 2 integer no 
10
20
max int =20
min int =10
enter 2 float no
1.2
2.5
max float no = 2.5
min float no = 1.2
*/
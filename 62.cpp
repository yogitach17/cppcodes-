// wap in c++ to find max of two class data of different classes with  friend function. 
#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int numA;
    public:
    A(int a){
        numA=a;
    }
    friend int findmax(A,B);
    };
    class B
    {
private:
int numB;
public:
B(int b)
{
    numB=b;
    }
    friend int findmax (A,B);
 };
 int findmax(A aobj , B bobj ){
    return ( aobj .numA> bobj . numB)? aobj.numA : bobj.numB;
 }
 int main()
 {
    int x,y;
    cout<<"enter value of x&y\n";
    cin>>x>>y;
    class A aobjA(x);
    class B bobjB(y);
    int maximum = findmax(aobjA,bobjB);
    cout<<"max"<<maximum <<endl;
    return 0; 

 }

 /*enter value of x&y
2
3
max3*/
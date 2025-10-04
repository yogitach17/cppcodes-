// 8.5 virtual based class 
#include<iostream>
using namespace std;
class A{
    public:
    void show()
    { cout<<"show from class A \n";}
};
class B : virtual public A
{
};
class C : virtual public A 
{
};
class D : public B ,public C
{
};
int main()
{
    class D d;
    d.show();
    return 0;
}

/* output :
show from class A
*/
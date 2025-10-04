// 9.2wap  in c++ overload unary ++ and -- operator .
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
    void increment ()
    {
        a++;
        b++; 
        c++;
        d++;   
    }
    void decrement ()
    {
        a--;
        b--;
        c--;
        d--;

    }
};
int  main()
    {
        class demo A ;
        A.input();
        cout<<"before increment \n";
        A.show();
        A.increment();
        cout<<"after increment \n";
        A.show();
        A.decrement ();
        cout<<"after decrement \n";
        A.show();
        return 0;


    }
    /*enter value of a,b,c,d
 10
20
30
40
before increment 
a=10
b=20
c=30
d=40
after increment
a=11
b=21
c=31
d=41
after decrement
a=10
b=20
c=30
d=40*/

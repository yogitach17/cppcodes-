//9.1 wap in c++ overload unary ++ operator .
#include<iostream>
using namespace std;
class demo{
    private:
    int p,q,r,s;
    public:
    void input()
    {
        cout<<"enter value of p,q,r,s\n";
        cin>>p>>q>>r>>s;
    }
    void show()
    {
        cout<<"p="<<p<<endl;
          cout<<"q="<<q<<endl;
            cout<<"r="<<r<<endl;
              cout<<"s="<<s<<endl;
    }
    void increment (){
        p++;
        q++;
        r++;
        s++;
    }
};
int main()
{
    class demo A;
    A.input();
    cout<<"before increment \n";
    A.show();
    A.increment();
    cout<<"after increment\n ";
    A.show();
    return 0;
}

/*enter value of p,q,r,s
1
2
3
4
before increment 
p=1
q=2
r=3
s=4
after increment
 p=2
q=3
r=4
s=5
*/
// 8.4 hierarichal inheritance
#include<iostream>
using namespace std;
class college {
    protected:
    char cname[20];
    public:
    void input(){
        cout<<"enter college name\n";
        cin>>cname;
    }
    void show()
    {
        cout<<"college name "<<cname<<endl;    }
    };

    
        class cs : public college {
            protected:
            char deptname[20];
            int nos;
            public: void in(){
            cout<<"enter dept name \n";
            cin>>deptname;
            cout<<"enter no of student in cs  \n";
            cin>>nos;
        }
        void out()
        {
            cout<<"dept name="<<deptname<<endl;
            cout<<"no of student ="<<nos<<endl;
        }
};
class AIDS: public college {
    private:
    char dname[20];
int nost;
public:
void put()
{
    cout<<"enter dept name \n";
    cin>>dname;
     cout<<"enter no of student in aids  \n";
            cin>>nost;
}
void get(){
    cout<<"Dname="<<dname<<endl;
    cout<<"no of student ="<<nost<<endl;
}};
int main(){
    class cs C;
    class AIDS A;
    C.input();
    C.in();
    A.input();
      A.put();
      C.show();
      C.out();
      A.show();
      A.get();
      return 0;
}

/*enter college name
aceit
enter dept name 
cs
enter no of student in cs  
100
enter college name
aceit
enter dept name 
ai
enter no of student in aids  
150
college name aceit
dept name=cs
no of student =100
college name aceit
Dname=ai
no of student =150
*/
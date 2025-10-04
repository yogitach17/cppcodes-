 //8.3 wAP in c++ show the level of multiple inheritence
#include<iostream>
using namespace std; 
class book 
{ protected:
char bname[20];
char aname[20];
public:
void input()
{
    cout<<"enter book name\n";
    cin>>bname;
    cout<<"enter authour name\n";
    cin>>aname;
}
void show()
{
    cout<<"bookname="<<bname<<endl;
    cout<<"authourname="<<aname<<endl;
}};
class detail{
    protected:
    float price;
    int YOP;
    public:
    void put(){
        cout<<"enter prize\n";
        cin>>price;
        cout<<"enter year of pub \n";
        cin>>YOP;
    }
    void get(){
        cout<<"prize="<<price<<endl;
        cout<<"YOP="<<YOP<<endl;
    }};
    class allotment : public book , public detail {
        private:
        int dob;
        public:
        void in(){
            cout<<"enter date of allotment ";
            cin>>dob;
        }
        void out()
        {
            cout<<"date of allotment "<<dob<<endl;
        }
    };
    int main()
    {
        class allotment b;
        b.input();
        b.put();    
        b.get();
        b.in();
        b.out();
        return 0;
    }

    /*
    enter book name
nothing
enter authour name
idk
enter prize
1000
enter year of pub 
2007
prize=1000
YOP=2007
enter date of allotment 17012007
date of allotment 17012007
*/
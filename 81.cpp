// 81 single level inheritance.
#include<iostream>
#include<string>
using namespace std;
class student 
{ 
    protected:
    char name[20];
    int rollno;
    public:
    void input()
    {
        cout<<"enter name\n";
        cin>>name;
        cout<<"enter rollno\n";
        cin>>rollno;}
        void output()
        {
            cout<<"name="<<name<<endl;
            cout<<"rollno="<<rollno<<endl;
        }};
        class detail: public student {
            private:
            string fname;
            float fees;
            public:
            void in()
            {
                cout<<"enter father name\n";
                cin>>fname;
                cout<<"enter college fees\n";
                  cin>>fees;
            }
            void out()
            {
                cout<<"father name="<<fname<<endl;
                cout<<"fees="<<fees<<endl;
            }
        };
        int main()
        {
            class detail s;
            s.input();
            s.in();
            s.output();
            s.out();
        return 0;

        }
    /*enter name
yogita
enter rollno
189
enter father name
ajay
enter college fees
0
name=yogita
rollno=189
father name=ajay
fees=0
*/
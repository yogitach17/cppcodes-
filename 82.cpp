//8.2 multi level inheritance
#include<iostream>
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
        class marks: public detail{
            private:
            int sub1,sub2,sub3,sub4,sub5;
            float total,per;
            public :
            
                void put()
                {
                    cout<<"enter 5  subject marks\n";
                    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
                }
                    void get()
                    {
                        total=sub1+sub2+sub3+sub4+sub5;
                        per=total/500*100;
                        cout<<"total="<<total<<endl;
                        cout<<"per="<<per<<endl;
                    }
        };
                    int main()
                    {
                        class marks m;
                        m.input();
                        m.in();
                        m.put();
                        m.output();
                        m.out();
                        m.get();
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
enter 5  subject marks
90
90
90
90
90
name=yogita
rollno=189
father name=ajay
fees=0
total=450
per=90*/
        
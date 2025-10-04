//8.7->wap in c++ to show the concept of vitual function
#include<iostream>
using namespace std;
class first
{
    public:
    virtual void show()
    {
        cout<<"hello from 1st class\n";
        }    virtual void display()
    {
        cout<<"hello from 1st class \n";
    }
    void fun()
    {
        cout<<"hello from fun 1st class\n";

    }
};
    class second:public first{
        public:
        virtual void show()
        {
         cout<<"hello from second \n";

        }
        virtual void fun()
        {
            cout<<"hello from fun \n";
        }
    };
    int main()
    {
        first *ptr;
        first f;
        second s;
        ptr=&f;
        ptr->show();
        ptr->display();
        ptr->fun();
        ptr=&s;
        ptr->show();
        ptr->display();
        ptr->fun();
        return 0;
    }
    /*hello from 1st class
hello from 1st class +
hello from fun 1st class
hello from second 
hello from 1st class 
hello from fun 1st class*/

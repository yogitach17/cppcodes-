// 8.6wap in c++ to show the example of virtual function.
#include<iostream>
using namespace std;
class first {
    public:
    virtual void show()
    {
        cout<<"hello from class first\n";
    }
};
class second : public first {
    public :
    void show()
    {
        cout<<"hello from class second \n";
    }
};
int main()
{
    first *ptr ;
    class first f;
    class second s;
    ptr = &f;
    ptr -> show();
    ptr =&s;
    ptr ->show();
    return 0;
}

/*hello from class first  
hello from class second*/
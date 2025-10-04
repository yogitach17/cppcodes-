//wap in c++ to understand the concept of this pointer.
#include<iostream>
using namespace std;
class number{
    int num;
    public:
    void setvalue(int num){
        this->num=num;
    }
    void show()
    {
        cout<<"value="<<this->num;
    }
};
int main()
{
    class number obj;
    int input;
    cout<<"enter a no\n";
    cin>>input;
    obj.setvalue(input);
    obj.show();
    return 0;
}
/*enter a no
16
value=16*/
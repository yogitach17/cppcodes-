// 5.3 copy constructor
#include<iostream>
using namespace std;
class demo{
    int data;
    public:
    demo(){
        data=200;
        cout<<"default constructor\n";
    }
    demo(int x){
        data=x;
    }
    demo(demo &d){
        data = d.data;
        cout<<"copy constructor"<<endl;
    }
    void show(){
   cout<<"data="<<data<<endl;
    }
};
int main(){
    demo d1(300);
    demo d2=d1;
    demo d3;
    demo d4= d3;
    d1.show();
    d2.show();
    d3.show();
    d4.show();
    return 0;
}
/*
output-
copy constructor
default constructor
copy constructor
data=300
data=300
data=200
data=200
*/

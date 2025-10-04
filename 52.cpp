//parametarised constructor 
#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){
        a=b=0;
        cout<<"default argument\n";
        show();
    }
    demo(int x,int y){
        a=x;b=y;
        cout<<"two arguments\n";
        show();
    }
    demo(int x){
        a=b=x;
        cout<<"one arguement\n";
        show();
    }
    void show(){
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main(){
    demo d1;
    demo d2(20,30);
    demo d3(40);
    return 0;
}

/*
output-
default argument
a=0
b=0
two arguments
a=20
b=30
one arguement
a=40
b=40
*/
// 5.2 parametarised constructor
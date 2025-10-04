//program to understand exceptional handling 
//10.1wap in c++ to understand exceptional handling
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a and b";
    cin>>a>>b;
    try {
        if(b==0)
        throw "divide by zero not allowed\n";
    int result =a/b;
    cout<<"result"<<result <<endl;
    }
    catch(const char*msg){
        cout<<"error:"<<msg<<endl;}
return 0;
        }
        /*Enter value of a and b10
20
result0*/
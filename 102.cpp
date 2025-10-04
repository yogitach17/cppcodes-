// 10.2wap in c++ to check for voting age using exception handling
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age to check for voting \n";
    cin>>age;
    try {
        if(age<18)
        throw "less than 18 is not allowed \n";
        cout<<"your age= "<<age<<" you are elligble for vote \n";}
        catch( const char *msg )
        {
            cout<<"error : ="<<msg << endl;}}
        
    /*20
your age= 20 you are elligble for vote*/
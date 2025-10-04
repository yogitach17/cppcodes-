// 10.3wap in c++ to check whether a number is even or odd using exception handling
#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter a number";
    cin>>num;
    try {  if(num%2!=0)
        {
            throw "error : no is not even \n";
        }
        cout<<num<<" is even";}
        catch (const char*msg){
            cout<<msg<<endl;
        }
        return 0;
    }
    /*Enter a number8
8 is even
*/



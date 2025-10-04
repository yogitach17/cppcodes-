#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"object created by constructor "<<endl;

    }
    ~demo(){
        cout<<"object destroyed";
    }
};
int main(){
    class demo d;
    return 0;
}


/*  output:
object created by constructor 
object destroyed
*/
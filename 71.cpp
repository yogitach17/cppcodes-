// wap in c++ to show concept of static data memner and member function.
#include<iostream>
using namespace std;
class demo{
    private:
    static int a;
    static float b;
    static char ch;
     public:
     static void show ()
     {
        cout<<"integr value="<<a<<endl;
        cout<<"integer value="<<b<<endl;
        cout<<"character ="<<ch<<endl;
     }};
     int demo :: a=20;
       float demo :: b=20.20; 
        char demo :: ch='z';
        int main()
        {
            demo :: show ();
            return 0;
        }

        /*output:
        integr value=20     
integer value=20.2  
character =z 
*/

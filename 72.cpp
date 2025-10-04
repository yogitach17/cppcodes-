// 7.2 wap in c++ to show constant data member and constant member function.
#include<iostream>
using namespace std;
class rect {
    private:
    const double length;
     const double width;
     public:
     rect(double l,double w):length (l), width (w)
     {}
     double area() const 
     {
        return length * width ;

     }};
     int main()
     {
        class rect R(40,5.0);
       cout<<"area="<<R.area();
        return 0;
     }


//area=200
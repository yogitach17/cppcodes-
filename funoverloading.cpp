// wap in c++ swap two different values using function overloading consept 
#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping int values: "<<a<<" "<<b<<endl;
}
void swap(float a , float b){
    float temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping float values: "<<a<<" "<<b<<endl;
}
int main(){
    int x = 10, y = 20;
    float p = 5.5, q = 9.9;
    cout<<"Before swapping int values: "<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<"Before swapping float values: "<<p<<" "<<q<<endl;
    swap(p, q);
    return 0;
}

/*
Before swapping int values: 10 20    
After swapping int values: 20 10     
Before swapping float values: 5.5 9.9
After swapping float values: 9.9 5.5 
*/


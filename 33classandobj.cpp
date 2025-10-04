// 3.3 wap in c++ enter 3 no. and find max , mid , min using class and object 

#include <iostream>
using namespace std;
class number {
    int a,b,c,max,min,mid;
    public:
        void input() {
            cout << "Enter three numbers:\n";
            cin >> a >> b >> c;
        }
        
        int operation() {
            max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
            min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
            mid = a + b + c - max - min;}

            void show() {
            cout << "Max: " << max << endl;
            cout << "Min: " << min << endl;
            cout << "Mid: " << mid << endl;
            }};
int main() {
    class number n;
    n.input();
    n.operation();  
    n.show();
            return 0;
        }


        /*  output:
        
        Enter three numbers:
1
2
3
Max: 3
Min: 1
Mid: 2*/
//3.3 wap in c++ using class amd object and find max , min, mid in three number //

#include<iostream>
using namespace std;
class student {
    int a,b,c,max,min,mid;
    public:
    
    void input(){
        cout<<"enter a no.\n";
        cin>>a;
        cout<<"enter second no.\n";
        cin>>b;
        cout<<"enter third no.\n";
        cin>>c;
    }
 void operation()
   {
     max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    min=((a<b)?((a<c)?a:c):(b>c)?b:c);
    mid=a+b+c-max-min;}
 
       /* if (a >= b && a >= c)
            max = a;
        else if (b >= a && b >= c)
            max = b;
        else
            max = c;

        // Find min
        if (a <= b && a <= c)
            min = a;
        else if (b <= a && b <= c)
            min = b;
        else
            min = c;

        // Mid = total - max - min
        mid = a + b + c - max - min;

        */
   
    int show(){
        cout<<"max:"<<max<<endl;
        cout<<"min:"<<min<<endl;
        cout<<"mid:"<<mid<<endl;
    }};
    int main(){
class student st;
    st.input();
    st.operation();
    st.show();
    return 0;
    }


    /*enter a no.
1
enter second no.
2
enter third no.
3
max:3
min:1
mid:2*/
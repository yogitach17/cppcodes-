//4.1wap in c++ enter different no. & print value using new & delete operator or using dynamic memory allocation.


#include<iostream>
using namespace std;
int main()
{
    int *a=new int (26);
    float *b= new float (20.40);
    char *c= new char('c');
    cout<<"integer value="<<*a<<endl;
     cout<<"float value="<<*b<<endl;
      cout<<"character value="<<*c<<endl;

      delete a;
      delete b;
      delete c;
      return 0;

}

/*integer value=26
float value=20.4
character value=c*/
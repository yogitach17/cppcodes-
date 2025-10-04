//4.5 wap in c++ to find max in different values using function overloading concept.
#include<iostream>
using namespace std;
int max(int,int);
float max(float,float);
char max (char,char);
int main()
{
    int x,y,imax;
    float f1,f2,ymax;
    char ch1,ch2,cmax;
    cout<<"enter 2 integer no\n";
    cin>>x>>y;
    cout<<"enter 2 float no\n";
    cin>>f1>>f2;
    cout<<"enter 2 character \n";
    cin>>ch1>>ch2;
    imax=max(x,y);
    ymax=max(f1,f2);
    cmax=max(ch1,ch2);
    cout<<"max of integer ="<<imax<<endl;
     cout<<"max of float ="<<ymax<<endl;
      cout<<"max of character  ="<<cmax<<endl;
      return 0;
}
int max(int x,int y)
{ 
    return x>y?x:y;

}
float max(float x,float y)
{ 
    return x>y?x:y;

}
char max(char x,char y)
{ 
    return x>y?x:y;

}

/*
    OUTPUT:
enter 2 integer no
25
60
enter 2 float no
20.14
30.12
enter 2 character 
a
e
max of integer =60
max of float =30.12
max of character  =e
*/

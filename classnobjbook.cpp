// wap in c++ to enter book details using class and object. nikita made it 

#include<iostream>
using namespace std;
class book{
char bname[20];
char aname[20];
int bid;
public:
void input()
{
    cout<<"bname\n";
    cin>>bname;
    cout<<"aname\n";
    cin>>aname;
    cout<<"bid\n";
    cin>>bid;
}
void show(){
    cout<<bname<<endl;
    cout<<aname<<endl;
    cout<<bid<<endl;
}
};
int main()
{
    class book st;
    st.input();
    st.show();
    return 0;
}










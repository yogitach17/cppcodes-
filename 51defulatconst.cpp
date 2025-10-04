// WAP IN C++ TO SHOW THE CONCEPT OF DEFAULT CONSTRUCTOR .
#include<iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
    public:
    student(){
        cout<<"enter roll no and name\n";
        cin>>rollno>>name;
    }
    void show(){
        cout<<"name="<<name<<endl;
        cout<<"roll no="<<rollno<<endl;
    }
};
int main(){
    class student st;
    st.show();
return 0;
}

/*
OUTPUT:
enter roll no and name
189
yogita
name=yogita
roll no=189*/
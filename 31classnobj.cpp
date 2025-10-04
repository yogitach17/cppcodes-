//SAME  3.1 WAP in c++ insert subject data and print using class and object . 
#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name[20];
    float fees;
    public:
    void nikita()
{
    cout<<"enter roll no\n";
    cin>>rollno;
    cout<<"enter name\n";
    cin>>name;
    cout<<"enter fees\n";
    cin>>fees;
}
void yogita(){
      cout<<"rollno="<<rollno<<endl;
     cout<<"name="<<name<<endl;
      cout<<"fees="<<fees<<endl;
}
};
int main()
{
    class student st;
    st.nikita();
    st.yogita();
    return 0;

}

/*enter roll no
189
enter name
yogita
enter fees
0
rollno=189
name=yogita
fees=0*/


    


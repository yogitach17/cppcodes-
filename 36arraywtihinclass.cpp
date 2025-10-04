// 3.6 wap to enter student data and enter name , roll no , 5 subject marks and print them // .

#include<iostream>
using namespace std;
class student {
    int rollno;
    char name[20];
    int marks[5]; // array within class 
    public:
    void input(){
         cout<<"enter rollno\n";
        cin>>rollno;
        cout<<"enter name\n";
        cin>>name;
        cout<<"how many marks you enter\n";
        for( int i=0;i<5;i++){
        cin>>marks[i];
      }}
      void show(){ int i;
          cout<<"rollno"<<rollno<<endl;
        cout<<"name"<<name<<endl;
        cout<<"5 subject marks\n";
        for(i=0;i<5;i++){
        cout<<"marks"<<marks[i]<<endl;
        
      }}};
      int main()
      {
        student st;
        st.input();
          st.show(); 
         return 0;
        }
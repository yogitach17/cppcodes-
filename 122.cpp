//12.2wap in cpp reading and writing a student data using file handling.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream rw;
    rw.open("yogitachugh.txt",ios::out);
    char name[20],div[20];
    int roll;
    cout<<"enter student name\n";
     cin.getline(name,10);
     cout<<"enter student division\n";
     cin.getline(div,20);
     cout<<"enter student roll no\n";
        cin>>roll;
        rw<<name<<endl<<div<<endl<<roll<<endl;
        rw.close();
        rw.open("yogitachugh.txt",ios::in);
        rw.getline(name,10);
        rw.getline(div,20);
        rw>>roll;
        cout<<"\nstudent data\n";
        cout<<"name ="<<name<<endl;
        cout<<"division ="<<div<<endl;
        cout<<"roll no ="<<roll<<endl;
        rw.close();
        return 0;
}

/* OUTPUT:
enter student name
yogita
enter student division
3
enter student roll no
189

student data
name =yogita
division =3
roll no =189
*/
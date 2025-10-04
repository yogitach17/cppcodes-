//4.2 wap in c++ enter 5 subject marks & find the avg & gpa of a student using new & deelte operator .


#include<iostream>
using namespace std;
int main()
{
    int *marks = new int[5];
    float sum=0;
    cout<<"enter 5 subject marks\n";
    for( int i=0;i<5;i++)
    { 
        cout<<"subject "<<i+1<<"=";
        cin>>*(marks+i);
        sum+=*(marks+i);
    }
    float average = sum/5;
    float gpa=average/10;
    cout<<"total marks="<<sum<<endl;
    cout<<"average marks="<<average <<endl;
    cout<<"gpa="<<gpa<<endl;
    delete[]marks;
    return 0;
}

/*enter 5 subject marks
subject 1=10
subject 2=10
subject 3=10
subject 4=10
subject 5=10
total marks=50
average marks=10
gpa=1*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fobj;
    fobj.open("demo.txt");
    fobj<<"hello!file handling";
    cout<<"data stored in file \n";
    fobj.close();
    return 0;
}

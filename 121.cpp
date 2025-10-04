//12.1wap in cpp to read and write a mobile data using file handling function.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream rw;
    rw.open("yogita.txt",ios::out);
    char mcomp[20],model[20];
    float price;
    cout<<"enter mobile model\n";
     cin.getline(model,10);
     cout<<"enter mobile company\n";
     cin.getline(mcomp,20);
     cout<<"enter mobile price\n";
        cin>>price;
        rw<<model<<endl<<mcomp<<endl<<price<<endl;
        rw.close();
        rw.open("yogita.txt",ios::in);
        rw.getline(model,10);
        rw.getline(mcomp,20);
        rw>>price;
        cout<<"\nmobile data\n";
        cout<<"model ="<<model<<endl;
        cout<<"company ="<<mcomp<<endl;
        cout<<"price ="<<price<<endl;
        rw.close();
        return 0;
}
/* output:
enter mobile model
11r
enter mobile company
oneplus
enter mobile price
35000 

mobile data
model =11r
company =oneplus
price =35000
*/
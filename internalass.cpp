// wap in c++ enter n proudct detail and print output using array of object .
#include<iostream>
using namespace std;
class Product {
    public:
        int id;
        char name[20];
        float price;

        void input() {
            cout << "Enter product ID: ";
            cin >> id;
            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter product price: ";
            cin >> price;
        }

        void display() {
            cout << "Product ID: " << id << endl;
            cout << "Product Name: " << name << endl;
            cout << "Product Price: $" << price << endl;
        } 
 
};
int main()
 {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product products[n]; // Array of objects

    for(int i = 0; i < n; i++) {
        cout << "Enter details for product " << (i + 1) << ":" << endl;
        products[i].input();
    }

    cout << "\nProduct Details:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "\nProduct " << (i + 1) << " details:" << endl;
        products[i].display();
    }

    return 0;
 }

 /*Enter number of products: 2
Enter details for product 1:
Enter product ID: 12
Enter product name: fnlwiw
Enter product price: 434
Enter details for product 2:
Enter product ID: 212
Enter product name: sdvv
Enter product price: 12312

Product Details:

Product 1 details:
Product ID: 12
Product Name: fnlwiw
Product Price: $434

Product 2 details:
Product ID: 212
Product Name: sdvv
Product Price: $12312
*/

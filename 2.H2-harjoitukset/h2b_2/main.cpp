#include <iostream>
#include <vector>
#include "product.h"

using namespace std;

int main()
{
    // Tehtävä 2
    vector<Product> Products;

    Products.emplace_back("Phone", 499);
    Products.emplace_back("Shoes",49.9);
    Products.emplace_back("PC", 1499);

    for(Product i: Products) {
        i.printData();
    }

    // Tehtävä 3 - Tehty samaan
    vector<Product> Products2;

    string given_product;
    double given_price;

    for(int i = 0; i < 5; i++){
        cout << "Write product: ";
        cin >> given_product;
        cout << "Give price: ";
        cin >> given_price;
        Products2.emplace_back(given_product,given_price);
    }

    cout << endl;

    for (Product i: Products2) {
        i.printData();
    }

    return 0;
}

#include "product.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Product objProduct1 ("Shoes", 20.5);
    Product objProduct2 ("Table", 259);
    Product objProduct3 ("Phone", 499.9);

    vector<Product> products;

    products.push_back(objProduct1);
    products.push_back(objProduct2);
    products.push_back(objProduct3);

    cout << "Eka alkio" << endl;
    products[0].printData();
    cout << endl;

    //määritetty alkioiden määrä käsin
    for (int i = 0; i <= 2; i++) {
        products[i].printData();
    }

    cout << endl << "Listassa alkiota="<<products.size() << endl;

    //Ohjelma hakee taulukon koon, ei tarvitse tietää alkioiden määrää
    for (int i = 0; i < products.size(); i++) {
        products[i].printData();
    }
    cout << endl;
    // Tuote tuotteelta
    for(Product i: products) {
        i.printData();
    }
}

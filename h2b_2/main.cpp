#include <iostream>
#include <vector>
#include "product.h"

using namespace std;

int main()
{

    vector<Product> Products;

    Products.emplace_back("Phone", 499);
    Products.emplace_back("Shoes",49.9);
    Products.emplace_back("PC", 1499);

    for(Product i: Products) {
        i.printData();
    }
    return 0;
}

#include "product.h"
#include <iostream>
#include <vector>
#include <random>
using namespace std;

// Käytetty tekoälyä tässä random-generaattorin tekemiseen kaverina
double random_double(double min, double max) {
    static mt19937 gen(random_device{}());
    uniform_real_distribution<double> dist(min, max);
    return dist(gen);
}

int main()
{
    // Tehdään 5 kierrosta tuotteiden arpomista
    for(int x = 1; x <= 5; x++) {
        vector<Product> Products;

        // Lisätään 5 tuotetta listalle. Arvotaan niiden hinta
        Products.emplace_back("Kahvinkeitin", random_double(0, 400.0));
        Products.emplace_back("Hiiri", random_double(10.0, 120.0));
        Products.emplace_back("Nautto", random_double(100.0, 750.0));
        Products.emplace_back("Kuulokkeet", random_double(30.0, 450.0));
        Products.emplace_back("Nappaimisto", random_double(25.0, 250.0));

        int mostExpensiveIndex = 0;
        double mostExpensivePrice = Products[0].getPrice();

        // Selvitetään kallein tuote sekä sen indeksi listalla
        for (int i = 0; i < Products.size(); i++) {
            if (Products[i].getPrice() > mostExpensivePrice) {
                mostExpensiveIndex = i;
                mostExpensivePrice = Products[i].getPrice();
            }
        }

        // Tulostetaan kunkin kierroksen kallein tuote sekä hinta
        cout << x << ".kierroksen kallein tuote oli: " << Products[mostExpensiveIndex].getName() << endl;
        cout << "Tuotteen hinta on: " << Products[mostExpensiveIndex].getPrice() << endl << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int luvut[5] = {1, 2, 3, 4, 5};
    // Et voi lisätä taulkkoon uusia alkioita
    // sen sijaan vektoriin voi lisätä

    vector<int> muuttujat = {1, 2, 3, 4, 5};

    muuttujat.push_back(6);

    for (int luku : muuttujat) {
        cout << luku << " ";
    }
    cout << endl << endl;
    //kysellään lukuja kunnes käyttäjä antaa lukvun 99
    //jolloin luvut tulostetaan
    vector<int> myNumbers;
    int newNumber = 1;

    cout <<"Anna lukuja, luku 99 lopettaa" << endl;
    while (newNumber != 99) {
        cin >> newNumber;
        if (newNumber != 99) {
            myNumbers.push_back(newNumber);
        }
    }
    cout <<"Kiitos, annetut numerot ovat: " << endl;

    for (int luku : myNumbers) {
        cout << luku << ", ";
    }
    cout << endl << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;


    // refA = %b;  //EI toimi, "rikkoo" ohjelman

    refA = b;
    // Koska refA on viittaus muuttujaan A, muuttuu
    // muuttuja a samaksi kuin muuttuja b
    // Kumpikin muuttuja kuitenkin säilyy

    cout << "refA:n arvo: " << refA << endl;
    cout << "refA:n osoite: " << &refA << endl;
    cout << "a:n arvo: " << a << ". b:n arvo on: " << b << endl;
    cout << "a:n osoite: " << &a << endl;
    cout << "b:n osoite: " << &b << endl;

    pointerA = &b; // Onnistuu

    cout << "pointerA: " << pointerA << endl;
    cout << "*pointerA: " << *pointerA << endl;
    // pointerA = muistipaikan osoite
    // *pointerA = osoitin muistipaikassa olevaan arvoon

    cout << "refA: " << refA << endl;
    cout << "&refA: " << &refA << endl;
    // refA = Arvo
    // &refA = arvon muistipaikka, johon referenssi osoittaa


    return 0;
}

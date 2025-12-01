#include <iostream>

using namespace std;

void kasvata(int &luku);
void asetaNollaksi(int *luku);
void tuplaa(int);

int main()
{
    int x = 42;
    //int *pointer_x = &x;
    int *pointer_x;
    pointer_x = &x;
    cout <<"Luku alussa:" << endl;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "pointer_x = " << pointer_x << endl;
    cout << "*pointer_x = " << *pointer_x << endl;
    //kasvatetaan x:n arvoa

    kasvata(x);
    cout << endl <<"Luvun kasvattamisen jalkeen:" << endl;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "pointer_x = " << pointer_x << endl;
    cout << "*pointer_x = " << *pointer_x << endl << endl;

    //Kokeillaan tuplaa-funktiota
    tuplaa(x);
    cout << "Tuplaus kokeilun jalkeen luku = " << x << endl << endl;

    asetaNollaksi(&x);
    cout << endl <<"Nollaksi asettamisen jalkeen:" << endl;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "pointer_x = " << pointer_x << endl;
    cout << "*pointer_x = " << *pointer_x << endl;


    return 0;
}

void kasvata(int &luku) {
    luku++;
    //sama kuin luku = luku + 1
    //ja sama kuin
    //luku += 1;
}


void asetaNollaksi(int *luku) {
    *luku = 0;
}

void tuplaa(int luku){
    luku = luku * 2;
    cout << "Funktion tuplaa sisalla luku = " << luku << endl;
}

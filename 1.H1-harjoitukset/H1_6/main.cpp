#include <iostream>

using namespace std;
void tuplaa(int *);

int main()
{
    int luku;
    cout << "Anna luku" << endl;
    cin >> luku;
    cout << "Annettu luku on " << luku << endl;
    tuplaa(&luku);
    cout << "Nyt luku on " << luku << endl;
    return 0;
}


void tuplaa(int *a) {
    *a=2**a;
    cout << "Tuplaa funktiossa luku " << *a << endl;
}

#include <iostream>

using namespace std;
int tuplaa(int luku);

int main() {
    int x;
    cout << "Anna kokonaisluku: " << endl;
    cin >> x;
    int tupla = tuplaa(x);
    cout << "Antamasi luku tuplattuna on " << tupla << endl;
}

int tuplaa(int luku) { return luku * 2; }

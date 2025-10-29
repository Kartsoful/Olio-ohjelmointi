#include <iostream>

using namespace std;

int main()
{
    int luku;
    cout << "Anna kokonaisluku" << endl;
    cin >> luku;
    if (luku % 2 == 1) {
        cout <<"Annettu luku on pariton." << endl;
    } else {
        cout <<"Annettu luku on parillinen." << endl;
    }
    return 0;
}

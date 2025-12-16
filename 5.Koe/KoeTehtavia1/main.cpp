#include <iostream>
using namespace std;

int summa(int, int);
int printTulos(int, int);

int main()
{
    printTulos(2, 3);
    return 0;
}

int summa(int a, int b) {
    return a + b;
}

int printTulos(int a, int b) {
    int r = summa(a, b);
    cout << r << endl;
    return r;
}

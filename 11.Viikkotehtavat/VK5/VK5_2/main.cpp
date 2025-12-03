#include <iostream>
using namespace std;

int summa(int &, int &);

int main()
{
    int a = 5;
    int b = 6;
    int c = summa(a, b);

    cout << a << " + " << b << " = " << c << endl;

    return 0;
}


int summa(int &x, int &y) {
    return (x + y);
}

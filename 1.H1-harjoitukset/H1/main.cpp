#include <iostream>

using namespace std;
void calcSum(int a, int b);
void calcDiv(int a, int b);
float retDiv(int a, int b);
int retSum(int a, int b);

int main() {
    int a, b;
    cout << "Anna kaksi lukua" << endl;
    cout << "Ensimmainen: " << endl;
    cin >> a;
    cout << "Toinen: " << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float result = retDiv(a, b);

    cout << "Lukujen summa on " << summa << endl;

    try {
        result = retDiv(a, b);
        cout << a << "/" << b << " = " << result << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

void calcSum(int a, int b) {
    int summa = a + b;
    cout << "Lukujen summa on " << summa << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaja ei voi olla nolla" << endl;
    } else {
        float osamaara = a / (float)b;
        cout << "Luku " << a << " jaettuna luvulla " << b << " = " << osamaara
             << endl;
    }
}

int retSum(int a, int b) { return a + b; }

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    } else {
        return a / (float)b;
    }
}

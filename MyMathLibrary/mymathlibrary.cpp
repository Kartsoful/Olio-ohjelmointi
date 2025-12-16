#include "mymathlibrary.h"
#include <stdexcept>

MyMathLibrary::MyMathLibrary() {}

int MyMathLibrary::factor(int n)
{
    if(n < 0) {
        throw std::runtime_error("jakaja ei saa olla nolla tai negatiivinen!");
    }
    int result = 1;
    for(int x = 1 ; x <= n ; x++) {
        result = x*result;
    }
    return result;
}

#include <iostream>
#include "decimal.h"

using namespace dec;
using namespace std;

int main(){

    // decimal z dwoma miejscami po przecinku..
    // miejsca po przecinu oznaczone <miejsca_po_przecinku>..
    // nastepnie nazwa(wartosc)..

    decimal<2> d1(32.4575);
    cout << "d1 = " << d1 << endl;

    decimal<2> d2(47.5475534);
    cout << "d2 = " << d2 << endl;

    decimal<5> d3(55.475534535);
    cout << "d3 = " << d3 << endl;

    decimal<10> d4(51.222475534535);
    cout << "d4 = " << d4 << endl;

    return 0;
}
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

    // od lewej podawana ktora ma byc nowa wartosc z biblioteki..

    d1 *= d4;
    cout << "nowe d1 = " << d1 << endl;

    d2 /= d4;
    cout << "nowe d2 = " << d2 << endl;

    // albo poprzez jakas wartosc z prawej strony..

    d3 *= 150;
    cout << "nowe d3 = " << d3 << endl;

    // mozna laczyc ze soba w jedna wartosc..

    auto d5 = d1 * d2 * d3 + d4;
    cout << "najnowsze d5 zlaczone z reszty =======> " << d5 << endl;

    auto d6 = d5 * d2 * d3 + d4 / d1;
    cout << "najnowsze d6 zlaczone z reszty =======> " << d6 << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    decimal<2> value(143125);

    value = value / decimal_cast<2>(333.0);

    cout << "REZULTAT: " << value << endl;

    decimal<6> Rate(12.1234);

    value = decimal_cast<2>(decimal_cast<6>(value) * Rate);

    cout << "2 REZULTAT : " << value << endl;

    cout << "REZULTAT 2<6> : " << decimal_cast<6>(value) << endl;

    return 0;
}
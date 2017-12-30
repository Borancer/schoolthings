#include<iostream>
#define EXIT_SUCCESS 0
#include"omakirjasto.h"
using namespace std;

int main() {

    int a = 6;
    int b = 3;

    int c = summa( a, b );
    cout << "Lukujen summa on " << c << endl;

    return EXIT_SUCCESS;
}

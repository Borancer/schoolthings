#include <iostream>
#include <limits>
using namespace std;
#define EXIT_SUCCESS 0

// a ja b samassa
int main() {

    for( int laskuri = 1; laskuri <=10; laskuri++ ) {

           cout << laskuri*2 << ", " ;

    }
    cout << endl;
    for( int laskuri = 1; laskuri <=10; laskuri++ ) {

           cout << laskuri << ", ";

    }

    return EXIT_SUCCESS;

}

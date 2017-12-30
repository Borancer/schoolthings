#include <iostream>
using namespace std;



int main()
{
int luku1;
int luku2;
int erotus;
int kertoma;
cout << "syötteet : \n";
cout << "syötä ensimmäinen luku: ";
cin >> luku1;
cout << "syötä toinen luku: ";
cin >> luku2;
erotus = luku1 - luku2;
kertoma = luku1 * luku2;
cout << "erotus on " << erotus << endl << "kertoma on " << kertoma << endl;
return 0;
}

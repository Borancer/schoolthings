#include <iostream>
using namespace std;


int main() {

float lainamaara;
float korkoprosentti;
float lainaaika;


cout << "Syota lainan maara (euroa): ";
cin >> lainamaara;
cout << "Syota korkoprosentti: ";
cin >> korkoprosentti;
cout << "Syota laina-aika (vuosia): ";
cin >> lainaaika;
float korko = lainamaara*korkoprosentti*lainaaika;
cout << "Lainan korot laina-ajalta ovat: " << korko;
return 0;




}

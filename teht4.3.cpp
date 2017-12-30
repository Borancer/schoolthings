#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>
using namespace std;

#define EXIT_SUCCESS 0


int main() {

  double lampotila;
  char yksikko[1];
  char *fahrenheit = "F";
  char *celsius = "C";
cout << "Syota lampotila: ";
cin >> lampotila;
cout << "Syota yksikko (F=Fahrenheit, C=Celsius): ";
cin >> yksikko;





if (!strcmp(yksikko, celsius)) {
    double lasku1 = lampotila* 1.8 + 32;
    cout<< "Celsius: " << lampotila << " = " << "Fahrenheit: " << lasku1;
}else if (!strcmp(yksikko, fahrenheit)) {
    double lasku2 = (lampotila - 32)* 5/9;
    cout<< "Fahrenheit: " << lampotila << " = " << "Celsius: " << lasku2;

} else {
 cout << "Laita seuraavalla kerralla oikeat arvot.";
}


return EXIT_SUCCESS;
}

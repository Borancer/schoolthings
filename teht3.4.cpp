#include <iostream>
#include <math.h>
#include <string.h>
#include <ctype.h>
using namespace std;

#define EXIT_SUCCESS 0

int main() {

//Kahden luvun laskin, toimii plus, miinus, kerto, jakolasku, neliojuuri ja toisen potenssien laskussa. Kirjoitammala exit ohjelma lopetta itsensä.
double Numero1;
double Numero2;

char Lasku[10];
char Plus[] = {'+', '\0'};
char Miinus[] = {'-', '\0'};
char Kertoma[] = {'*', '\0'};
char Jakolasku[] = {'/', '\0'};
char Neliojuuri[] = {'s','q','r','t','\0'};
char Nelio1[] = {'s','q','u','a','r','e','\0'};
//char kolmiopintaala[] = {'t','r','i','a','n','g','l','e','r','e','a','\0'};
char Logarytmi[] = {'l','o','g','\0'};
char EXIT[] = {'e','x','i','t','\0'};
cout << "Tervetuloa kahden luvun laskimeen! \n";
while (strcmp(Lasku, EXIT)) {
cout << "Valitse laskutoimitus (+,-,*,/,square,log,sqrt tai exit lopettaaksesi. ) ";
cin >> Lasku;
if (!strcmp(Lasku,EXIT)) {
  break;
}
cout << "Kirjoita ensimmainen numero: ";
cin >> Numero1;
if (cin.fail()) {
    break;
}
if (!strcmp(Lasku, Neliojuuri)) {
  double Neliojuuri2 = sqrt(Numero1);
  cout << "Neliojuuren tulos on: " << Neliojuuri2 << endl;
  continue;
} else if (!strcmp(Lasku, Nelio1)) {
  int Nelio2 = Numero1*Numero1;
  cout << "Nelion tulos: " << Nelio2 << endl;
  continue;
} else if (!strcmp(Lasku, Logarytmi)) {
  double Logarytmi2 = log(Numero1);
  cout << "Logarytmin tulos on: " << Logarytmi2 << endl;
  continue;
}
 else {
  cout << "Kirjoita toinen numero: ";
  cin >> Numero2;
  if (cin.fail()) {
  break;
  }
};

if (!strcmp(Lasku, Plus)) {
  int Plus2 = Numero1 + Numero2;
  cout << "Pluslaskun tulos: " << Plus2 << endl;
}else if(!strcmp(Lasku,  Miinus)) {
  int Miinus2 = Numero1 - Numero2;
  cout << "Miinuslaskun tulos: " <<  Miinus2 << endl;
} else if (!strcmp(Lasku, Kertoma)) {
  int Kertoma2 = Numero1 * Numero2;
  cout << "Kertoman tulos: " << Kertoma2 << endl;
} else if (!strcmp(Lasku, Jakolasku)) {
  double Jakolasku2 = Numero1 / Numero2;
  cout << "Jakolaskun tulos: " << Jakolasku2 << endl;
}   else {
  cout << "Tama ohjelma tukee vain naita laskutoimituksia: (+,-,*, /,sqrt,log ja exit toimintoja)" << endl;
  continue;
};

}
return EXIT_SUCCESS;
}

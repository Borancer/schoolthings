#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0


int main() {

  int kilometri;
  int bensahinta;
  int dieselhinta;
  int bensakulutus;
  int dieselkulutus;
  int dieselkayttovero;


cout << "Vuotuinen kilometrimaara: ";
cin >> kilometri;
cout << "Bensan hinta: (litra) ";
cin >> bensahinta;
cout << "Dieselin hinta: (litra) ";
cin >> dieselhinta;
cout << "Bensa-auton kulutus (litraa/100km): ";
cin >> bensakulutus;
cout << "Dieselauton kulutus (litraa/100km): ";
cin >> dieselkulutus;
cout << "Dieselin kayttovoimavero: ";
cin >> dieselkayttovero;

int bensaautokaava = kilometri * bensakulutus * bensahinta;
int dieselautokaava = kilometri * dieselkulutus * dieselhinta + dieselkayttovero;

cout << "\n Bensa-auton matkakulut vuodessa: " << bensaautokaava;
cout << "\n Diesel-auton matkakulut vuodessa: " << dieselkayttovero;

if (bensaautokaava > dieselautokaava) {
      cout << "\n Bensa tulee halvemmaksi";
} else {
      cout << "\n Diesel tulee halvemmaksi";
};



  return EXIT_SUCCESS;





}

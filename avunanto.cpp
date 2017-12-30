#include <iostream>

using namespace std;




int main()

{

  double luku1;

  double luku2;

  double luku3;

  double luku4;

  double luku5;

  int luku6;

  int luku7;

  double tulos1;                                           // Bensa-auton hinta

  double veroton;

  double vero;                                              // Dieselauton vero

  double tulos2;                                           //Dieselauton hinta

  char malli;                                                  //Määrittää dieselauton mallin
  double tulos3;                                           //lopullinen tulos





                       cout << "Syota arvioitu vuotuinen kilometrimaara: ";

                       cin >> luku1;

                       cout << "syota bensiinin hinta: ";

                       cin >> luku2;

                       cout << "syota dieselin hinta: ";

                       cin >> luku3;

                       cout << "syota bensa-auton kulutus (l/100km): ";

                       cin >> luku4;

                       cout << "syota dieselauton kulutus (l/100km): ";

                       cin >> luku5;





                       tulos1 = luku1 * luku2 * luku4;

                       veroton = luku1 * luku3 * luku5;



                       cout << "jos dieselauto on henkiloauto kirjoita 'henkilo' jos paketti tai matkailuauto kirjoita 'paketti'";

                       cin >> malli;

                       if (malli == 'henkilo') {

                                              cout << "syota dieselauton paino pyoristettyna ylospain lahimpaan 100 kiloon (esim auton todellinen paino 1896kg syota 1900kg): ";

                                              cin >> luku6;

                                              tulos2 = luku6 / 100 * 20.075;

                       }//Diesel käyttövero henkilöautolle on 5,5 senttiä per alkava 100kg per päivä. 0,055*365=20,075

                       else if (malli == 'paketti') {

                                              cout << "syota dieselauton paino pyoristettyna ylospain lahimpaan 100 kiloon (esim auton todellinen paino 1896kg syota 1900kg): ";

                                              cin >> luku7;

                                              tulos2 = luku7 / 100 * 3.285;

                 }//Diesel käyttövero pakettiautolle on 0,9 senttiä per alkava 100kg per päivä. 0,009*365=3,285



                       tulos3 = tulos2 - tulos1;

                       if (tulos3 < 0)

                                              cout << "Diesel vaihtoehto on " << tulos3 << " euroa halvempi";

                       else

  cout << "Bensa vaihtoehto on " << tulos3 << " euroa halvempi";
cout << "kaynnista ohjelma uudestaan halutessasi laskea toisten autojen tiedot" << endl;






                       return 0;

}

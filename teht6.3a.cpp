#include <iostream>
#include <limits>
using namespace std;
#define EXIT_SUCCESS 0
int main() {

char paske[50];
// = {'e','t','u','n','i','m','i'};
char paske2[50];
char paske3[50];
char paske4[50];
char paske5[50];

cout << "Syota etunimi: ";
cin >> paske;
cout << "Syota sukunimi: ";
cin >> paske2;
cout << "Syota kadun nimi: ";
cin >> paske3;
cout <<"Syota postinumero: ";
cin >> paske4;
cout << "Syota kunta: ";
cin >> paske5;

cout << "Osoitteesi on: " << paske << " " << paske2 << " " << paske3 << " " <<  paske4 << " "<< paske5;

if (*paske < *paske2) {

  cout << endl << "Etunimesi on ensimmäisenä aakkosina";
}  else
  cout << endl << "Sukunimesi on ensimmäisenä aakkosina";

    return EXIT_SUCCESS;

}

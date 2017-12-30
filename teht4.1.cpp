#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0


int main() {

  double paino;
  double pituus;

cout << "Kayttajan paino (kg): ";
cin >> paino;
cout << "Kayttajan pituus (cm): ";
cin >> pituus;


double painoindeksi = paino / (pituus*pituus);

if (painoindeksi < 20.7) {
    cout << "Painoindeksisi on: " << painoindeksi << "\nalipainoinen";
} else if (painoindeksi <= 26.4) {
    cout << "Painoindeksisi on: " << painoindeksi << "\nnormaali";
}else if (painoindeksi < 27.8) {
    cout << "Painoindeksisi on: " << painoindeksi << "\nlievää ylipainoa";
}else if (painoindeksi < 31.1) {
    cout << "Painoindeksisi on: " << painoindeksi << "\nylipainoa";
} else {
    cout << "Painoindeksisi on: " << painoindeksi << "\npaljon ylipainoa";

}


return EXIT_SUCCESS;
}

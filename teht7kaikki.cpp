#include<iostream>
using namespace std;


int summa (int, int);
int nelio (int);
int suorakaide (int, int);
float matkanhinta (float, float, float);
int palkka (int);


int main() {

int tuntimaara;
int luku1 = 5;
int luku2 = 10;
int leveys = 10;
int korkeus = 5;
float kilometrimaara;
float autokulutus;
float polttoainehinta;
cout << "Kilometrimaara: ";
cin >> kilometrimaara;
cout << "Autokulutus: ";
cin >> autokulutus;
cout << "Polttoaineen hinta: ";
cin >> polttoainehinta;

cout << endl << "Työtuntimaara viikossa: ";
cin >> tuntimaara;

int kaksi = summa(luku1, luku2);
int tulos1 = nelio(luku1);
int pinta = suorakaide(leveys, korkeus);
float maksaa = matkanhinta(kilometrimaara, autokulutus, polttoainehinta);
int ansio = palkka(tuntimaara);

cout << "Summa on: ";
cout << kaksi << endl;
cout << "Nelio on: ";
cout << tulos1 << endl;
cout <<"Pinta-ala on: ";
cout << pinta << endl;
cout << "Matkan hinta on: ";
cout << maksaa << endl;
cout << "Palkkasi on: ";
cout << ansio << endl;
return 0;
}

int summa( int luku1, int luku2 ) {
return luku1 + luku2;

}

int nelio (int luku1 ) {
  return luku1*luku1;
}

int suorakaide (int leveys, int korkeus ) {

return leveys*korkeus;
}

float matkanhinta (float kilometrimaara, float autokulutus,float polttoainehinta) {

  return kilometrimaara*autokulutus*polttoainehinta;
}

int palkka (int tuntimaara) {
    if (tuntimaara <= 30) {
        return tuntimaara*10;

    } else {
        return tuntimaara*15;
    }

}

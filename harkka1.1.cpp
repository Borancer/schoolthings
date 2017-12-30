#include <iostream>
#include <limits>
using namespace std;

#define EXIT_SUCCESS 0


int main() {

  int K_PISTE = 116;
  int hyppypituus;
  int pituuspiste;


 cout << "Hypyn pituus? ";
  cin >> hyppypituus;
while (cin.fail()){
  cout << "Hypyn pituus? ";
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin >> hyppypituus;
}

 if (hyppypituus == K_PISTE) {
    pituuspiste = 60;

} else if (hyppypituus > K_PISTE) {
  pituuspiste = hyppypituus *1.8;

} else if (hyppypituus < K_PISTE) {
  pituuspiste = hyppypituus *(-1.8);

} else {
  cout << "Miten sait tän aikaseksi?";
}

int tuomari[4];

cout << "Tuomarien antamat tyylipisteet? \n";
for (int i = 0; i < 5; i++) {
  cin >> tuomari[i];


}

int isoinluku = 0;

for(int i=0;i<5;i++)
  {
      if(tuomari[i]>isoinluku)
      isoinluku=tuomari[i];
  }

//jos kaikki luvut ovat yli 1000 niin ei toimi enaa :/
int pieninluku = 1000;

for(int i=0;i<5;i++)
  {
      if(tuomari[i]<pieninluku)
      pieninluku=tuomari[i];
  }

cout << "Pienin arvo on: " << pieninluku << "\n";
cout <<"Suurin arvo on: " << isoinluku << "\n";
int yhteispisteet = tuomari[0] + tuomari[1] + tuomari[2] + tuomari[3] + tuomari[4] - isoinluku - pieninluku + pituuspiste;
cout << "Tuomarien yhteispisteet (ei oteta huomioon isointa ja pieninta arvoa): " << yhteispisteet;

return EXIT_SUCCESS;
}

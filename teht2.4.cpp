#include <iostream>
using namespace std;


int main() {

int Painoraja;
int Paino1;
int Paino2;
int Paino3;
int Paino4;


cout << "Syota hissin painoraja (kg): ";
cin >> Painoraja;
cout << "Syota ensimmaisen henkilon1 paino (kg): ";
cin >> Paino1;
cout << "Syota toisen henkilon1 paino (kg): ";
cin >> Paino2;
cout << "Syota kolmannen henkilon1 paino (kg): ";
cin >> Paino3;
cout << "Syota neljannen henkilon1 paino (kg): ";
cin >> Paino4;
int Kokonaispaino = Paino1 + Paino2 + Paino3 + Paino4;
int Tarvelaihduttaa = Kokonaispaino - Painoraja;


if (Painoraja >= Kokonaispaino) {
  cout << "Hissi on teidan kaytettavissanne! \n";
} else {
  cout << "Ylipainoa, hissia ei saa kayttaa!!! \n";
  cout << "Laihduttakaa " << Tarvelaihduttaa << "kg";
}
return 0;




}

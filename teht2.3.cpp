#include <iostream>
using namespace std;


int main() {

int Ihminen1;
int Ihminen2;


cout << "Syota ensimmaisen henkilon pituus: ";
cin >> Ihminen1;
cout << "Syota toisen henkilon pituus: ";
cin >> Ihminen2;
int Pituusero = Ihminen1 - Ihminen2;
int Pituusero2 = Ihminen2 - Ihminen1;


if (Ihminen1 == Ihminen2) {
  cout << "Olette saman pituisia!";
} else if (Ihminen1 > Ihminen2){
  cout << " Henkilo1 on pitempi kuin Henkilo2 \n";
  cout << "Pituusero on: " << Pituusero << " \n";
} else {
  cout << "Henkilo2 on pitempi kuin Henkilo1 \n";
  cout << "Pituusero on: " << Pituusero2 << "\n";

}
return 0;




}

#include <iostream>
#include <limits>
using namespace std;
int main()
{
  int toiminto;
  int massi2;
  int massi3;
  int massi = 0;
cout << "Tervetuloa pankkiin!\n";


while (toiminto != 3) {
  cout << "Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): ";
  cin >> toiminto;
if (cin.fail()){

  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Valitse toiminto (1.Talleta, 2.Nosta, 3.Lopeta): ";
  cin >> toiminto;
}
if (toiminto == 1) {
  cout << "Syota talletettava rahasumma: ";
  cin >> massi2;
  massi = massi + massi2;
  if (massi < 0) {
   massi = 0;
 }
  cout <<  "Tililla on nyt rahaa: " << massi << " \n";
}
if (toiminto == 2 ) {
  cout << "Syota nostettava rahasumma: ";
  cin >> massi3;
  massi = massi - massi3;
  if (massi < 0) {
   massi = 0;
 }
  cout << "tililla on rahaa: " << massi << "\n  ";
} if (toiminto == 3) {
  break ;
}
}
cout << "Nakemiin";


}

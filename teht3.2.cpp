#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0

int main() {

  int luku1;
  int luku2;
  int luku3;


  cout << "Ensimmainen luku: ";
  cin >> luku1;
  cout << "Toinen luku";
  cin >> luku2;
  cout << "Kolmas luku";
  cin >> luku3;

if (luku1 > luku2)  {
  if (luku1 > luku3) {
    cout << "Ensimmainen luku on isoin";
  } else {
    cout << "Kolmas luku on isoin";
  }
  } else {
    if (luku2 > luku3){
        cout << "Toinen luku on isoin";
    }
    else {
      cout << "Kolmas luku on isoin";
    }

}










}

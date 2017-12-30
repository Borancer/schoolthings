#include <iostream>
#include <limits>
using namespace std;
int main()
{

int numero;
while (numero  != 0) {
cout << "Syota numero (jos kirjoitat 0 niin ohjelma breakkaa): ";
cin >> numero;
while (cin.fail()){
  cout << "Syota numero ";
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin >> numero;
}

}
}

#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0


int main() {

  int paino;

cout << "Ykkosluokan postin paino: ";
cin >> paino;

int liikapaino = paino - 2000;

if (paino < 50) {
    cout << "Ensimmaisen luokan postimaksu on 0.60€";
} else if (paino < 100) {
    cout << "Ensimmaisen luokan postimaksu on 0.90€";
}else if (paino < 250) {
    cout << "Ensimmaisen luokan postimaksu on 1.30€";
}else if (paino < 500) {
    cout << "Ensimmaisen luokan postimaksu on 2.1€";
}else if (paino < 1000) {
    cout << "Ensimmaisen luokan postimaksu on 3.50€";
}else if (paino < 2000) {
    cout << "Ensimmaisen luokan postimaksu on 5.50€";
} else {
  cout << "Painoa on liikaa! \n";
  cout << "Vähennä painoa vähintään: " << liikapaino << " grammaa";

}



  return EXIT_SUCCESS;





}

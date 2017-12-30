#include <iostream>
#include <limits>
#include <string.h>
using namespace std;
#define EXIT_SUCCESS 0
int main() {

char paske[50];
char paske2[50];
cout << "Syota ensimmainen stringi: ";
cin >> paske;
cout << "Syota toinen stringi: ";
cin >> paske2;
 if (*paske < *paske2) {

   cout << "Ensimmainen stringi on lähempänä aakkosjärjestystä";
 }  else
   cout << "Toinen stringi on lähempänä aakkosjärjestystä";

 }

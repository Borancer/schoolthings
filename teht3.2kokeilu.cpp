#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0

//toimii myos jos on samanarvoisia lukuja :D (kesti hiukan tehda :D)
int main() {

  int luku1;
  int luku2;
  int luku3;


  cout << "Ensimmainen luku: ";
  cin >> luku1;
  cout << "Toinen luku: ";
  cin >> luku2;
  cout << "Kolmas luku: ";
  cin >> luku3;

if (luku1 > luku2)  {
  if (luku1 > luku3) {
    cout << "Ensimmainen luku on isoin";
  }  else if(luku2 == luku3) {
          if (luku2 > luku1){
            cout << "luku2 ja luku3 ovat suurimmat";
          } else{
            cout << "Kaikki luvut ovat saman suuruisia";
          }
  } else if (luku1 == luku2) {
            if (luku1 > luku3){
              cout << "luku1 ja luku2 ovat samansuuruisia";
            } else {
              cout << "Kaikki luvut ovat saman suuruisia";
            }
  } else if (luku1 == luku3)  {
            if (luku1 > luku2){
              cout << "luku1 ja luku3 ovat suurimmat";
          } else {
            cout << "Kaikki luvut ovat saman suuruisia";
          }
  }
   else {
    cout << "Kolmas luku on isoin";
  }
} else if (luku2 > luku3)
  {
        cout << "Toinen luku on isoin";
    } else if(luku2 == luku3) {
            if (luku2 > luku1){
              cout << "luku2 ja luku3 ovat suurimmat";
            } else{
              cout << "Kaikki luvut ovat saman suuruisia";
            }
    } else if (luku1 == luku2) {
              if (luku1 > luku3){
                cout << "luku1 ja luku2 ovat samansuuruisia";
              } else {
                cout << "Kaikki luvut ovat saman suuruisia";
              }
    } else if (luku1 == luku3)  {
              if (luku1 > luku2){
                cout << "luku1 ja luku3 ovat suurimmat";
            } else {
              cout << "Kaikki luvut ovat saman suuruisia";
            }
    }  else {
      cout << "Kolmas luku on isoin";
    }
}

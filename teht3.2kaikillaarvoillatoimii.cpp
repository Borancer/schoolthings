#include <iostream>
//#include<limits>
using namespace std;

#define EXIT_SUCCESS 0

//toimii myos jos on samanarvoisia lukuja tai jos kaikki luvut ovat samoja
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
} else if (luku2 < luku3) {
        cout << "Kolmas luku on isoin";
    } else if(luku2 == luku3) {
            if (luku2 > luku1){
              cout << "luku2 ja luku3 ovat suurimmat";
            } else{
              cout << "Kaikki luvut ovat saman suuruisia";
            }
    } else if (luku1 == luku2) {
              if (luku1 > luku3){
                cout << "luku1 ja luku2 ovat samansuuruisia";
              }else if (luku3 > luku2) {
                cout << "luku3 on suurin";
              }
              else {
                cout << "Kaikki luvut ovat saman suuruisia";
              }
    } else if (luku1 == luku3)  {
              if (luku1 > luku2){
                cout << "luku1 ja luku3 ovat suurimmat";
            } else if (luku2 > luku1){
                cout << "Toinen luku on suurin";
            }
             else {
              cout << "Kaikki luvut ovat saman suuruisia";
            }
    }  else {
      cout << "Toinen luku on isoin";
    }


return EXIT_SUCCESS;
}

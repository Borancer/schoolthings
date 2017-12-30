#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0


int main() {

  double bruttotulo;
  double kunnallisvero = 0.1975;
cout << "Paljon on bruttotulosi tänä vuonna? (euroina) ";
cin >> bruttotulo;





if (bruttotulo < 16900) {
    double vero = kunnallisvero;
    cout<< "Verosi ovat: " << vero*100 << '%';
} else if (bruttotulo <= 25300) {
  double vero = kunnallisvero + 0.0625;
  cout<< "Verosi ovat: " << vero*100 << '%';
}else if (bruttotulo <= 41200) {
  double vero = kunnallisvero + 0.175;
  cout<< "Verosi ovat: " << vero*100 << '%';
}else if (bruttotulo < 71400) {
  double vero = kunnallisvero + 0.215;
  cout<< "Verosi ovat: " << vero*100 << '%';
} else {
  double vero = kunnallisvero + 0.315;
  cout<< "Verosi ovat: " << vero*100 << '%';

}


return EXIT_SUCCESS;
}

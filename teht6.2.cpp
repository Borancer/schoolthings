#include <iostream>
#include <limits>
using namespace std;
#define EXIT_SUCCESS 0
int main() {

double aika;
cout << "Anna aika sekunteina kilometreinä... ez: ";
cin >> aika;
while (cin.fail()){
  cout << "Anna aika sekunteina: ";
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin >> aika;
}

cout << "Aika   " << "Nopeus (km/h)" << endl << endl;
    for( int i = 0; i <=aika ; i++ ) {

      cout << i << "      " << i*3.6*9.81 << endl;
    }

    return EXIT_SUCCESS;

}

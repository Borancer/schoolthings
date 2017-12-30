#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include <iomanip>  // suoraan precision niin voi tarkastaa piin
using namespace std;

int main()
{

	int tarkkuus;
	double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	cout << "Kuinka monen desimaalin tarkkuuteen haluat laske pi:n? (maksimi 100: )";
	cin  >> tarkkuus;
	cout << setprecision(tarkkuus) << pi << endl;

}

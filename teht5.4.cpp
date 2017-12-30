#include <iostream>
#include <limits>
using namespace std;
int main()
{

double lengthofjump = 0;
int judges[5];
double totalpoints;
double judgescores = 0;
int i = 0;
cout << "Length of jump: ";
cin >> lengthofjump;
while (cin.fail()){
  cout << "Length of jump: ";
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin >> lengthofjump;
}

while (i < 5) {
cout <<  "judge " << i +1 << "'s' score: ";

cin >> judges[i];
if (cin.fail()){

  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
} else {
  judgescores += judges[i];
  i++;
}

}
totalpoints = judgescores + 0.9*hypynpituus;
cout << "Hypyn pisteet: " << totalpointst;
return 0;
}

#include <iostream>
#include <limits>
using namespace std;
int main()
{

double lengthofjump = 0;
int judges[5];
double totalpoints;
double biggestnumber;
double smallestnumber;
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
cout <<  "judge " << i +1 << " \'s score: ";

cin >> judges[i];
if (cin.fail()){

  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
} else {
  judgescores += judges[i];
  ++i;
}
biggestnumber = 0;

for(int i=0;i<5;i++)
  {
      if(judges[i]>biggestnumber)
      biggestnumber=judges[i];
  }

//jos kaikki luvut ovat yli 1000 niin ei toimi enaa :/
smallestnumber = 1000;

for(int i=0;i<5;i++)
  {
      if(judges[i]<smallestnumber)
      smallestnumber=judges[i];
  }


}
cout << "The biggest score of judges is: " << biggestnumber << "\n";
cout <<"The smallest score of judges is: " << smallestnumber << "\n";

totalpoints = judgescores + 0.9*lengthofjump - biggestnumber - smallestnumber;
cout << "Score of jump (not including best judges score and worst ): " << totalpoints;
return 0;
}

#include <iostream>
using namespace std;

main()
{ 
  cout <<"Enter Imposter count:";
   double imposter;
  cin>>imposter;
  cout <<"Enter player count :";
  double player;
  cin>>player;
  double chance;
  chance=100*( imposter/player);
  cout <<"chance of being an imposter:"<<chance<<"%";

  }
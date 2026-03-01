#include <iostream>
using namespace std;

main()
{ 
  cout <<" Enter imposters:";
  double imp;
  cin>>imp;
  cout <<" Enter players:";
  double players;
  cin>>players;
  double chance;
  chance=100*(imp/players);
  cout <<"Chance = "<<chance<<"%";
 
    
    }
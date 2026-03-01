#include <iostream>
using namespace std;

main()
{ 
  cout <<" Enter the current world population:";
  int current;
  cin>>current;
  cout <<" Enter the monthly birth rate (number of births per month):";
  int rate;
  cin>>rate;
  int population;
  population=current+(rate*360);
  cout << "Population in three decades will be :"<<population;
  
    }
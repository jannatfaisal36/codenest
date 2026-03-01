#include <iostream>
using namespace std;

main()
{ 
   cout <<"Enter voltage (in volts):";
   double voltage;
   cin>>voltage;
   cout <<"Enter current (in amperes):";
   double amp;
   cin>>amp;
   double power;
   power=voltage*amp;
   cout <<" The power is "<<power<<" watts";
   
   
  }
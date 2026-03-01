#include <iostream>
using namespace std;

main()
{ 
  cout <<"enter Initial velocity (m/s):";
  int velocity;
  cin>>velocity;
  cout <<"Enter acceleration (m/s^2):";
  int acceleration;
  cin>>acceleration;
  cout <<"Enter time :";
  int time;
  cin>>time;
  int sum;
  sum=velocity+(acceleration*time);
  cout <<"Final velocity is (m/s) :"<<sum;
      }
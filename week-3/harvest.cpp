#include <iostream>
using namespace std;

main()
{ 
  cout <<"Enter vegetable price per kilogram (in coins):";
  double vp;
  cin>>vp;
  cout <<"Enter fruit price per kilogram (in coins):";
  double fp;
  cin>>fp;
  cout <<"Enter total kilograms of vegetables :";
  double kv;
  cin>>kv;
  cout <<"Enter total kilograms of fruits ";
  double kf;
  cin>>kf;
  double coin;
  coin=(kv*vp)+(kf*fp);
  double rps;
  rps=coin/1.94;
  cout <<"Total earnings in rupees (rps) :"<<rps;
   }
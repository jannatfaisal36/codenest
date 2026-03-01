#include <iostream>
using namespace std;

main()
{ 
  cout <<"Number of minutes:";
  int min;
  cin>>min;
  cout <<" Frames oer second :";
  int frame;
  cin>>frame;
  int sum ;
  sum=(min*60)*frame;
  cout <<"Total num of frames :"<<sum;
      }
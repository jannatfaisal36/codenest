#include <iostream>
using namespace std;

main()
{ 
  cout <<"Enter the size of fertilizer bag in pound:";
  int size;
  cin>>size;
  cout <<" Enter  the cost of the bag :";
  int cost;
  cin>>cost;
  cout <<" Enter the area in square feet that can be coverd by the bag:";
  int area;
  cin>>area;
  int pound;
  pound=cost/size;
  cout <<" Cost of fertilizer per pound :$"<<pound<<endl;
  int square;
  square=cost/area;
  cout <<"Cost of fertilizer per square foot :$"<<square;

   }
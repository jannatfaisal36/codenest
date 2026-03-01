#include <iostream>
using namespace std;

main()
{ 
  cout <<" Enter the numbers of sides of the polygon :";
  int polygon;
  cin>>polygon;
  int sum;
  sum=(polygon-2)*180;
  cout <<"The total sum of internal angles of a :"<<polygon<<"-sided polygon is :"<<sum<<"degrees";
     }
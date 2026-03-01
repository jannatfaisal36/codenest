#include <iostream>
using namespace std;

main()
{ 
  cout <<"Number of square meter you can paint:";
  int area;
  cin>>area;
  cout <<" width of single wall (in meter) :";
  int width;
  cin>>width;
  cout <<" height of single wall (in meter) :";
  int height;
  cin>>height;
  int paint;
  paint=area/(height*width);
  cout <<" Number of  walls you can paint :"<<paint;
   }
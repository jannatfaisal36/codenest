 #include <iostream>
using namespace std;

main()
{ 
  cout <<"Enter the name of the person :";
  string name;
  cin>>name;
  cout <<" Enter the target weight loss in kilograms :";
  double weight;
  cin>>weight;
  double sum;
  sum=weight*15;
  cout <<""<<name<<" will need "<<sum<<" days to lose "<<weight<<" by following doctors suggestion";
  
  }
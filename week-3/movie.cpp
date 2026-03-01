#include <iostream>
using namespace std;

main()
{ 
  cout <<"Enter the movie name:";
  string name;
  cin>>name;
  cout <<" Enter the adult ticket price :";
  int adult;
  cin>>adult;
  cout <<" Enter the child ticket price :";
  int child;
  cin>>child;
  cout <<" Enter the number of adult ticket sold :";
  int adultsold;
  cin>>adultsold;
  cout <<" Enter the number of child ticket sold :";
  int childsold;
  cin>>childsold;
  cout <<" Enter the percentage of amount to be donated to charity :";
  double charity;
  cin>>charity;
  int total;
  total=(adult*adultsold)+(child*childsold);
  double donation;
  donation=(charity/100)*total;
  int remaining;
  remaining=total-donation;
  cout <<"---------------------------------------------------------"<< endl;
  cout <<" Movie :"<<name;
  cout <<" Total amount generated from ticket sales :$"<<total<< endl;
  cout <<" Donation to charity (10%) :$"<<donation<< endl;
  cout <<" Remaining amount after donation :$"<<remaining<< endl;
  }
#include <iostream>
using namespace std;

main()
{ 
  cout <<" Enter the number of wins :";
  int wins;
  cin>>wins;
  cout <<"Enter the number of draws :";
  int draws;
  cin>>draws;
  cout <<"Enter the number of losses :";
  int losses;
  cin>>losses;
  int obtain;
  obtain=(wins*3)+(draws*1)+losses;
  cout <<"Pakistan has obtained "<<obtain<<" in asia cup tournament";
    }
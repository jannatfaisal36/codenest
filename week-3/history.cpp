#include <iostream>
using namespace std;

main()
{ 
    cout <<"Enter the person's age:";
    int age;
    cin>>age;
    cout <<" Enter number of times they've moved:";
    int time;
    cin>>time;
    int sum;
    sum=age/(time+1);
    cout <<" Average num of year lived in same house :"<<sum;
   }
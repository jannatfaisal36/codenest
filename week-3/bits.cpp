#include <iostream>
using namespace std;

main()
{ 
   cout <<"Enter the size in megabytes (MB) :";
   int megabytes;
   cin>>megabytes;
   int mb=1024;
   int kb=1024;
   int byte=8;
   byte=megabytes*kb*mb*byte;
   cout <<"MB is equivalent to"<<byte<<"bits";
   
  }
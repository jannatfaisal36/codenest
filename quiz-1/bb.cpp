#include <iostream>
using namespace std;

main()
{ 
  cout <<" Enter patient name :";
  string name;
  cin>>name;
  cout<<"Enter patient ID:";
  int id;
  cin>>id;
  cout<<"Number of medicens:";
  int numofmed;
  cin>>numofmed;
  cout<<"total cost:";
  int tc;
  cin>>tc;
  int handlingfee=300;
  int servicecharge=0.5;
  int totalamount;
  totalamount= tc + handlingfee * servicecharge ;
  int gst=0.12;
  int totalbill;
  totalbill=totalamount* gst ;
  cout<<"-------------------------------------"<<endl;
  cout <<"Patient name:"<<name <<endl;
  cout <<"Patient ID:"<<id<<endl;
  cout <<"Number of medicens:"<<numofmed<<endl;
  cout <<"Total cost:"<<tc<<endl;
  cout <<"Service charges:"<<servicecharge<<endl;
  cout <<"Handling fee:"<<handlingfee<<endl;
  cout <<"Tax amount:"<<gst<<endl;
  cout <<"Total bill:"<<totalbill<<endl;
    }

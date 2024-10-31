#include <iostream>
#include <fstream>
#include "car.h"
using namespace std;

void PopulateInventory(car carInventory){
  //Input:Gets array from main to put info into
  //Process: Opens file and puts 
  //Declarations-LC
  ifstream inFS;
  
//Open car inventory file to get input from-LC
  inFS.open("CarInventory.txt");
  //Check if file opened successfully -LC
  if(!inFS.is_open()){
    cout << "Could not open CarInventory.txt" << endl;
  }//end if
  while(!inFS.eof()){
    //Need to figure out how to put in sperate objects -LC
    getline(inFS,price);
    getline(inFS,year);
    getline(inFS,make);
    getline(inFS,model);
    getline(inFS,Vin)
  }//end while
}//end PopulateInventory
#include <iostream>
#include <fstream>
#include <string>
#include "car.h"
using namespace std;

void PopulateInventory(Car unsoldCars[]) {
  //Input:Gets array from main to put info into-LC
  //Process: Opens file and puts info from file into object that then gets added to the array -LC
  // Output: function returns void -LC
  //Declarations-LC
  ifstream inFS;
  int currIndex = 0;
  string priceString;
  string yearString;
  string vinString;
  int price = 0;
  int year = 0;
  string make;
  string model;
  int vin;
//Open car inventory file to get input from-LC
  inFS.open("CarInventory.txt");
  //Check if file opened successfully -LC
  if(!inFS.is_open()){
    cout << "Could not open CarInventory.txt" << endl;
  }//end if
  while(!inFS.eof()){
      //get info from file and convert strings into nums if needed-LC
    getline(inFS,priceString);
    price = stoi(priceString);
    getline(inFS,yearString);
    year = stoi(yearString);
    getline(inFS,make);
    getline(inFS,model);
    getline(inFS, vinString);
    vin = stoi(vinString);
    //creates car variable to store data in-LC
    Car currCar(price, year, make, model, true, vin);
    //car gets put into the array at currIndex-LC
    unsoldCars[currIndex] = currCar;
    //Increment currIndex for next iteration of loop -LC
    currIndex += 1;
  }//end while
  return;
}//end PopulateInventory

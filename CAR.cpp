#include "car.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Car::Car(double price, int year, string make, string model,bool sold, int vin) {
   carPrice = price;
   carYear = year;
   carMake = make;
   carModel = model;
   carSold = sold;
   carVin = vin;
}

void Car::carDetails() {
   cout << << "Car Year: " << carYear << ". Car Make and Model: " << carMake << " " << carModel << ". Car Price: $" << carPrice << ". Car VIN: " << carVin;
}
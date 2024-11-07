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

int Car::getPrice() {
   return carPrice;
}

int Car::getYear() {
   return carYear;
}

string Car::getMake() {
   return carMake;
}

string Car::getModel() {
   return carModel;
}

int Car::getVin() {
   return carVin;
}
void Car::carDetails() {
   cout << "Car Year: " << carYear << ". Car Make and Model: " << carMake << " " << carModel << ". Car Price: $" << carPrice << ". Car VIN: " << carVin;
}

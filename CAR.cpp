#include "car.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Car::Car(double price, int year, string make, string model, string available, int vin) {
   carPrice = price;
   carYear = year;
   carMake = make;
   carModel = model;
   carAvailable = available;
   carVin = vin;
}

void Car::displayInfo() {
   cout << "Car Price: $" << carPrice;
   cout << "\nCar Year: " << carYear;
   cout << "\nCar Make and Model: " << carMake << " " << carModel;
   cout << "\nIs Car Available? " << carAvailable;
   cout << "\nCar VIN: " << carVin;
}
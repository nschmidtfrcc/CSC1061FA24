#include "car.h"

#include <iostream>
#include <string>

using namespace std;

Car::Car() {
   carPrice = 0;
   carYear = 0;
   carMake = "X";
   carModel = "X";
   carSold = true;
   carVin = 0;
}
Car::Car(double price, int year, string make, string model,bool sold, int vin) {

   carPrice = price;
   carYear = year;
   carMake = make;
   carModel = model;
   carSold = sold;
   carVin = vin;
}

void Car::setPrice(int price) {
   carPrice = price;
}
int Car::getPrice() {
   return carPrice;
}

void Car::setYear(int year) {
   carYear = year;
}

int Car::getYear() {
   return carYear;
}

void Car::setMake(string make) {
   carMake = make;
}

string Car::getMake() {
   return carMake;
}

void Car::setModel(string model) {
   carModel = model;
}

string Car::getModel() {
   return carModel;
}

void Car::setSold(bool sold) {
   carSold = sold;
}

bool Car::getSold() {
   return carSold;
}

int Car::getVin() {
   return carVin;
}
void Car::carDetails() {
   cout << << "Car Year: " << carYear << ". Car Make and Model: " << carMake << " " << carModel << ". Car Price: $" << carPrice << ". Car VIN: " << carVin;
}

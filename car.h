#ifndef car_h
#define car_h

#include <string>

using namespace std;

class Car {
   public:
      Car(int price, int year, string make, string model, string available, int vin);
      void displayInfo();
   private:
      int carPrice;
      int carYear;
      string carMake;
      string carModel;
      string available;
      int carVin;
};

#endif
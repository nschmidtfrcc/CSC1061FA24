#ifndef car_h
#define car_h

#include <string>

using namespace std;

class Car {
   public:
      Car(int price, int year, string make, string model, bool sold, int vin);
      void carDetails();
      int getPrice();
      int getYear();
      string getMake();
      string getModel();
      int getVin();
   private:
      int carPrice;
      int carYear;
      string carMake;
      string carModel;
      bool carSold;
      int carVin;
};

#endif
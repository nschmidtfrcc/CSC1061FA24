#ifndef car_h
#define car_h

#include <string>

using namespace std;

class Car {
   public:
      Car();
      Car(int price, int year, string make, string model, bool sold, int vin);
      void carDetails();
      int getPrice();
      int getYear();
      string getMake();
      string getModel();
      void setSold(bool sold);
      bool getSold();
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
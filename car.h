#ifndef car_h
#define car_h

#include <string>

using namespace std;

class Car {
   public:
      Car();
      Car(double price, int year, string make, string model, bool sold, int vin);
      void carDetails();
      void setPrice(double price);
      double getPrice();
      void setYear(int year);
      int getYear();
      void setMake(string make);
      string getMake();
      void setModel(string model);
      string getModel();
      void setSold(bool sold);
      bool getSold();
      int getVin();
   private:
      double carPrice;
      int carYear;
      string carMake;
      string carModel;
      bool carSold;
      int carVin;
};

#endif
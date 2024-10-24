#include <iostream>
//#include "Car.h"
using namespace std;

int displayMenu();

int main(int argc, char* argv[]) {
   //Declarations IF
   int userChoice;
   bool usingProgram = true;
   
   //Load in car inventory information
   
   //Display menu
   while(usingProgram) {
      switch (displayMenu()) {
         case 1:
            break;
         case 2:
            break;
         case 3:
            break;
         case 4:
            break;
         case 5:
            break;
         case 6:
            usingProgram = false;
            break;
         default:
            cout << "displayMenu returned an integer that was not a selection" << endl;
            usingProgram = false;
            break;
      }//end switch
   }//end while
   

   
   //repeat
   
   //export car inventory information

}//end main

int displayMenu() {
   cout << "displayMenu func." << endl;
   return 8;
}//end display menu
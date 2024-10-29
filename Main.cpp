#include <iostream>
//#include "Car.h"
using namespace std;

int displayMenu();

/*     CarDealershipMain
Input: The program will expect numbers as input to traverse the menus and reach the desired function. 
   Then the user will be prompted for specific input within each function. Input required in the search functionality 
   is the make, model or year being searched for. Input required in the sell car functionality is the VIN number.
   Input of a 6 is also required to exit the program
   
Process: This program will populate two arrays with the information of the unsold and sold cars from external files
   Then the program will expect numbers as input to traverse the menus and reach the desired function. 
   Then the user will be prompted for specific input within each function. This programs functions
   include: A function that displays the information of the sold and unsold cars. Searching the lists of sold 
   and unsold cars to find cars based on make, model, and yea. Another function to sell a car moving it
   from the unsold list to the sold car list. Then the function to display the Gross Sales for all of the 
   cars sold during this instance of the program. Then whenever the program is exitted, the inventory of the 
   sold and unsold cars is exportted to external files.

Output:

*/

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

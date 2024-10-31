#include <iostream>
#include "car.h"
using namespace std;


/* displayMenu
Name: Isaac Seyer

Input: The user will input an integer between 1 and 6 (inclusive) to choose an option

Process: The function first initializes the variable to store the user's choice, then displays the menu. The function then asks for 
the user's input and checks if it is a valid answer. If it is not, the function asks for the user's input again and clarifies what 
are valid inputs, then checks again. If the input is valid, it returns the user's input;

Output: an integer ranging from 1-6 (inclusive)
*/
int displayMenu() {
   // variable for user input IS
   int choice = 0;
   // following six lines display menu IS
   cout << "1. Display Available Car Information" << endl;
   cout << "2. Display Sold Car Information" << endl;
   cout << "3. Search Available Inventory" << endl;
   cout << "4. Sell Car" << endl;
   cout << "5. Display Gross Sales" << endl;
   cout << "6. Exit Program" << endl;
   cout << "Enter choice as integer: ";
   //get user input, then checks if it is valid IS
   cin >> choice;
   while ((choice < 1 ) || (choice > 6)) {
      cout << "Please enter an integer 1-6" << endl;
      cin >> choice;
   }// end while IS
   
   return choice;

}// end menuDisplay IS

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

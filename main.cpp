#include <iostream>
#include "car.h"
using namespace std;

/*     displayCarInfo           --Isaiah Fite--
Parameters: The function expects a list of cars
   
Process: The function iterates through the list of the cars and displays the information 
   of each individual car in the list. No changes are made to the list

Return: The function displays the information of each individual car in the list

*/
void displayCarInfo(car list[]) {
   int index;
   int listSize = (sizeof(list)/sizeof(list[0]);
   for (index = 0; index < listSize; ++index) {
      list[index].carDetails();
      cout << endl;
   }//end for
   return;
}//end displayCarInfo

 /*
   parameter: contain totalSales EP
   prossess: will get called and will display the final total gross sales EP 
   return value: it will return the final gross sale EP 
   */ 
   void displayGrossSales(double totalSales) { // void function to display gross sales EP 
   cout << " total gross sales: " << totalSales << endl; 
           } //end void EP 


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

Output: Each time this program runs the menu is displayed and there is a possiblity for each function to run. Depending 
   on the functions selected there will be a different output. From the different functions you can expect:
   A list of car information when you display the information of sold or unsold cars.
   Prompts for the type of search and a display of the search result when searching for a car.
   Prompts the user for the to be sold car's VIN number as well as conformation or not for whether the car has been sold.
   when using the sell car functionality.
   Then a display of the gross sales for the day when gross sales is selected.
   Output will cease as soon as the program is exited in the main menu by the user.
*/

int main(int argc, char* argv[]) {
   //Declarations IF
   Car soldCars[10]
   Car unsoldCars[10];
   int userChoice;
   bool usingProgram = true;
   double totalSales = 0.0; 
   
   //Load in car inventory information
   
   //Display menu and functionality selection
   userChoice = displayMenu();
   while((userChoice > 0) && (userChoice < 6)) {
      switch (userChoice) {
         // Display Available Car Information IS
         case 1:
            displayCarInfo(unsoldCars);
            break;
         // Display Sold Car Information IS
         case 2:
            displayCarInfo(soldCars);
            break;
         // Search Available Inventory IS
         case 3:
            break;
         // Sell Car
         case 4:
            break;
         // Display Gross Sales
         case 5:
            displayGrossSales(totalSales); //calls total gross sales EP
            break;
         default:
            cout << "This is an unacceptable selection." << endl;
            break;
      }//end switch
      userChoice = displayMenu();      //redisplay menu and update the selection
   }//end while
   
   //export car inventory information

}//end main

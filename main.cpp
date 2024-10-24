#include <iostream>
#include "Car.h"
using namespace std;


/*
Name: Isaac Seyer

Input: The user will input an integer between 1 and 6 (inclusive) to choose an option

Process: The function first initializes the variable to store the user's choice, then displays the menu. The function then asks for 
the user's input and checks if it is a valid answer. If it is not, the function asks for the user's input again and clarifies what 
are valid inputs, then checks again. If the input is valid, it returns the user's input;

Output: an integer ranging from 1-6 (inclusive)
*/
int menuDisplay() {
   // variable for user input IS
   int choice = 0;
   // following six lines display menu IS
   cout << "1. Display Available Car Information" << endl;
   cout << "2. Display Sold Car Information" << endl;
   cout << "3. Search Available Inventory" << endl;
   cout << "4. Sell Car" << endl;
   cout << "5. Display Gross Sales" << endl;
   cout << "6. Exit Program" << endl;
   
   //get user input, then checks if it is valid IS
   cout << "Enter choice as integer: ";
   cin >> choice;
   while (choice < 1 || choice > 6) {
      cout <<"Please enter an integer 1-6" << endl;
      cin >> choice;
   }// end while IS
   return choice;

}// end menuDisplay IS

int main(int argc, char *argv[]) {
   return 0;
}// end main IS
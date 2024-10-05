/*This file will hold a basic script for a UI that will display a menu 
then use input from user to display each option.*/

    //Header Files
#include <stdio.h>;

    //Begins the Main Function
int main(){
    //Variables
 int UserInput; // This is the option the user will select.

 do {
    printf("TITLE\n"); // Menu starts here
    printf("\n");
    printf("1. Option One\n");
    printf("2. Option Two\n");
    printf("3. Option Three");
    printf("\n");
    printf("Press the NUMBER for which option you want..."); // Request user Input
    scanf('%d', UserInput); // Storing User input

 switch(UserInput) {
    case 1:
        printf("You chose Option One...\n");
     break;
    case 2:
        printf("You chose Option Two...\n");
     break;
    case 3:
        printf("You chose Option Three..\n");
        printf("Last case closes the menu!\n");
     break;
    default:
        if (UserInput < 1 || UserInput > 3){
         printf("You sure that was A VALID number?..\n");
         printf("try again!\n");
        } continue;
 
   }
 } while (UserInput == 3); {
    printf("Thanks for playing!\n");
 }

}// ends the MAIN FUNCTION


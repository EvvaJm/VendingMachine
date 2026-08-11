
#include <stdio.h>

int main (void){

// variables 
int choice;
int price; 
  
// this section prints out the menu for the user 
printf("*** Please Make A Selection***\n");
printf("1. Chips - $2\n2. Chocolate Bar - $1.50\n3. Pop - $1.25\n4. Water - $1\n");
printf(" Enter your choice: ");
scanf("%d", &choice);

// Makes sure the input is valid
while (choice < 1 || choice > 5){
printf("ERROR: Invalid number\n");
printf(" Enter your choice: ");
scanf("%d", &choice);
}

// sets the price variable 
if ( choice == 1){
  price = 200;
} else if (choice == 2) {
  price = 150;
} else if (choice == 3){
  price = 125;
} else {
  price = 100;
} 

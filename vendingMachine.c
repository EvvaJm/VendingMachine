
#include <stdio.h>

int main (void){

// variables 
int chips = 200;
int chocolateBar = 150;
int pop = 125;
int water = 100;
int choice;
  
// this section prints out the menu for the user 
printf("*** Please Make A Selection***\n");
printf("1. Chips - $2\n2. Chocolate Bar - $1.50\n3. Pop - $1.25\n4. Water - $1\n");
printf(" Enter your choice: ");
scanf("%d", &choice);
printf("%d", choice);
  return 0;
}

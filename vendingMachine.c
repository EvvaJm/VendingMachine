
#include <stdio.h>

int main (void){

// variables 
int choice;
int price; 
int coins;
int total = 0;
  
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

  
while (total < price) {
  
  printf("Please enter your Canadian coins (5,10,25,1 or 2) one at a time\n");
  printf("coins: ");
  scanf ("%d", &coins);

  if (coins == 5){
     total += 5;
  }

  else if (coins == 10){
    total +=10;
    
  } else if (coins == 25) {
    total += 25;
    
  } else if (coins == 1) {
    total += 100;
    
  } else if (coins == 2) {
    total += 200;
    
  } else {
    printf("ERROR: Please Enter a Valid Coin");
  }

//Test 
  printf("%d", total);

  return 0; 
} 
}


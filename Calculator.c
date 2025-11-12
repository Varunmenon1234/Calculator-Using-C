#include <stdio.h>
#include <math.h>

void print_menu();
int main(){
  int choice;
  double first, second, result;

  while(1){
    print_menu();
    scanf("%d", &choice);
       if (choice == 7){
        break;
      }
    printf("\nPlease enter the first number: ");
    scanf("%f", &first);
    printf("\nPlease enter the second number: ");
    scanf("%f", &second);

    switch(choice)
    {

      case 1:  //Add
        result = first + second;
        break;
      case 2:  //Subtract
        result = first - second;
        break;
      case 3:  //Multiply
        result = first * second;
        break;
      case 4:  //Divide
        result = first / second;
        break;
      case 5:  //Modulus 
        result = (int)first % (int)second;
        break;
      case 6:  //Power
        result = first ^ second;
        break;

      default:
        break;
    }
    printf("\nResult of operation is: %.2f", result);
  }
  return 0;
  }

void print_menu(){
  printf("\nWelcome to Simple Calculator\n");
  printf("\nChoose one of the following options:");
  printf("\n1. Addition");
  printf("\n2. Subtract");
  printf("\n3. Multiply");
  printf("\n4. Divide");
  printf("\n5. Modulus");
  printf("\n6. Power");
  printf("\n7. Exit");

  printf("\nNow, enter your choice: ");
}
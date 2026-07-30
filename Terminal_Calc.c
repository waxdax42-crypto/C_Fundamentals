#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n\t==============================================\n");
    printf("\t\tThis Is John's Calculator!!\n");
    printf("\t==============================================\n\n");
    printf("Warning, for ease, ive disabled decimals. Sorry!\n\n");
    
    int num1;
    int num2;
    int operation;
    int answer;
    while(1){
    printf("Enter Number 1: ");
    scanf("%d", &num1);

    printf("Enter Number 2: ");

    scanf("%d", &num2);
    
    printf("Number 1 is:%d\n", num1);
    printf("Number 2 is:%d\n\n\n", num2);
    
    printf("Choose an Operation to perform:\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");

    scanf("%d", &operation);
    
    switch (operation){
    case 1:
        answer = num1 + num2; 
        break;
    case 2:
        answer = num1 - num2;
        break;
    case 3:
    if(num2 != 0){
        answer = num1 / num2;
        }
        else{
        printf("Invalid operation, Division by Zero!\n");
        return 1;
        }
        break;
    case 4:
        answer = num1 * num2;
        break;
      
    default:
    printf("Choose a valid operation!\n");
    
    return 1;
  }
  
  printf("The result is: %d\n\n\n", answer);
  
  printf("Press Crtl+C to exit\n\n\n\n");
  }
    return 0;
}

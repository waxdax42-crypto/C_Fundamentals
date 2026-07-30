#include <stdio.h>
#include<string.h>

int main(){
    printf("\n\t==============================================\n");
    printf("\t\tA Product of the GOAT :)\n");
    printf("\t==============================================\n\n");
    
    struct class{
      int age;
      char name[20];
      char gender;
      } mates;
      
      mates.age = 20;
      strcpy(mates.name,"mark");
      mates.gender = 'M';
      printf("Name is: %s The age is: %d and Gender is: %c\n",mates.name, mates.age, mates.gender);
    return 0;
}

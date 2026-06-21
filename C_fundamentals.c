//This Script should cover the basics of the C programming language...Happy Coding
#include <stdio.h>
#include <stdbool.h>


void add(int add, int sub) {
	printf("Result: %d\n",add + sub);
	}
void subtract(int add, int sub) {
	printf("Result: %d\n",add - sub);
	}
void multiply(int add, int sub) {
	printf("Result: %d\n",add * sub);
	}	

int main(){
//Type conversion...	
	int x = 5;
	float y = (float) x;
	
	printf("%.2f\n", y);
	
//Constants
	const int NUM = 35;
//num_1 = 20;
	printf("%d\n", NUM);

//Operators(we'll use the already declared variables, x and NUM)
	int a1 = x+NUM;
	printf("%d + %d = %d\n",x,NUM,a1);
	int a2 = x*NUM;
	printf("%d * %d = %d\n",x,NUM,a2);
	int a3 = x|NUM;
	printf("%d | %d = %d\n",x,NUM,a3);
	int a4 = x&&NUM;
	printf("%d && %d = %d\n",x,NUM,a4);
	
	
	bool Isold = 'y';
	printf("%b\n",Isold);
	
//now we will go into Control statements... 
//if...else
	int wan = 60;
	if(wan > 55) {
		printf("I am Old enough\n");
		}
	else {
		printf("I'm not yet there\n");
		}
		
//The If...else can be written in shorthand, watch
	int yt = 18;( yt>= 18) ? printf("You are Qualified\n") : printf("You are still Young\n");
//switch
	int pop = 52;
	switch(pop) {
		case 20: printf("Hello\n");
		break;
		case 52: printf("Nice one\n");
		break;
		case 70: printf("your'e there/n");
		break;
		default: printf("real nice one/n");
	}
//while loop
	int q;
	while(q < 5) {
		printf("This is trial number:%d\n", q+1);
		q++;
	}	
//for loop
	int w;
	for(w > 5; w<5; w++) {
		printf("Hello person number %d\n", w+1);

	}
//arrays(a collection of related variables)
	int ages[]={12,56,32,4,1,21,84,65,23,98};
	int length = sizeof(ages)/sizeof(ages[0]);
	int i;
	printf("The size of this array is: %d\n",length);//the length is 10
	
//get the size of the array in bytes
	printf("The size of the array in bytes is: %zu\n", sizeof(ages));
//looping through the array...
	for(i=0;i<length; i++) {
		printf("This index[%d] has array: %d\n",i, ages[i]);
	}

//strings(a collection of characters)
	char name[20];
	printf("Enter your name: ");
//The fgets function is used to scan for the input, just like scanf, but, it can accept multiple words
	fgets(name, sizeof(name), stdin);
	printf("Hello %s",name);
	
//memory addresses(pointers)
	int age = 52;
	printf("The age 52 is in memory address: %p\n",&age);
	
	
//I didn't quite get the pointers so, i did it basically
	int pt = 10;
	int *ptr = &pt;
	printf("Pointing to: %d\n",*ptr);	

//Now we'll dive into functions: A simple calculator...
/*	void add(int add, int sub) {
	printf("Result: %d",add + sub);
	}
void subtract(int add, int sub) {
	printf("Result: %d",add - sub);
	}
void multiply(int add, int sub) {
	printf("Result: %d",add * sub);
	}					//Note that this whole code is at the beginning of the code

*/

	int choice, moja = 50, mbili = 12;
	void (*operations[3])(int, int) = {add, subtract, multiply};
	
  printf("First= %d, Second = %d\n\n", moja, mbili);
  printf("Choose an operation:\n");
  printf("0: Add\n1: Subtract\n2: Multiply\n");
  scanf("%d", &choice);
	
	if (choice >= 0 && choice < 3) {
    operations[choice](moja, mbili);
  } else {
    printf("Invalid choice!\n");
  }

//creating, opening and editing files...
//instead of the "w" mode which overwrites content, the "a" mode is used to append content to the file.

	FILE *myFile;
	myFile = fopen("myfile.txt","w");
	fprintf(myFile, "Hello guys, my name is John Abel");
	fclose(myFile);



















	

return 0;

}
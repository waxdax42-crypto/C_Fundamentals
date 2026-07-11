#include <stdio.h>

int main(){
	int matrix[] = {1,2,3 ,4,5,6};
	int rows = 2;
	int columns = 3;
	
	int input[3] = {7,8,9};
	int output[] = {0};
	for(int r = 0; r< rows; r++) {
		for(int c = 0; c< columns; c++) {
			int idx = r * columns + c;
			printf("\t%d\t", matrix[idx]);
			}
			printf("\n");
		}
		printf("Now we will multiply the matrix with M2[7,8,9]\n");
		
		for(int r = 0; r< rows; r++) {
			for(int c =0; c < columns; c++) {
				int idx = r * columns +c;
				output[r] += matrix[idx] * input[c];
			}
			printf("\t%d\t\n", output[r]);
	}
	return 0;
}
#include <stdio.h>

int main(){
	
	int numArr[8], outputArr[8];
	int i, n; //declaring variables
	
	
	for(i = 0; i < 8; i++){
		
		printf("enter the value %d:", i + 1);
		scanf("%d", &numArr[i]);
		
	}// getting user input for array
	
	
	for(i = 0; i < 8; i++){
		
		printf("%d ", numArr[i]);
		
	} //printing the array
	
	printf("\n");
	
	
	printf("enter the value of n:");
	scanf("%d", &n); //getting user input for n
	
	if(n < 0 || n > 8){
		printf("N should be between 1 and 8");
		return 1; //
	} //checking the n value and handling invalid inputs
	
	
	for(i = 0; i < n; i++){
		
		outputArr[i] = numArr[8 - (n - i)];
		
	} //shifting part 1
	
	for(i = n; i < 8; i++){
		
		outputArr[i] = numArr[i - n];
		
	} //shifting part 2
	
	
	for(i = 0; i < 8; i++){
		
		numArr[i] = outputArr[i];
		
	}
	
	printf("output : \n");
	for(i = 0; i < 8; i++){
		
		printf("%d ", numArr[i]);
		
	} //printing the output

	return 0;
}
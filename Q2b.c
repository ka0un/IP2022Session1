#include <stdio.h>
int main(){
	
	int identityArr[4][4]; //declaring variables
	int i, j;
	
	for(i = 0; i < 4; i++){
		
		printf("Values for row %d\n", i + 1);
		
		for(j = 0; j < 4; j++){
			
			printf("   Enter elemet %d : ", j + 1);
			scanf("%d", &identityArr[i][j]);
			
		}
		
	} //getting user inputs and store them in array
	
	printf("\n");
	
	for(i = 0; i < 4; i++){
		
		
		for(j = 0; j < 4; j++){
			
			printf("%d ", identityArr[i][j]);
			
		}
		
		printf("\n");
		
	} //printing array elements in tebular format
	
	// ij
	// 00 01 02 03
	// 10 11 12 13
	// 20 21 22 23
	// 30 31 32 33
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j < 4; j++){
			
			if(i == j){
				
				if (identityArr[i][j] != 1){
					
					printf("\nthis is not a identity metrix !\n");
					return 0; //terminating the programme if its not a identity metrix
				}
				
			}else{
				
				if (identityArr[i][j] != 0){
					
					printf("\nthis is not a identity metrix !\n");
					return 0;//terminating the programme if its not a identity metrix
					
				}
				
			}
			
		}
		
	} //finding if it is a identity matrix
	
	printf("\nthis is a identity metrix");
	
	return 0;
}
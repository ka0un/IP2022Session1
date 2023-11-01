#include <stdio.h>
int main(){
	
	char char1, char2; //declaring variables
	int numberOfLine, i, j;
	
	printf("Enter 1st character :"); //prompt
	scanf("%c", &char1); //getting user input
	
	printf("Enter 2st character :"); //prompt
	scanf(" %c", &char2); //getting user input
	
	printf("Enter number of lines :"); //prompt
	scanf("%d", &numberOfLine); //getting user input
	
	for(i = 1; i <= numberOfLine; i++){
		
		for(j = 1; j <= i; j++){
			
			if(j % 2){
				printf("%c", char1);
			}else{
				printf("%c", char2);
			}
			
		} //manages number of characters in one line
		
		printf("\n", char1);
	} //manages amount of lines
	
	return 0;
}//main function - programme starts from this function
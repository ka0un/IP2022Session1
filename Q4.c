#include <stdio.h>
int main(){
	
	char studentID[8];
	int answers[4];
	int i, j, numberOfCorrectAnswers;
	
	FILE *fptr;
	fptr = fopen("answers.dat", "w");
	
	
	for (j = 1; j <= 5; j++){
		
		printf("Enter user ID : ");
		scanf("%s", studentID);
		
		for(i = 0; i < 4; i++){
		
			do{
			
				printf("  Question %d : ", i + 1);
				scanf("%d", &answers[i]);
			
				if(answers[i] > 5 || answers[i] < 1){
					printf("Answer Shuld be in between 1 to 5, Try again !\n");
				}
			
			}while(answers[i] > 5 || answers[i] < 1);
		}
		
		fprintf(fptr, "%s  %d %d %d %d", studentID, answers[0], answers[1], answers[2], answers[3]);
		
		if(j < 5){
			
			fprintf(fptr, "\n");
			
		}
	}
	
	fclose(fptr);
	
	FILE *fptr2; //i wanna isolate the case of reading the file
	fptr2 = fopen("answers.dat", "r");
	
	while(!feof(fptr2)){	
	
		numberOfCorrectAnswers = 0;
		
		fscanf(fptr2, "%8s %d %d %d %d", studentID, &answers[0], &answers[1], &answers[2], &answers[3]);
		
		if(answers[0] == 1){
			
			numberOfCorrectAnswers++;
			
		}
		
		if(answers[1] == 4){
			
			numberOfCorrectAnswers++;
			
		}
		
		if(answers[2] == 2){
			
			numberOfCorrectAnswers++;
			
		}
		
		if(answers[3] == 3){
			
			numberOfCorrectAnswers++;
			
		}
		
		printf("\nStident ID   Marks\n");
		printf("%s      %d\n", studentID, numberOfCorrectAnswers);
			
		
    }


	fclose(fptr2);
	
	return 0;
}
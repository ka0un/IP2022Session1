#include <stdio.h>
#include <assert.h>

struct depositeType{ //creating a structure for deposite type
	
	int months;
	double rate;
	
}type1, type2, type3, type4; //structure members

float calclnterest (int FDType, float depositAmount); //functions prototypes
float calcTax (float annuallnterest);
void displayDetails (float interest, float taxAmount);

int main(){
	
	int depositeType; //variable declaration
	float depositeAmount;

	type1.months = 12; //assigning values for sturcture variables
	type1.rate = 0.16;
	
	type2.months = 24;
	type2.rate = 0.15;
	
	type3.months = 36;
	type3.rate = 0.155;
	
	type4.months = 48;
	type4.rate = 0.175;
	
	assert(calclnterest(1, 100) == 16);  //assertions
	assert(calclnterest(2, 100) == 15); 
	
	do{
		
		printf("\nFixed Deposit Type : "); //prompt
		scanf("%d", &depositeType); //getting user input
		
		if(depositeType == -1){
			return 0; //programme terminate if input is -1
		}
	
		printf("DepositAmount : "); //prompt
		scanf("%f", &depositeAmount); //user input
	
		displayDetails (calclnterest (depositeType, depositeAmount), calcTax (calclnterest (depositeType, depositeAmount))); //calling the functions
	
	}while (depositeType != -1); //sentinal control loop
	
	return 0;
} //main function - programme starts from this function

void displayDetails (float interest, float taxAmount){
	printf("Armual Interest  Tax amount  Amountpayable\n");
	printf("    %.2f          %.2f         %.2f \n", interest, taxAmount, interest - taxAmount);
} //this fucntion displays the details in a specifc format

float calcTax (float annuallnterest){
	return annuallnterest * 0.05;
} //this function returns tax amount

float calclnterest (int FDType, float depositAmount){
	
	double rate;
	
	switch (FDType){
		case 1:
			rate = type1.rate;
			break;
		case 2:
			rate = type2.rate;
			break;
		case 3:
			rate = type3.rate;
			break;
		case 4:
			rate = type4.rate;
			break;				
	}
	
	return rate * depositAmount;
}// this function returns anual Interest amount
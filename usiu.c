#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int firstNumber; //讀取的第一個數 
	int secondNumber; //讀取的第二個數 
	
	printf("打兩個數字\n");
	printf("答案\n");
	
	scanf("%d%d", &firstNumber, &secondNumber); //讀取兩個整數變數 
	
	if(firstNumber==secondNumber){
		printf("%d is equal to %d\n",firstNumber,secondNumber);
	}
	if(firstNumber!=secondNumber){
		printf("%d is not equal to %d\n",firstNumber,secondNumber);
	}
	if(firstNumber<secondNumber){
		printf("%d is less than %d\n",firstNumber,secondNumber);
	}
	if(firstNumber>secondNumber){
		printf("%d is greater than %d\n",firstNumber,secondNumber);
	}
	if(firstNumber<=secondNumber){
		printf("%d is less than or equal to %d\n",firstNumber,secondNumber);
	}
	if(firstNumber>=secondNumber){
		printf("%d is greater than or equal to %d\n",firstNumber,secondNumber);
	}
	return 0;
} //結束程式 

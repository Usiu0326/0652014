#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int firstNumber; //Ū�����Ĥ@�Ӽ� 
	int secondNumber; //Ū�����ĤG�Ӽ� 
	
	printf("����ӼƦr\n");
	printf("����\n");
	
	scanf("%d%d", &firstNumber, &secondNumber); //Ū����Ӿ���ܼ� 
	
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
} //�����{�� 

#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int fitstnumber;
	int secondnumber;
	
	printf("����ӼƦr\n");
	printf("����\n");
	
	scanf("%d%d", &fitstnumber, &secondnumber);
	
	if(fitstnumber==secondnumber){
		printf("%d is equal to %d\n",fitstnumber,secondnumber);
	}
	if(fitstnumber!=secondnumber){
		printf("%d is not equal to %d\n",fitstnumber,secondnumber);
	}
	if(fitstnumber<secondnumber){
		printf("%d is less than %d\n",fitstnumber,secondnumber);
	}
	if(fitstnumber>secondnumber){
		printf("%d is greater than %d\n",fitstnumber,secondnumber);
	}
	if(fitstnumber<=secondnumber){
		printf("%d is less than or equal to %d\n",fitstnumber,secondnumber);
	}
	if(fitstnumber>=secondnumber){
		printf("%d is greater than or equal to %d\n",fitstnumber,secondnumber);
	}
	return 0;
}

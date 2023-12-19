#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int T;
	
	printf("Enter the temperature");
	scanf("%d",& T);
	
	if(T>0){
		printf("Above the Freezing Point");
	}
	
	else if (T<0){
		printf("Below the Freezing Point");
	}
	
	else {
		printf("Freezing Point");
	}
	return 0;
}

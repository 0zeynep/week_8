#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int F,C ;
	
	printf("Enter fahrenheit temperature");
	scanf("%d",& F);
	
	C=(F-32)/180;
	
	printf("%d",C);
	return 0;
}

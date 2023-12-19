#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,T;
	
	printf("Enter two numbers");
	scanf("%d",& n1);
	scanf("%d",& n2);
	
	T=n1+n2;

	
	printf("%d",T);
	return 0;
}

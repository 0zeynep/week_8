#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f,c;
	
	printf("Enter feet length");
	scanf("%d",& f);
	
	c=f/30 ;
	printf("%d", c);
	return 0;
}

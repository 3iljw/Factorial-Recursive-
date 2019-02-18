#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fac(int n){
	if (n==1 || n==0)
		return 1;
	else
		return n*fac(n-1);
}


int main(int argc, char *argv[]) {
	int n;
	printf("Please type a number : ");
	scanf("%d",&n);
	printf("The anwser is : %d",fac(n));	
	return 0;
}

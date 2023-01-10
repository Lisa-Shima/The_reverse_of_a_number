#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int reverse=0;
	printf("Enter a number:");
	scanf("%d", &n);
	while(n!=0){
	 reverse=reverse*10+n%10;
	  n=n/10;
	}
	printf("Its reverse is:%d", reverse);	
	
	return 0;
}

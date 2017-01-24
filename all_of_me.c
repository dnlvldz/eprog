#include<stdio.h>

int main (){
	int num;
	printf("Input: ");
	scanf("%d", &num);
	
	while(num!=0){
		printf("%d\n", num%10);
		num=(num/=10);
	}
}

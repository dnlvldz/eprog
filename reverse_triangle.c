#include<stdio.h>

main(){
	int i, j, num;
	printf("input num:");
	scanf("%d", &num);
	for(i=num; i>0; i--){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}

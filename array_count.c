#include <stdio.h>

int main(){
	int i, num[5], num_ones=0;
	for(i=0; i<5; i++){ 
		printf("Num%d: ", i+1); 
		scanf("%d", &num[i]); 
	} 
	for (i=0; i<5; i++){
		if(num[i] == 1)
			num_ones++;
	}
	printf("Ones: %d\n", num_ones);
	printf("Zeroes: %d", 5-num_ones);
}

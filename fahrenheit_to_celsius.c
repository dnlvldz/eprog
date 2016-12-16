#include <stdio.h>
#include<math.h>

main(){
	int celsius;
	int Fahrenheit;
	
	printf("Enter the value for celsius:");
	scanf("%d", &celsius);
	printf("%d", Fahrenheit=(celsius*9/5)+32);
}

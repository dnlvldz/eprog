#include <stdio.h>

int main(){
	int i, grades[3], average;
	for(i=0; i<3; i++){ printf("Enter grade %d: ", i+1); 
	scanf("%d", &grades[i]); average=(grades[0]+grades[1]+grades[2])/3; 
	} 
	printf("the average is: %d\n\n", average);
	if( average >=75){
	printf("Pass" );
	}
	else{
    printf("Fail" );
}
}

#include <stdio.h>

int main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");
    int i,a,b,c;
    int numberArray[2];
    
	for (i = 0; i < 2; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    
	for (i = 0; i < 1; i++){
    	printf("%d",c=sqrt((numberArray[0]*numberArray[0])+(numberArray[1]*numberArray[1])));
    }

}

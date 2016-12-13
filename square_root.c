#include<stdio.h>
#include<math.h>

main(){
    int a;
    int b;
    int c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    c = sqrt((a*a) + (b*b));

    printf("The value of c is %d", c);
}

#include <stdio.h>

int main(){

int number;
int number1;

printf("enter 1st number:");
scanf("%d",&number );

printf("enter 2nd number:");
scanf("%d",&number1 );


printf(">>>>>Result<<<<<");


printf("\naddition = %d", number + number1);
printf("\nsubtraction = %d", number - number1);
printf("\nmultiplication = %d", number / number1);
printf("\ndivision = %d", number * number1);


    return 0;
}
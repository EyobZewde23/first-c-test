#include <stdio.h>
#include <ctype.h>
int main(){
    char unit;
    float temp;
    printf("\nIs the unit in (F) or (C): " );
    scanf("%c",&unit);
    unit=toupper(unit);
    if (unit=='C'){
        printf("\nEnter the temp in C: ");
        scanf("%f",&temp);
        temp=(temp*9/5)+32;
        printf("\nThe temp in F is:%f",temp);
    }
    else if(unit=='F'){
        printf("\nEnter the temp in F: ");
        scanf("%f",&temp);
        temp=(temp-32)*5/9;
        printf("\nThe temp in C is: %f",temp);
    }
    else{
        printf("Invalid unit");
    }
}



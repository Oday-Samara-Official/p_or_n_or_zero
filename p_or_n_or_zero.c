#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if (num == 0){
        printf("The number is zero");
    } else if (num >=1){
        printf("Positive");
    } else{
        printf("Negative");
    }

}


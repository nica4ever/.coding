#include <stdio.h>

int main(void);
{
    int a, b, e;
    float c,d;

    printf("Insert number: ");
    scanf("%d" , &a);
    printf("Insert number: ");
    scanf("%d" , &b);

    printf("Insert number: ");
    scanf("%f" , c);
    printf("Insert number: ");
    scanf("%f" , d);

    printf("Select operation:\n");
    printf("1 for addition\n");
    printf("2 for substraction\n");
    printf("3 for division\n");
    printf("4 for multiplication");
    scanf("%d" , e);

    return 0;


}

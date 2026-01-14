/* Computes the dimensional weight of a
 * box from input provided by the user */
// Refined version made by me not from the book
#include <stdio.h>

int main (void)
{
    int height, lenght, width;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter lenght of box: ");
    scanf("%d", &lenght);
    printf("Enter width of box: ");
    scanf("%d", &width);

    printf("Volume(cubic inches): %d\n", height * lenght * width);
    printf("Dimensional weight (pounds): %d\n", (height * lenght * width + 165)/166);

    return 0;
}

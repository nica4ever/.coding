/* Computes the dimensional weight of a 12" x 10" x 8" box */
// Refined by me not from the book
#include <stdio.h>

int main (void)
{
    int height = 8, lenght = 12, width = 10;

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume(cubic inches): %d\n", height * lenght * width);
    printf("Dimensional weight (pounds): %d\n", (height * lenght * width + 165)/166);

    return 0;
}

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, number;
    printf("\nInput number:");
    scanf_s("%d", &number);
    for (x = 1; x < 13; x++)
        printf("%d x %d = %d\n", number, x, x * number);
    _getch();
}
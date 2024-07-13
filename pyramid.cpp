#include <stdio.h>

int main()
{
    int n;
    

    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int space = n - 1;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf(" ");
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
        space--;
    }
}


#include <stdio.h>
int main()
{
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 4; b >= a; b--)
        {
            printf(" ");
        }
        for (int c = 1; c <= (a * 2 - 1); c++)
        {
            if (c == 1 || c == (a * 2 - 1) || a == 3)
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 ||
                (a == 1 && b < 5) ||
                (a == 4 && b < 5) ||
                (a == 7 && b < 5) ||
                (b == 5 && a != 1 && a != 4 && a != 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (a == 1 || a == 7 || b == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 ||
                (a == 1 && b < 4) ||
                (a == 7 && b < 4) ||
                (b == 5 && a > 1 && a < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 ||
                a == 1 ||
                a == 4 ||
                a == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 ||
                a == 1 ||
                a == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 6; b++)
        {
            if ((a == 1 && b > 1 && b < 6) ||
                (a == 7 && b > 1 && b < 6) ||
                (b == 1 && a > 1 && a < 7) ||
                (b == 6 && a >= 4 && a < 7) ||
                (a == 4 && b >= 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 ||
                b == 5 ||
                a == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (a == 1 || a == 7 || b == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (a == 1 ||
                b == 5 ||
                (a == 7 && b > 1 && b < 5) ||
                (b == 1 && a >= 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 ||
                (a == 1 && b == 5) ||
                (a == 2 && b == 4) ||
                (a == 3 && b == 3) ||
                (a == 5 && b == 3) ||
                (a == 6 && b == 4) ||
                (a == 7 && b == 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 || a == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (b == 1 || b == 7 ||
                (a == 2 && (b == 2 || b == 6)) ||
                (a == 3 && (b == 3 || b == 5)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (b == 1 ||
                b == 7 ||
                b == a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if ((a == 1 && b > 1 && b < 5) ||
                (a == 7 && b > 1 && b < 5) ||
                (b == 1 && a > 1 && a < 7) ||
                (b == 5 && a > 1 && a < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 6; b++)
        {
            if (b == 1 ||
                (a == 1 && b <= 5) ||
                (a == 4 && b <= 5) ||
                (b == 6 && a > 1 && a < 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if ((a == 1 && b > 2 && b < 6) ||
                (a == 6 && b > 2 && b < 6) ||
                (b == 2 && a > 1 && a < 6) ||
                (b == 6 && a > 1 && a < 6) ||
                (a == 7 && b == 6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 6; b++)
        {
            if (b == 1 ||
                (a == 1 && b <= 5) ||
                (a == 4 && b <= 5) ||
                (b == 6 && a > 1 && a < 4) ||
                (a > 4 && b == a - 3 + 2)) // diagonal leg
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if ((a == 1 && b > 1) ||
                (a == 4 && b < 5) ||
                (a == 7 && b > 1) ||
                (b == 1 && a > 1 && a < 4) ||
                (b == 5 && a > 4 && a < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (a == 1 || b == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b == 1 || b == 5 || a == 7 && b > 1 && b < 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b < a; b++)
        {
            printf(" ");
        }
        printf("*");

        for (int c = 1; c <= 2 * (5 - a) - 1; c++)
        {
            printf(" ");
        }

        if (a != 5)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ((j == 0 || j == 8) || (j == 1 && i == 3) || (j == 2 && i == 2) || (j == 3 && i == 1) || (j == 4 && i == 0) || (j == 5 && i == 1) || (j == 6 && i == 2) || (j == 7 && i == 3))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (b == a || b == 8 - a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if ((b == a && a <= 4) || (b == 8 - a && a <= 4) || (b == 4 && a > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    for (int a = 1; a <= 7; a++)
    {
        for (int b = 1; b <= 7; b++)
        {
            if (a == 1 || a == 7 || b == 8 - a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
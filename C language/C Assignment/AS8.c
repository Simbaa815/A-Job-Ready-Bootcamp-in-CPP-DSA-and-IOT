// Write a program to draw the following patterns:
// 1. *
//    **
//    ***
//    ****
//    *****

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 2. WAP to draw the following pattern.
//     *
//    **
//   ***
//  ****
// *****

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            if (j < 6 - i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

// 3. WAP to draw the following pattern.
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
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
}

// 4. WAP to draw the following pattern.
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
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
}

// 5. WAP to draw the following pattern.
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j > 5 - i && j < 5 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            // printf("*");
        }
        printf("\n");
    }
}

// 6. WAP to draw the following pattern.
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j > i - 1 && j < 11 - i)
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
}

// 7. WAP to draw the following pattern.
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j > 6 - i && j <= 4 + i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

// 8. WAP to draw the following pattern.
//    1
//   121
//  12321
// 1234321

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int a = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j > 4 - i && j < 4 + i)
            {
                printf("%d", a);
                (j < 4) ? a++ : a--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 9. WAP to draw the following pattern.
// 1234321
//  12321
//   121
//    1

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int a = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j > i - 1 && j <= 8 - i)
            {
                printf("%d", a);
                (j < 4) ? a++ : a--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 10. WAP to draw the following pattern.
// 1234321
// 123 321
// 12   21
// 1     1

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int a = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j == 4)
            {
                a--;
            }
            if (j > 5 - i && j < 3 + i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", a);
                (j < 4) ? a++ : a--;
            }
        }
        printf("\n");
    }
}

// 11. WAP to draw the following pattern.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char a = 'A';
        for (int j = 1; j <= 9; j++)
        {
            if (j > 5 - i && j <= 4 + i)
            {
                printf("%c", a);
                (j < 5) ? a++ : a--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 12. WAP to draw the following pattern.
// ABCDCBA
//  ABCBA
//   ABA
//    A

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int c = 'A';
        for (int j = 1; j <= 7; j++)
        {
            if (j > i - 1 && j <= 8 - i)
            {
                printf("%c", c);
                j < 4 ? c++ : c--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 13. WAP to draw the following pattern.
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        int a = 'A';
        for (int j = 1; j <= 13; j++)
        {
            if (j == 7)
            {
                a--;
            }
            if (j > 8 - i && j < 6 + i)
            {
                printf(" ");
            }
            else
            {
                printf("%c", a);
                j < 7 ? a++ : a--;
            }
        }
        printf("\n");
    }
}

// 14. WAP to draw the following pattern.
// *
// **
// * *
// *  *
// *****

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == i || i == 5)
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
}
// 15. WAP to draw the following pattern.
//     *
//    **
//   * *
//  *  *
// *****

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 5 || j == i || i == 1)
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
}

// 16. WAP to draw the following pattern.
//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 5 || j == 4 + i || j == 6 - i)
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
}
/// 17. WAP to draw the following pattern.
// *********
//  *     *
//   *   *
//    * *
//     *

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 1 || j == i || j == 10 - i)
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
}

// 18. WAP to draw the following pattern.
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j > 5 - i && j < 5 + i)
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
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j > i - 1 && j <= 10 - i)
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
}

// 19. WAP to draw the following pattern.
//   *****     *****
//  *******   *******
// ********* *********
// ******MYSIRG*******
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *

#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if ((j >= 2 - i && j <= 6 + i) || (j >= 12 - i && j <= 16 + i))
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
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if ((i == 0) && (j == 6))
            {
                printf("MySirG");
            }
            if ((i == 0 && j >= 6) && (j <= 11))
            {
                continue;
            }
            if ((j >= i) && (j <= 18 - i))
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
}
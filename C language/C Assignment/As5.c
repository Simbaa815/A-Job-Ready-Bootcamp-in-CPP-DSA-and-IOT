// 1. Write a program to print MySirG N times on the screen

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("MySirG\n");
    }
    return 0;
}

// 2. Write a program to print the first N natural numbers.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// 3. Write a program to print the first N natural numbers in reverse order

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = a; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

// 4. Write a program to print the first N odd natural numbers

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// 5. Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = a; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

// 6. Write a program to print the first N even natural numbers

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = 2; i <= a*2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}

// 7. Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = a*2; i >= 2; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}

// 8. Write a program to print squares of the first N natural numbers

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {

        printf("%d\n", i * i);
    }
    return 0;
}

// 9. Write a program to print cubes of the first N natural numbers

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {

        printf("%d\n", i * i * i);
    }
    return 0;
}

// 10. Write a program to print a table of N.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    for (int i = a; i <= a*10; i++)
    {
        if (i % a == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}


// 1. Write a program to print MySirG 5 times on the screen

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("MySirG\n");
    }
    return 0;
}

// 2. Write a program to print the first 10 natural numbers.

#include <stdio.h>
int main()
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// 3. Write a program to print the first 10 natural numbers in reverse order

#include <stdio.h>
int main()
{
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

// 4. Write a program to print the first 10 odd natural numbers

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// 5. Write a program to print the first 10 odd natural numbers in reverse order.

#include <stdio.h>
int main()
{
    for (int i = 20; i >= 1; i--)
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

// 6. Write a program to print the first 10 even natural numbers

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 20; i++)
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

// 7. Write a program to print the first 10 even natural numbers in reverse order

#include <stdio.h>
int main()
{
    for (int i = 20; i >= 1; i--)
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

// 8. Write a program to print squares of the first 10 natural numbers

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {

        printf("%d\n", i * i);
    }
    return 0;
}

// 9. Write a program to print cubes of the first 10 natural numbers

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {

        printf("%d\n", i * i * i);
    }
    return 0;
}

// 10. Write a program to print a table of 5.

#include <stdio.h>
int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 5 == 0)
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

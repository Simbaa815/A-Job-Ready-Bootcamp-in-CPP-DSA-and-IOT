// 1. Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>
int sum(int n)
{
    if (n >= 1)
    {
        return (n + sum(n - 1));
    }
}

int main()
{
    printf("%d", sum(6));
}

// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int firstOddsum(int n)
{
    if (n >= 1)
    {
        return ((2 * n - 1) + firstOddsum(n - 1));
    }
}
int main()
{
    printf("%d", firstOddsum(3));
}

// 3. Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int firstEvensum(int n)
{
    if (n >= 1)
    {
        return (2 * n) + firstEvensum(n - 1);
    }
}
int main()
{
    printf("%d", firstEvensum(3));
}

// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>
int sqrSum(int n)
{
    if (n >= 1)
    {
        return n * n + sqrSum(n - 1);
    }
}
int main()
{
    printf("%d", sqrSum(4));
}

// 5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int digitSum(int n)
{
    while (n > 0)
    {
        return n % 10 + digitSum(n / 10);
    }
}
int main()
{
    printf("%d", digitSum(123));
}

// 6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int fact(int n)
{
    if (n > 1)
    {
        return n * fact(n - 1);
    }
}
int main()
{
    printf("%d", fact(5));
}

// 7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int HCF(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return HCF(a - b, b);
        }
        else
        {
            return HCF(a, b - a);
        }
    }
    return a;
}
int main()
{
    printf("%d", HCF(8, 16));
}

// 8. Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
int printFibbo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (printFibbo(n - 1) + printFibbo(n - 2));
    }
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", printFibbo(i));
    }
}
// 9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int count = 0;
int countdigit(int n)
{
    if (n > 0)
    {
        countdigit(n / 10);
        count++;
    }
    return count;
}
int main()
{
    printf("%d", countdigit(123));
}
// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int power(int b, int e)
{
    if (e > 0)
    {
        return b * power(b, e - 1);
    }
    else if (e < 0)
    {
        e = e * (-1);
        return 1 / power(b, e - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    printf("%d", power(2, 9));
}
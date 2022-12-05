// 1. Write a program to calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d", sum);
    return 0;
}

// 2. Write a program to calculate sum of first N even natural numbers

#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the value\n");
    scanf("%d", &a);
    for (int i = 2; i <= a * 2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            continue;
        }
    }
    printf("%d", sum);
    return 0;
}

// 3. Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the value\n");
    scanf("%d", &a);
    for (int i = 1; i <= a * 2; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            continue;
        }
    }
    printf("%d", sum);
    return 0;
}

// 4. Write a program to calculate sum of squares of first N natural numbers

#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + (i * i);
    }
    printf("The sum is %d", sum);
    return 0;
}

// 5. Write a program to calculate sum of cubes of first N natural numbers

#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + (i * i * i);
    }
    printf("The sum is %d", sum);
    return 0;
}

// 6. Write a program to calculate factorial of a number

#include <stdio.h>
int main()
{
    int a, fact = 1;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
    }
    else
    {
        printf("NOt the valid number");
    }
    printf("factorial is %d", fact);

    return 0;
}

// 7. Write a program to count digits in a given number

#include <stdio.h>
int main()
{
    int a, count = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    while (a > 0)
    {
        a % 10 != 0;
        count++;
        a = a / 10;
    }
    printf("The total digit is %d", count);
    return 0;
}

// 8. Write a program to check whether a given number is a Prime number or
// not

#include <stdio.h>
int main()
{
    int n , i;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Not the prime number");
    }
    for ( i = 2; i < n; i++)// here we do the i<=(n/2) because for eg 100 so therefore there is no number greater than 50 which divided the 100 completely so we take n/2;
    {
        if ((n % i) != 0)
        {
            printf("prime number");
            continue;
        }
        else{
            printf("Not the prime number");
            break;
        }
    }
}

// 9. Write a program to calculate LCM of two numbers

#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    while (max > 0)
    {
        if ((max % a == 0) && (max % b == 0))
        {
            printf("LCM is %d ", max);
            break;
        }
        max++;
    }
    

    return 0;
}

// 10. Write a program to reverse a given number

#include<stdio.h>
int main(){
    int n ,r ;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The reverse is\n");
    while(n>0){
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}

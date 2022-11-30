// 1. Write a program to check whether a given number is positive or non-positive.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Positive number\n");
    }
    else
    {
        printf("Non-positive\n");
    }
    return 0;
}

// 2. Write a program to check whether a given number is divisible by 5 or not

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5");
    }
}

// 3. Write a program to check whether a given number is an even number or an odd
// number.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if ((a & 1) == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}

// 5. Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a >= 100 && a < 1000)
    {
        printf("This entered number is a three digit number");
    }
    else
    {
        printf("The entered number is not the three digit number");
    }
    return 0;
}

// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is the greater number", a);
    }
    else
    {
        printf("%d is the greater number", b);
    }
    return 0;
}

// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the coeffients in term of (a,b,c)\n");
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b - (4 * a * c));
    if (d = 0)
    {
        printf("Real and equal roots\n");
    }
    if (d > 0)
    {
        printf("Real and distinct roots");
    }
    else
    {
        printf("Imaginary roots");
    }
    return 0;
}

// 8. Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d", &a);
    if ((a % 4 == 0) && (a % 100 != 0))
    {
        printf("leap year");
    }
    else
    {
        printf("Not the leap year");
    }
    return 0;
}

// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("%d is the greatest number", a);
    }
    if (b >= c && b >= a)
    {
        printf("%d is the greatest number", b);
    }
    else
    {
        printf("%d is the greatest number", c);
    }
    return 0;
}

// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include <stdio.h>
int main()
{
    float cp, sp, loss, profit;
    printf("Enter the number in term of (cp , sp)\n");
    scanf("%f %f", &cp, &sp);
    loss = cp - sp;
    profit = sp - cp;
    if (cp > sp)
    {
        printf("Loss precentage is %f", (loss / cp) * 100);
    }
    else
    {
        printf("Profit precentage is %f", (profit / cp) * 100);
    }
    return 0;
}

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.

#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the 5 subjects like (a, b, c, d, e)\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if ((a % 2 == 0))
    {
        printf("Number is divisible by 2");
    }
    if (a % 3 == 0)
    {
        printf("Number is divisible by 3");
    }
    else
    {
        printf("Not divisible by both 2 & 3");
    }
    return 0;
}

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if ((a % 7 == 0))
    {
        printf("Number is divisible by 7");
    }
    if (a % 3 == 0)
    {
        printf("Number is divisible by 3");
    }
    else
    {
        printf("Not divisible by both 7 & 3");
    }
    return 0;
}

// 15. Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("The given number is positive");
    }
    else if (a < 0)
    {
        printf("The given number is negative");
    }
    else
    {
        printf("The given number is zero");
    }
}

// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("digit");
    }
    else if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    {
        printf("special character");
    }
    return 0;
}

// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the three sides of the triangle\n");
    scanf("%d %d %d", &s1, &s2, &s3);
    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s3 + s1 > s2))
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid traingle");
    }
    return 0;
}

// 18. Write a program which takes the month number as an input and display number of
// days in that month

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the month\n");
    scanf("%d", &num);
    if (num > 12)
    {
        printf("Invalid month");
    }
    else if (num == 2)
    {
        printf("%d", 28);
    }
    else if (num % 2 == 0)
    {
        printf("%d", 30);
    }
    else
    {
        printf("%d", 31);
    }
    return 0;
}

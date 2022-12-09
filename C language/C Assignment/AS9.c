// 1. Write a program which takes the month number as an input and display
// number of days in that month.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the month number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        printf("This month has 31 days");
        break;
    }

    case 4:
    case 6:
    case 9:
    case 11:
    {
        printf("This month has 30 days");
        break;
    }
    case 2:
    {
        printf("This month has 28 days");
        break;
    }
    default:
    {
        printf("Invalid month number");
    }
    }
    return 0;
}

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Enter the two numbers\n");
    scanf("%d %d", &b, &c);
    printf("choose one\n");
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("5 for exit\n");
    printf("Enter the choice\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("The sum is %d", b + c);
        break;
    case 2:
        printf("The subtraction is %d", b - c);
        break;
    case 3:
        printf("The Multiplication is %d", b * c);
        break;
    case 4:
        printf("The division is %d", b / c);
        break;
    case 5:
        exit(0); // This will end the program here if it get this case

    default:
        printf("Not the valid choice");
        break;
    }
    return 0;
}
// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("choose one\n");
    printf("1 for Sunday\n");
    printf("2 for Monday\n");
    printf("3 for Tuesday\n");
    printf("4 for Wednesdau\n");
    printf("5 for Thurday\n");
    printf("6 for Friday\n");
    printf("7 for Saturday\n");
    printf("Enter the day number of the week\n");
    scanf("%d ", &a);

    switch (a)
    {
    case 1:
        printf("Just break your busy schedule bus and chill your life");
        break;
    case 2:
        printf("Today is your day");
        break;
    case 3:
        printf("Have the good day");
        break;
    case 4:
        printf("Just focus");
        break;
    case 5:
        printf("lovely day");
        break;
    case 6:
        printf("Spend time with your loved ones");
        break;
    case 7:
        printf("aaj kaam kr le beta kl shutti hai ");
        break;
    default:
        printf("Not the valid choice");
        break;
    }
    return 0;
}

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, n3, a;
    printf("Choose one option\n");
    printf("1-Check for isosceles triangle\n");
    printf("2-Check for right angled triangle\n");
    printf("3-Check for the equilateral triangle\n");
    printf("chose the number from oprions\n");
    scanf("%d", &a);
    printf("Enter the sides\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    switch (a)
    {
    case 1:
    {
        if (n1 == n2 || n2 == n3 || n3 == n1)
        {
            printf("The sides form an isosceles triangle");
        }
        else
        {
            printf("Not the isosceles triangle");
        }
        break;
    }
    case 3:
    {
        if (n1 == n2 == n3)
        {
            printf("The sides form an equilateral triangle");
        }
        else
        {
            printf("Sides not form an equilateral triangle");
        }
        break;
    }
    case 2:
    {
        if ((pow(n3, 2) == pow(n2, 2) + pow(n1, 2)) || (pow(n1, 2) == pow(n2, 2) + pow(n3, 2)) || (pow(n2, 2) == pow(n3, 2) + pow(n1, 2)))
        {
            printf("The sides form the right angled triangle");
        }
        else
        {
            printf("Sides not form right angled triangle");
        }
        break;
    }
    default:
    {
        printf("Not valid choice");
        break;
    }
    }
}

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the vlaue of n(1 to 3)\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}

// 6. Program to check whether a year is a leap year or not. Using switch
// statement

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("1- Check for leap year\n");
    printf("2-Exit\n");
    printf("choose one option\n");
    int a;
    scanf("%d", &a);
    int n;
    printf("Enter the year\n");
    scanf("%d", &n);

    switch (a)
    {
    case 1:
        if ((n % 4 == 0) && (n % 100 != 0))
        {
            printf("This is the leap year");
        }
        else
        {
            printf("Not the leap year");
        }
        break;
    case 2:
        exit(0);
    default:
        printf("Invalid");
        break;
    }
    return 0;
}

// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>
int main()
{
    float unit, surcharge;
    int n;
    printf("1- (0 to 50)units\n");
    printf("2-(51-150)units\n");
    printf("3-(150 to 250)\n");
    printf("For units above 250 Rs. 1.50/unit");
    printf("choose one option\n");
    scanf("%d", n);

    switch (n)
    {
    case 1:
        printf("Enter the units you've used:\n");
        scanf("%f", &unit);
        unit = unit * 0.50;
        surcharge = unit * (20 / 100);
        printf("your bill is %f", (unit + surcharge));
        break;
    case 2:
        printf("Enter the units you've used:\n");
        scanf("%f", &unit);
        unit = unit * 0.75;
        surcharge = unit * (20 / 100);
        printf("your bill is %f", (unit + surcharge));
        break;
    case 3:
        printf("Enter the units you've used:\n");
        scanf("%f", &unit);
        unit = unit * 1.20;
        surcharge = unit * (20 / 100);
        printf("your bill is %f", (unit + surcharge));
        break;
    case 4:
        printf("Enter the units you've used:\n");
        scanf("%f", &unit);
        unit = unit * 1.50;
        surcharge = unit * (20 / 100);
        printf("your bill is %f", (unit + surcharge));
        break;

    default:
        printf("Invalid");
        break;
    }
    return 0;
}

// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.

#include <stdio.h>
int main()
{
    int n, a;
    printf("1-Convert into positive\n");
    printf("2-Convert into negative\n");
    printf("choose one option\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter the number\n");
        scanf("%d", &a);
        if (a <= 0)
        {
            a = a * (-1);
            printf("positive number %d", a);
        }
        else
        {
            printf("Number is always positive");
        }
        break;
    case 2:
        printf("Enter the number\n");
        scanf("%d", &a);
        if (a >= 0)
        {
            a = a * (-1);
            printf("negative number %d", a);
        }
        else
        {
            printf("Number is always negative");
        }
        break;
    default:
        break;
    }
}

// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a;
    printf("1-Convert even number into its upper nearest odd number\n");
    printf("2-Exit\n");
    printf("choose option\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the number\n");
        scanf("%d", &a);
        if (a >= 0)
        {
            if (a % 2 == 0)
            {

                printf("number %d into upper nearest odd number is %d", a, a + 1);
            }
            else
            {

                printf("number %d into upper nearest odd number is %d", a, a + 2);
            }
        }
        else
        {
            printf("number %d into upper nearest odd number is %d", a, a - 1);
        }

        break;
    case 2:
        exit(0);
    default:
        printf("Invalid");
        break;
    }
}

// 10. C program to find all roots of a quadratic

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, a, b, c, d, proot, nroot;
    printf("1-Find roots\n");
    printf("2-Exit\n");
    printf("choose option\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter the coeff of the equation(a,b,c)\n");
        scanf("%d %d %d", &a, &b, &c);
        d = b * b - (4 * a * c);
        proot = (-b + (pow(d, (1 / 2)))) / (2 * a);
        nroot = (-b - (pow(d, (1 / 2)))) / (2 * a);
        printf("The roots are %d and %d", proot, nroot);
        break;
    case 2:
        exit(0);
    default:
        printf("Invalid");

        break;
    }
}

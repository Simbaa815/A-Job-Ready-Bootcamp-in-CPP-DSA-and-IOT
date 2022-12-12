// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int Lcm(int a, int b)
{
    int c;
    c = a > b ? a : b;
    while (c > 0)
    {
        if ((c % a == 0) && (c % b == 0))
        {
            printf("LCM is %d ", c);
            break;
        }
        c++;
    }
    return 0;
}

// 2. Write a function to calculate HCF of two numbers. (TSRS)

int HCF(int a, int b)
{
    // int min = (a<b)? a: b;
    while (a != b)
    {
        if (b > a)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    return a;
}

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
int checkPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n < 0)
        {
            printf("0\n");
            break;
        }
        if (n % i != 0)
        {
            printf("1\n"); // 1 for the true;
            continue;
        }
        else
        {
            printf("0\n");
            break;
        }
    }
    return (printf("Have a nice day"));
}

int main()
{
    printf("%d", checkPrime(6));
}

// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int nextPrime(int n)
{
    int count = 0;
    for (int i = n; i > 1; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
            break;
        }
    }
    return printf("hello");
}

int main()
{
    printf("%d", nextPrime(6));

    return 0;
}

// 5. Write a function to print first N prime numbers (TSRN)


// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
// 7. Write a function to print first N terms of Fibonacci series (TSRN)
// 8. Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>
void printPascal(int n){
    
}


// 9. Write a program in C to find the square of any number using the function.

#include<stdio.h>
int findsqrt(int n){
    n=n*n;
    return n;
}
int main(){
    printf("%d", findsqrt(8));
}

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.

#include<stdio.h>
int fact(int n){
    int a= 1;
    for(int i =2; i<=n; i++){
        a = a*i;
    }
    return a;
}
void findSum(int n){
    int sum=0;
    for(int  i =1; i<=n; i++){
        sum = sum + (fact(i)/i);
    }
    printf("%d", sum) ;
}
int main(){
    findSum(5);
}

// 1. Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>
int main()
{
    int n, sum = 0, a = 0, b = 1;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The fibonacci serie is\n");
    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        printf("%d", a);
    }
    else
    {
        printf("Not the valid number");
    }
    return 0;
}

// 2. Write a program to print first N terms of Fibonacci series

#include <stdio.h>
int main()
{
    int n, sum = 0, a = 0, b = 1;
    printf("Enter the value of n:(n>0)\n");
    scanf("%d", &n);
    printf("The fibonacci serie is\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}

// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include <stdio.h>
int main()
{
    int n, sum = 0, a = 0, b = 1;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n == a)
        {
            printf("Yes it is there\n");
        }
        else
        {
            sum = a + b;
            a = b;
            b = sum;
        }
    }
    printf("Not there");

    return 0;
}

// 4. Write a program to calculate HCF of two numbers

#include <stdio.h>
int main()
{
    int n1, n2, min;
    printf("Enter the two numbers for HCF\n");
    scanf("%d%d", &n1, &n2);
    min = (n1 < n2) ? n1 : n2;
    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            printf("HCF is %d", i);
        }
    }
    return 0;
}

// 5. Write a program to check whether two given numbers are co-prime
// numbers or not

#include <stdio.h>
int main()
{
    int n1, n2, min, hcf;
    printf("Enter the two numbers for HCF\n");
    scanf("%d%d", &n1, &n2);
    min = (n1 < n2) ? n1 : n2;
    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    if (hcf == 1)
    {
        printf("Numbers are co-prime number");
    }
    else
    {
        printf("Not the co-prime number");
    }
    return 0;
}

// 6. Write a program to print all Prime numbers under 100

#include <stdio.h>
int main()
{
    int n, j;
    printf("All prime number from 1 to 100 are \n");
    for (n = 1; n <= 100; n++)
    {
        for (j = 2; j <= (n / 2); j++)
        {
            if ((n % j) == 0)
                break;
        }
        if (j > n / 2)
        {
            printf("%d ", n);
        }
    }
}

// 7. Write a program to print all Prime numbers between two given numbers

#include <stdio.h>
int main()
{
    int a, b, flag = 0;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j != 0)
                flag = 1;
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}

// 8. Write a program to find next Prime number of a given number

#include <stdio.h>
int main()
{
    int a, flag = 0;
    printf("Enter the value\n");
    scanf("%d", &a);
    for (int i = a+1; i>0; i++)
    {
        flag=0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}

// 9. Write a program to check whether a given number is an Armstrong number
// or not

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n, count=0, a, sum=0 , temp, temp1 , c = 0;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=temp1=n;
    // printf("%d %d", temp, temp1);
    if(n==0 || n==1){
        printf("This is the armstrong number");
        exit(0);
    }
    if(n<=9){
        printf("This number is not the armstrong");
        exit(0);
    }
    else{
        while(temp!=0){
            temp=temp/10;
            count++;
        }
        while(temp1 != 0){
        a=temp1%10;
        c=pow(a, count);
        printf("%d\n",c);
        sum=sum+c;
        temp1=temp1/10;
        }
    if(n == sum){
        printf("This number is armstrong");
    }
    else{
        printf("Not the armstrong number");
    }
    }
    return 0;
}

// 10. Write a program to print all Armstrong numbers under 1000

#include <stdio.h>

void main(){
    int n,r,sum,temp;
    int stno,enno;

    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);

    printf("Armstrong numbers in given range are: ");
    for(n=stno;n<=enno;n++){
         temp=n;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==n)
             printf("%d ",n);
    }
printf("\n");
}
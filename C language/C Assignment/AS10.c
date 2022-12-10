// 1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float circleArea(float r)
{
    float pi = 3.142;
    return (pi * r * r);
}

int main()
{
    printf("%f", circleArea(7));
}

// 2. Write a function to calculate simple interest. (TSRS)

#include <stdio.h>
float SI(float p, float r, float t)
{
    float a = p * (1 + (r * t));
    return a;
}
int main()
{
    printf("%f", SI(100, 0.038, 5));
}

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)

#include <stdio.h>

int checkNum(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("%d", checkNum(0));
}

// 4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void printNatNum(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    return;
}
int main()
{
    printNatNum(10);
}

// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
void PrintOddnum(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
} 
int main()
{
    PrintOddnum(5);
}

// 6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int fact(int n){
    int res=1;
    for(int i =2; i<=n; i++){
        res= res*i;
    }
    return res;
}
int main(){
    printf("%d ", fact(5));
}

// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)

#include<stdio.h>
int fact(int n){
    int res=1;
    for(int i =2; i<=n; i++){
        res= res*i;
    }
    return res;
}
int calCombi(int n, int r){
    int a= fact(n);
    int b= fact(r);
    int c= fact(n-r);
    int d= a/(b * c);

    return d;
}

int main(){
    printf("%d ", calCombi(4, 2));
}

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)

#include<stdio.h>
int fact(int n){
    int res=1;
    for(int i =2; i<=n; i++){
        res= res*i;
    }
    return res;
}
int arrang(int n, int r){
    int a= fact(n);
    int b= fact(n-r);
    int c= a/b;
    return c;
}

int main(){
    printf("%d", arrang(5, 2));
}


// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)

#include<stdio.h>
int checkDigit(int n, int d){
    int a;
    while (n>0){
        a=n%10;
        if(d ==a){
            return 1; // for finding the number;
        }
        else{
            n=n/10;
        }
    }
    return 0; // Digit not found;
}

int main(){
    printf("%d", checkDigit(134, 9));
}

// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>
void PrimeFact(int n){
    for(int i=2; n != 1; i++){
        while(n%i ==0 ){
            n=n/i;
            printf("%d,", i);
        }
    }
}
int main(){
    PrimeFact(36);
}

// 1. Write a program to print unit digit of a given number

#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    int b;
    b=a%10;
    printf("The unit number of %d is %d",a,b);
    return 0;
}

// 2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("Given number without its last digit is %d",a/10);
    return 0;
}

// 3. Write a program to swap values of two int variables

#include<stdio.h>
int main(){
    int a , b, c=0;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swaping the value of a is %d and b is %d",a,b);

    return 0;
}

// 4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a, &b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Number becomes after swapping is %d %d",a,b);
    return 0;
}

// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main(){
    int a, sum=0, x;
    printf("Enter the three digit number\n");
    scanf("%d",&a);
    if(a>=100 && a<=999)
    {
        while(a!=0)
        {
            x=a%10;
            sum=sum+x;
            a=a/10;
            
        }
        
        printf("The sum of digits of the given number is %d", sum);
        
    }
    else{
        printf("This is not the three digit number");
    }
    return 0;
}

// 6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    printf("ASCII code is %d",ch);
    return 0;
}

// 7. Write a program to find the position of first 1 in LSB.

#include <stdio.h>
int main()
{
    int a, result = 0, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &a);
    while (a != 0)
    {
        result = a & 1;
        count++;
        if (result == 1)
        {
            printf("The position of the first 1 in LSB is: %d", count);
            break;
        }
        else
        {
            a = a >> 1;
        }
    }
    return 0;
}

// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if((a&1)==0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }

    return 0;
}

// 9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    printf("size of int is %d\n", sizeof(a));
    printf("size of float is %d\n", sizeof(b));
    printf("size of char is %d\n", sizeof(c));
    printf("size of double is %d\n", sizeof(d));

    return 0;
}

// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    a=(a/10)*10;
    printf("The new number is %d",a);
}

// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)

#include<stdio.h>
int main(){
    int a , b;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the digit\n");
    scanf("%d", &b);

    printf("The resulting number is %d", (a*10)+b);

    return 0;
}

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.

#include<stdio.h>
int main(){
    float inr, usd;
    printf("Enter the amount in inr\n");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("%f inr in usd is %f", inr , usd);
    return 0;
}

// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the number in 3 digits\n");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    if(a>=100 && a<1000)
    {
        printf("The number after rotation is %d",(b*100)+c);
    }
    else{
        printf("Not the valid number");
    }

    return 0;
}
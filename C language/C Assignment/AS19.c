// 1. Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.
#include <stdio.h>
int main()
{
    char str[5][20];
    printf("Enter the string\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin);
    }
    int count = 0;
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; str[j][k]; k++)
        {
            if (str[j][k] == 'a' || str[j][k] == 'e' || str[j][k] == 'i' || str[j][k] == 'o' || str[j][k] == 'u')
                count++;
        }
    }
    if (count == 0)
    {
        printf("Doesn't find any vowel in the string\n");
    }
    else
    {
        printf("The total number of vowels in the strings are %d", count);
    }

    return 0;
}

// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.
#include <stdio.h>
#include <string.h>
int main()
{
    // taking extra array for comparison
    char str[10][20], temp[20];
    int i, j;
    printf("Enter the 10 string\n");
    for (int i = 0; i < 10; i++)
    {
        fgets(str[i], 20, stdin);
        // gets(str[i]);
    }
    // Comparison is done
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                // we cannot use assignment operator in the string (eg. temp =str[i]<-- this is wrong)
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Sorted string are\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}
// 3. Write a program to read and display a 2D array of strings in C language.
#include <string.h>
#include <stdio.h>
int main()
{
    char str[5][20];
    printf("Emter the 5 string\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%s", str[j]);
    }

    return 0;
}

// 4. Write a program to search a string in the list of strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20], temp[20];
    int a = 0;
    printf("Enter the 5 strings\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin);
    }
    printf("Enter the string you want to search\n");
    fgets(temp, 20, stdin);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(str[i], temp) == 0)
        {
            printf("String %d found\n", i + 1);
            a = 1;
        }
    }
    if (a == 0)
    {
        printf("String not found");
    }

    return 0;
}
// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str[5][20];
    printf("Enter 5 email\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin);
    }
    // For checking
    int a = strlen(str);
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        j = 0;
        if (strchr(str[i], '@') != 0)
        {
            // strchr function check the element in the string.
            //  if it return 0 <-- not found the element
            // if it return >0 or <0 <-- found the elemtnt
            printf("%s\n", str[i]);
            j = 1;
        }
    }
    if (j == 0)
    {
        printf("All string have @ in it");
    }
}
// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20];
    int i, j;
    printf("Enter the five strings\n");
    for (i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        int flag = 0;
        int len = (strlen(str[i]) - 1);
        for (j = 0; j < (len); j++)
        {
            if (str[i][j] != str[i][len - j - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            printf("string %d is the palidrom\n", i+1);
            // flag=0;
        }
        // else{
        //     printf("string %d is not the palidrom\n", i);
        //     flag=0;
        // }
    }
    return 0;
}
// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int str[2][12];
    printf("Enter the 5 IPv4 address\n");
    for (int i = 0; i < 2; i++)
    {
        fgets(str[i], 20, stdin);
    }
    // the process in which the data can be break into token(substring) using seprator id k/as tokenization
    // eg a, b, c, d <-- here ',' work as the seprator
    // strtok(string(), string(to find)) <-- string to token is used for tokenization
    //. this function return first token when it get the seprator so therefore we have to use loop here

    int x, flag = 0;
    for (int j = 0; j < 5; j++)
    {

        while (str[j])
        {
            char *a = strtok(str[j], ".");
            while (a != NULL)
            {
                int x = atoi(a);
                if ((x >= 0) && (x <= 255))
                {
                    printf("%d", x);
                }
                a = strtok(NULL, ".");
            }
        }
    }
}

// 8. Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, num1 = -1, num2 = -1, temp, min = 100;
    char s[5][20] = {{"the"}, {"quick"}, {"brown"}, {"fox"}, {"quick"}};
    char word1[20] = "brown", word2[20] = "quick";
    printf("Shortest path between the desired words is:\n");
    for (i = 0; i < 5; i++)
    {
        if (strcmp(s[i], word1) == 0)
            num1 = i;
        if (strcmp(s[i], word2) == 0)
            num2 = i;
        if (num1 != -1 && num2 != -1)
        {
            temp = abs(num2 - num1);
            if (temp < min)
                min = temp;
        }
    }
    printf("%d", min);
    return 0;
}


// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed
#include <stdio.h>
int fact(n)
{
    printf("Factorial of the given number\n");
    if(n>1)
        return (n * fact(n - 1));
}
int main()
{
    char str[10];
    printf("Enter your name\n");
    fgets(str, 10, stdin);
    printf("%s", str);
    char str1[5][10] = {"Rohan", "Panjak", "Shubhnesh", "Digvijay", "Amash"};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; str1[i][j]; j++)
        {
            if (str[j] == str1[i][j])
            {
                count = 1;
            }
            else{
                count = 0;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("You are eligible for doing calculation\n");
        int n, a;
        printf("Enter the number\n");
        scanf("%d", &n);
        a = fact(n);
        printf("%d", a);
    }
    else{
        printf("You are not eligible for the calculation");
    }
    return 0;
}

// 10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fact(int a){
    if(a>1){
        return (a*fact(a-1));
    }
}
void findLeapyear(int a){
    if((a%4 == 0) && (a%100 != 0)){
        printf("Given year is leap year\n");
    }
    else{
        printf("Not the leap year\n");
    }
}
int quadroot(int a, int b, int c){
    int d= (b*b)-(4*a*c);
    int proot= (b - pow(d, 1/2))/2*a;
    int nroot= (-b - pow(d, 1/2))/2*a;
    return (nroot, proot);
}
int main(){
    int n;
    printf("1. Factorial");
    printf("2. leap year\n");
    printf("3. Root of quadratic\n");
    printf("4. Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    {
        int a;
        printf("Enter the number to find the factorial\n");
        scanf("%d", &a);
        fact(a);
        break;
    }
    case 2:
    {
        int b;
        printf("Enter the year\n");
        scanf("%d", &b);
        findLeapyear(b);
        break;
    }
    case 3:
    {
        int a, b, c;
        printf("Enter the coeff of the equation in the form of ax^2+ bx + c");
        scanf("%d%d%d", &a, &b, &c);
        quadroot(a, b, c);
        break;
    }
    case 4:
    {
        exit(0);
    }

    default:
        printf("Not the valid choice\n");
        break;
    }
}
// 1. Write a function to calculate length of the string
#include <stdio.h>
void getstrlen(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    printf("Length of the string is %d", i - 1);
}
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    getstrlen(str);

    return 0;
}
// 2. Write a function to reverse a string.
#include <stdio.h>
#include <string.h>
void revstr(char str[])
{
    str[strlen(str) - 1] = '\0';
    int a = strlen(str);
    printf("Reverse of the string\n");
    for (int i = a; i >= 0; i--)
        printf("%c", str[i]);
}
void main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    revstr(str);
}
// 3. Write a function to compare two strings.
#include <stdio.h>
#include <string.h>
void comp(char s1[], char s2[])
{
    int flag = 0, a, b;
    a = strlen(s1);
    b = strlen(s2);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Both the strings are not same\n");
    }
    else
    {
        printf("Both the strings are same\n");
    }
}
int main()
{
    char str1[20], str2[20];
    printf("Enter the first string\n");
    fgets(str1, 20, stdin);
    printf("Enter the secong string\n");
    fgets(str2, 20, stdin);

    comp(str1, str2);
    return 0;
}

// 4. Write a function to transform string into uppercase
#include <stdio.h>
void uppercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
            printf("%c", str[i]);
        }
    }
}
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    uppercase(str);
}
// 5. Write a function to transform a string into lowercase
#include <stdio.h>
void lowercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
            printf("%c", str[i]);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    lowercase(str);
}
// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

#include <stdio.h>
#include <string.h>
void checkAlpNum(char str[])
{
    int count = 0;
    str[strlen(str) - 1] = '\0';
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 97 && str[i <= 122]) || (str[i] >= 65 && str[i] <= 96) || (str[i] >= 48 && str[i] <= 57))
        {
            count++;
            // printf("%d", count);
        }
    }
    if (count == (strlen(str)))
    {

        printf("It is the alphanumeric string\n");
    }
    else
    {
        printf("Not the alphanumeric string");
    }
}
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    checkAlpNum(str);
}

// 7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>
void checkPali(char str[]){
    int len= (strlen(str)-1), flag=0;
    for(int i=0; i<(len); i++){
        if(str[i] != str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag != 0){
        printf("Not the palidrome");
    }
    else{
        printf("Palidrome");
    }
    
    }
int main(){
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20 , stdin);
    checkPali(str);

    return 0;
}

// 8. Write a function to count words in a given string
#include <stdio.h>
#include <string.h>
void calword(char str[])
{
    // str[strlen(str)-1]='\0';
    int count = 1;
    printf("The total number of word is ");
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 32 && str[i+1]!= 32)
        {
            count++;
        }
    }
    printf("%d", count);
    // printf("%d", count + 1); if I don't tell the fget for the last value;
}
int main()
{
    char str[20];
    printf("Print the string\n");
    fgets(str, 20, stdin);
    calword(str);

    return 0;
}
// 9. Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” )
#include <stdio.h>
#include <string.h>
void swap(char s[], int start, int end)
{
    int i = start, j = end, temp;
    while (i <= j)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --j;
        ++i;
    }
}

int main()
{
    int i = 0, flag = 0, start = 0, end = 0;
    char str[100];
    printf("Enter a string:\n");
    fgets(str, 100, stdin);
    while (str[i]) // checking till the length
    {
        while (str[i] != 32) // till not getting the space
        {
            if (str[i] == '\0')// checking for the last word
            {
                flag = 1;
                break;
            }
            ++end;
            ++i;
        }
        swap(str, start, end - 1);
        if (flag == 1)
            break;
        start = ++end;
        ++i;
    }
    swap(str, 0, i - 1);
    for (i = 0; str[i]; i++)
    {
        if (str[i] != '\n')
            printf("%c", str[i]);
    }
    return 0;
}

// // 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
#include <string.h>
void repchar(char str[])
{
    int a = strlen(str), i, j;
    // printf("%d", a);
    for (i = 0; str[i]; i++)
    {
        int count = 0;
        for (j = i + 1; str[j]; j++)
        {  
            if (str[i] == str[j])
            {
                count++;
                str[j]=-1;
            }
        }
        if (count>0)
        {
            printf("%c has the repeated character\n", str[i]);
        }
    }
}
int main()
{
    char str[50];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    repchar(str);
}
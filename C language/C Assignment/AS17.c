// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int count = 0;
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    // Two method to calculate the length of the string ;
    // str[strlen(str) - 1] = '\0'; 1. we do this because this fgets also take the enter key as the character so we specific remove the enter key cahracter;
    for (int i = 0; str[i]; i++)
        ++count;
    printf("%d", count - 1); // 2. we also print("%d", count-1) to calculate the length of the string.
    return 0;
}

// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
    char str[20], a;
    int count = 0;
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    printf("Enter the char you want to search\n");
    scanf("%c", &a);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == a)
        {
            count++;
        }
    }
    printf("Hello, %d", count);

    return 0;
}

// 3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
    char str[20];
    int count = 0;
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    printf("Enter the char you want to search\n");
    for (int x = 0; str[x]; x++)
    {
        if (str[x] == 'a' || str[x] == 'e' || str[x] == 'i' || str[x] == 'o' || str[x] == 'u')
        {
            count++;
        }
    }
    printf("Hello, %d", count);

    return 0;
}

// 4. Write a program to convert a given string into uppercase
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] > 96 && str[i] < 124)
            str[i] = str[i] - 32;
        printf("%c", str[i]);
    }

    // printf("%s",strupr(str)); This direct functon is used for upprtcase;
    return 0;
}

// 5. Write a program to convert a given string into lowercase
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
        printf("%c", str[i]);
    }

    // printf("%s",strlwr(str)); This direct functon is used for upprtcase;
    return 0;
}

// 6. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    int a = (strlen(str));
    printf("In reverse order is\n");
    for (int i = a; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}

// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>
int main()
{
    char str[20];
    int alpha = 0, dig = 0, spechar = 0;
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 124))
        {
            alpha++;
        }
        if (str[i] > 47 && str[i] < 58)
        {
            dig++;
        }
        if ((str[i] > 31 && str[i] < 48) || (str[i] > 57 && str[i] < 65))
        {
            spechar++;
        }
    }
    printf("No. of alphabets in the string is %d\n", alpha);
    printf("No. of digit in the string is %d\n", dig);
    printf("No. of special character in the string is %d\n", spechar);
    return 0;
}
// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter the string\n");
    fgets(str1, 20, stdin);
    int a = strlen(str1);
    str1[strlen(str1) - 1] = '\0';
    for (int i = 0; i < a; i++)
    {
        str2[i] = str1[i];
    }
    printf("The copied array is\n");
    for (int j = 0; j < a; j++)
    {
        printf("%c", str2[j]);
    }
    return 0;
}

// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter the sting\n");
    fgets(str, 20, stdin);
    printf("String in ascending order is\n");
    int a = strlen(str);
    str[strlen(str) - 1] = '\0';
    for (int i = 0; i < a; i++)
    {
        char temp;
        for (int j = i+1; j < a; j++)
        {
            if (str[i] > str[j])
            {
                char temp= str[i];
                str[i]= str[j];
                str[j]= temp;
            }
        }
        printf("%c", str[i]);
    }
}
// 10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the string\n");
    fgets(str, 20, stdin);
    str[strlen(str)-1]='\0';
    for(int i=0; str[i]; i++){
        int count=0;
        for(int j=0; str[j]; j++){
            if(str[i]==str[j])
                count++;
        }
        printf("%d elements has %d frequency\n", i, count);
    }
    return 0;
}
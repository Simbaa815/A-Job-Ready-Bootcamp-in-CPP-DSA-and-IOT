// 1. Define a function to input variable length string and store it in an array without
// memory wastage.
#include <stdio.h>
#include <stdlib.h>
void *inputString()
{
    char *p, ch, *q;
    int i = 0, j = 1;
    p = (char *)malloc(sizeof(char));
    printf("Enter the string: \n");
    while (ch != '\n')
    {

        ch = getc(stdin);
        j++;
        q = (char *)realloc(p, j * sizeof(char));
        *(p + i) = ch;
        i++;
    }
    *(p + i) = '\0';
    for (i = 0; *(p + i); i++)
    {
        printf("%c", *(p + i));
    }
    free(p);
}

int main()
{
    inputString();
    // printf("You have entered %s ", str);

    return 0;
}

// 2. Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, avg = 0;
    printf("How many value you want to enter\n");
    scanf("%d", &n);
    int *p = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        avg = avg + *(p + i);
    }
    avg = avg / n;
    printf("The average of the data value is %d", avg);

    return 0;
}
// 3. Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum=0, num;
    printf("Enter the numbers of elements\n");
    scanf("%d", &num);
    int *p =NULL;
    p=(int*)malloc(num * sizeof(int));

    if(p==NULL){
        printf("Memory not allocated\n");
        exit(0);
    }

    for(int i=0; i<num; i++){
        scanf("%d", p+i);
        sum += *(p+i);
    }

    printf("The sum is %d", sum);
    free(p);
    return 0; 
}
// 4. Write a program to input and print text using dynamic memory allocation. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    char *ptr= NULL;
    printf("Enter the size of string you want to store \n");
    scanf("%d", &n);
    fflush(stdin);
    ptr = (char*)malloc(n*sizeof(char));
    printf("enter the string\n");
    fgets(ptr, n*sizeof(char), stdin);

    printf("You enter %s", ptr);
    free(ptr);
    
    return 0;
}

// 5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr = NULL, n, sum=0;
    printf("Enter the number you want to enter\n");
    scanf("%d", &n);
    ptr = (int*)malloc(n* sizeof(int));

    for(int i =0; i<n; i++){
        scanf("%d", ptr+i);
        sum+= *(ptr + i);
    }
    printf("The sum is %d", sum);
}

// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *ptr=NULL;
    printf("Enter the size you want to create\n");
    scanf("%d", &n);
    ptr = (int*)calloc(n,sizeof(int));
    //For entery the number in the array
    for(int i=0; i<n; i++){
        scanf("%d", ptr+i);
    }
    // For largest number check;
    for(int i=0; i<n; i++){
        if(*(ptr) < *(ptr+i)){
            *ptr= *(ptr+i);
        }
    }
    printf("The largest number is %d", *ptr);

    return 0;
}
// 7. Write a program to demonstrate memory leak in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    ptr = NULL;
    return 0;
}
// 8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
int *testfun(){
    int a=50;
    // printf("The address of a is %d", &a);
    return &a;
}
int main(){
    int *ptr= testfun();
    printf("%d", *ptr);
    return 0;
}
// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include<stdio.h>
int main(){
    int n, *ptr=NULL;
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
    }
    else
        printf("Memory allocation successfully");

    return 0;

}
// 10. Find out the maximum and minimum from an array using dynamic memory allocation
// in C.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *ptr=NULL;
    printf("Enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr= (int*)calloc(n, sizeof(int));
    if(ptr==NULL)
        printf("Memory allocation failed\n");

    printf("Enter the %d elements\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", ptr+i);
    }

    // for maximum elements
    for(int i=0; i<n; i++){
       if(*ptr < *(ptr+i))
       {
        *ptr = *(ptr+i);
       }
    }
    printf("Maximum number is %d", *ptr);

    // for minimum elements
    for(int i=0; i<n; i++){
       if(*ptr > *(ptr+i))
       {
        *ptr = *(ptr+i);
       }
    }
    printf("\nMinimum number is %d", *ptr);

}
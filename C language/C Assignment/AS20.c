// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>
int swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return (*a, *b);
}
int main()
{
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);
    printf("After swapping values is \n");
    swap(&a, &b);
    printf("%d %d", a, b);
}
// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
int swap(char **x, char **y)
{
    char *temp = *x;
    *x = *y;
    *y = temp;
    return (*x, *y);
}
int main()
{
    char *n1 = "Rohan", *n2 = "Rajat";
    printf("Before swapping\n");
    printf("n1 = %s and n2=%s", n1, n2);
    printf("\nAfter swapping\n");
    swap(&n1, &n2);
    printf("n1= %s and n2= %s", n1, n2);

    return 0;
}
// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void sort(int *ptr, int size)
{
    int temp[5];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp[i] = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp[i];
            }
            else
            {
                continue;
            }
        }
            printf("%d ", *(ptr + i));
    }
}
int main()
{
    int arr[5];
    printf("enter the number\n");
    for (int i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, 5);
}
// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main(){
    int a=5;
    int *ptr= &a;
    printf("Address of a is %d", ptr);
    printf("\nValue of a is %d", *ptr);
}
// 5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int findmax(int *a, int *b){
    if(*a >= *b)
        return *a;
    else
        return *b;
}
int main(){
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);
    printf("%d",findmax(&a, &b));
}
// 6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int findlen(char *ptr){
    int count=0;
    for(int i=0; ptr[i]; i++){
        count++;
    }
    return count;
}
int main(){
    char str[10];
    printf("Enter the string\n");
    fgets(str, 10, stdin);
    printf("Length of the string is %d", findlen(str)-1);

    return 0;
}
// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>
void calvolcon(char *ptr){
    int countVol=0, countCon=0;
    for(int i=0; *(ptr + i); i++){
        if(ptr[i]=='a' ||ptr[i]=='e' ||ptr[i]=='i' ||ptr[i]=='o' ||ptr[i]=='u'){
            countVol++;
        }
        else{
            countCon++;
        }
    }
    printf("No. of vowels in the string are %d", countVol);
    printf("\nNo. of constant in the string are %d", countCon);

}
int main(){
    char arr[10];
    printf("Enter the string\n");
    fgets(arr, 10, stdin);
    calvolcon(arr);
}
// 8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sumAll(int *ptr){
    int res=0;
    for(int i=0; i<5; i++){
        res = res + (*(ptr + i));
    }
    return res;
}
int main(){
    int arr[5];
    printf("Enter the five elements\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("The sum of all the elements of the array is %d", sumAll(arr));
    return 0;
}
// 9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void revarr(int *ptr, int size){
    printf("After Reverse\n");
    for(int i=size-1; i>=0; i-- ){
        printf("%d ", ptr[i]);
    }
}
int main(){
    int size;
    printf("Enter the size\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the %d numbers in the string\n", size);
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    revarr(arr, size);

    return 0;
}

// 10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
void revstr(char *ptr, int size){
    for(int i=size-1; i>=0; i--){
        printf("%c", ptr[i]);
}
}

int main(){
    char arr[10];
    printf("Enter the string\n");
    fgets(arr, 10, stdin);
    int size=(strlen(arr))-1;
    revstr(arr, size);
}
// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int n;
int greatest(int a[])
{
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("The greatest number from the array is ");
    return max;
}
int main()
{
    printf("How much size you want to create\n");
    scanf("%d", &n);
    int arr[n];
    printf("%d", greatest(arr));
    return 0;
}

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int n;
int greatest(int a[])
{
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("The greatest number from the array is ");
    return min;
}
int main()
{
    printf("How much size you want to create\n");
    scanf("%d", &n);
    int arr[n];
    printf("%d", greatest(arr));
    return 0;
}

// 3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
int n;
int sort(int a[])
{
    int temp = 0;
    printf("Sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ", a[i]);
    }
    return 0;
}
int main()
{
    int arr[n];
    printf("Enter the size of array u want to create\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d ", sort(arr[n]));

    return 0;
}
// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
void rotatearr(int arr[], int s, int pos)
{
    int d;
    int arr1[50];
    printf("For rotation select\n");
    printf("1 for left\n");
    printf("2 for right\n");
    printf("Select your choice\n");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
    {
        for (int i = 0; i < pos; i++)
        {
            for (int j = 0; j < pos;)
            {
                arr1[j] = arr[i];
            }
            arr[i] = arr[pos - i];
        }
        for (int i = 0; i < (s - pos); i++)
        {

            printf("%d", arr[i]);
        }
    }
    break;

    default:
        break;
    }
}
int main()
{
    int size, pos;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position from where u want to rotate\n");
    scanf("%d", &pos);
    rotatearr(arr, size, pos);
}

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include<stdio.h>
#include<stdlib.h>
void firstOccur(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d", arr[i]);
                exit(0);
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers in the array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("First occurrence of adjacent duplicate values in the array is\n");
    firstOccur(arr, n);
    
}

// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
#include <stdio.h>
void reverse(int arr[], int size)
{
    printf("In reverse order\n");
    for (int i = (size - 1); i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
}
// 7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
void freq(int a[], int n){
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=(i+1); j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("a[%d] has duplicate elements %d\n", i, count);
    }
}
int main(){
    int size; 
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the number\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    freq(arr, size);

    return 0;
}

// 8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
void getunique(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    count++;
                    break;
                }
            }
        }
        printf("Unique elements are\n");
        if (count == 0)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    getunique(arr, n);

    return 0;
}
// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include<stdio.h>
void sort2(int a[], int size)
{
    int temp = 0;
    printf("Sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d", a[i]);
    }
}
int main(){
    int n, i, j; 
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements for the first array\n");
    //for the first array;
    for( i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements for the second array\n");
    //for the second array;
    for( j=0; j<n; j++){
        scanf("%d", &arr2[j]);
    }
    int arr3[n+n];
    for(int i=0; i<n; i++){
        arr3[i]=arr1[i];
    }
        i=0;
    for(int j=n; j<(n+n); j++){
        arr3[j]=arr2[i];
        i++;
    }
    // for(int a=0; a<(n+n); a++){
    //     printf("%d ", arr3[a]);
    // }
    sort2(arr3 , (n+n));

    return 0;
}

// 10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void freq(int a[], int n){
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=(i+1); j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("a[%d] has the frequency is %d\n", i, count);
    }
}
int main(){
    int size; 
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    freq(arr, size);

    return 0;
}
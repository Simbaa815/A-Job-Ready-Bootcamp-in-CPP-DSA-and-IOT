// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], sum = 0;
    printf("Enter the 10 element\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], sum = 0;
    float avg;
    printf("Enter the 10 elsements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / 10.0;
    printf("%f", avg);

    return 0;
}

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], sum1 = 0, sum2 = 0;
    printf("Enter the elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum1 = sum1 + arr[i];
        }
        else
        {
            sum2 = sum2 + arr[i];
        }
    }
    printf("The sum of even number is %d\n", sum1);
    printf("The sum of odd number is %d", sum2);

    return 0;
}

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter the elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int greatest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }
    printf("%d", greatest);

    return 0;
}

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter the numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("%d", smallest);
    return 0;
}

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include <stdio.h>
int main()
{
    int arr[10], temp;
    printf("Enter the elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
    return 0;
}

// 7. Write a program to find second largest in an array.Take array values from the user
#include <stdio.h>
int main()
{
    int arr[10], temp;
    printf("Enter the elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("%d ", arr[8]);
    return 0;
}


// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.
#include <stdio.h>
int main()
{
    int arr[10], temp;
    printf("Enter the elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[1]);
    }
    return 0;
}


// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<stdio.h>
int main(){
    int arr[10], i,j;
    printf("Enter the numbers\n");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("Normal order\n");
    for(j=0; j<10;j++){
        printf("%d\t", arr[j]);
    }
    printf("\nReverse order\n");
    for(int i=9; i>=0; i--){
        printf("%d\t", arr[i]);
    }
}

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include<stdio.h>
int main(){
    int arr1[10], arr2[10];
    printf("Enter the numbers\n");
    for(int i=0; i<10; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<10;i++){
        for(int j=i; j<10;){
            arr2[j]= arr1[i];
            break;
        }
    }
    return 0;
}

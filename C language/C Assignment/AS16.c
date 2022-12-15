// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    printf("Enter the elements in first 3x3 matric\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements in second 3x3 matric\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of two matrices is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    printf("Enter the elements in first 3x3 matric\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements in second 3x3 matric\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of two matrices is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter the row and column of the matric\n");
    scanf("%d %d", &row, &col);
    int arr1[row][col];
    //  arr2[col][row];
    printf("Enter the elements in the matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &(arr1[i][j]));
        }
    }
    printf("Transpose of the matrix is \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            // arr2[i][j] = arr1[i][j];
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
// 4. Write a program in C to find the sum of right diagonals of a matrix.
#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the square matrix\n");
    scanf("%d", &size);
    int arr[size][size];
    printf("Enter the elements in the matrix\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // for right diagonal sum
    int sum = 0;
    printf("The sum of right diagonal is \n");
    for (i = 0; i < size; i++)
    {
        // for( j=size-(i+1); j<=size; j--){
        //         sum = sum + arr[i][j];
        // }
        j = size - (i + 1);
        sum = sum + arr[i][j];
    }
    printf("%d\n", sum);
    return 0;
}
// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the square matrix\n");
    scanf("%d", &size);
    int arr[size][size];
    printf("Enter the elements in the matrix\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // for left diagonal sum
    int sum = 0;
    printf("The sum of left diagonal is\n");
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i][i];
    }
    printf("%d\n", sum);
    return 0;
}
// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main(){
    int size, i, j;
    printf("Enter the size of square matrix\n");
    scanf("%d", &size);
    int arr[size][size];
    printf("Enter the elements in the square matrix\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sumRow=0, sumCol=0;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            sumRow = sumRow + arr[i][j];
        }
        printf("The sum of %d row is %d\n", i, sumRow);
        sumRow=0;
    }
    printf("\n");
    for(j=0;j<size; j++){
        for(i=0; i<size; i++){
            sumCol= sumCol + arr[i][j];
        }
        printf("The sum of %d col is %d\n", j, sumCol);
        sumCol=0;
    }
    return 0;
}

// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the square matrix\n");
    scanf("%d", &size);
    int arr[size][size];
    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Lower triangle is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the square matrix\n");
    scanf("%d", &size);
    int arr[size][size];
    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Upper triangle is\n");
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter the size of the square matrix\n");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("Enter the elements\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0, size = row * col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
                count++;
        }
    }
    // printf("%d", count);
    if (count >= ((size / 2) + 1))
    {
        printf("Yes it is a sparse matrix\n");
    }
    else
    {
        printf("Not the sparse matrix\n");
    }
    return 0;
}
// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of the square matrix\n");
    scanf("%d",&size);
    int arr[size][size];
    printf("Enter the elements in the square matrix\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
         scanf("%d",&arr[i][j]);
        }
    }
    int count =0, maxOne=0, a=0;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(arr[i][j]==1){
                count++;}
            }
            if(maxOne < count){
                maxOne=count;
                a++;
        }
    }
        printf("%dst row has max i's\n", a);

        return 0;

}
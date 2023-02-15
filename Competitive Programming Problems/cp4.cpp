// Median of Two Sorted Arrays

// Problem Statement
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the
// median of the two sorted arrays.
// The overall run time complexity should be O(log (m+n)) .

#include<bits/stdc++.h>
using namespace std;
void arrInp(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

int median(int arr1[],int n, int arr2[], int m)
{
    // int arr1_size = sizeof(arr1)/sizeof(arr1[0]);
    // int arr2_size = sizeof(arr2)/sizeof(arr2);
    int arr3[n+m];
    merge(arr1, arr1+n, arr2, arr2+m, arr3);

    int temp = n+m;
    if(temp %2 ==1)
        return arr3[temp/2];
    else return (arr3[temp/2] + arr3[temp/2-1])/2.0;
}

int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n1;
    cin>>n1;
    int array1[n1];
    arrInp(array1, n1);

    cout<<"Enter the size of the second array"<<endl;
    int n2;
    cin>>n2;
    int array2[n2];
    arrInp(array2, n2);

    int ans = median(array1, n1, array2, n2);

    cout<<"Median is "<<ans<<endl;
}
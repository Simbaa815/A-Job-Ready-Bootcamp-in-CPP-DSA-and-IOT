// An array arr a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array arr , return the index i such that arr[0] < arr[1] < ... < arr[i -
// 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] .
// You must solve it in O(log(arr.length)) time complexity.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    // take input from the user
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int start = 0, ans=0, end = n-1, mid = (start +end)/2;

    while(start < end)
    {
        if(arr[mid+1] < arr[mid])
        {
            if(arr[mid-1] <= arr[mid])
            {
                ans = mid;
                break;
            }
            end = mid;
        }
        else{
            start = mid;
        }
        mid = (start + end)/2;
    }
    cout<<ans;

    return 0;
}
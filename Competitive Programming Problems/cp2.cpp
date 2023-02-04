// 2. Product of Array Except Self

// Problem Statement:-
// Given an integer array nums , return an array answer such that answer[i] is equal to the
// product of all the elements of nums except nums[i] .
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division
// operation.
// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#include<iostream>
using namespace std;
void pro_exp_self(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int product=1;
        for(int j = 0; j < size; j++)
        {
            if(j == i)
            {
                continue;
            }
            else 
            {
                product = product * arr[j];
            }
        }
        cout<<product<<" ";
    }
}
int main()
{  
    int n;
    cout<<"Enter nums"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    pro_exp_self(arr, n);
}

// BY USING DIVIDE METHOD
/* Logic: 1- [1, 2, 3, 4]
    we take the product of the the index which is equal to
    [1*2*3*4] = 24;
    
    2. Place the product in all the indexes so we get
        [24, 24, 24, 24];
    
    3. Now divide the particular index of the product by the user index
    24/1 = 24
    24/2 = 12
    24/3 = 8
    24/4 = 6

*/

/* Efficient logic
    BY converting division into log
 */
#include<iostream>
#include<math.h>
using namespace std;
int divide(int dividend, int divisor)
{
    if(dividend ==0)
        return 0;
    if(divisor ==0)
    {
        cout<<"Error : Divide by zero";
        exit(0);
    }
    int sign = (dividend < 0) ^ (divisor < 0);
    dividend = abs(dividend);
    divisor = abs(divisor);
    
    int ans = exp(log(dividend) - log(divisor)) + 0.0000000001;

    return ((sign == 0)? ans : -ans);
    
}
int main()
{
    int n, count=0, mul=1;
    cout<<"Enter nums"<<endl;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        // cin>>arr[i];
        if(arr[i] == 0)
            count++;
        else
            mul=mul*arr[i];
    }
    
    for(int i=0; i<n; i++)
    {
        if(count>1)
            ans[i] = 0;
        else if(count == 1)
        {
            if(arr[i] != 0)
                ans[i]=0;
            else
                ans[i]=mul;
        }
        else
            ans[i]=divide(mul, arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
}
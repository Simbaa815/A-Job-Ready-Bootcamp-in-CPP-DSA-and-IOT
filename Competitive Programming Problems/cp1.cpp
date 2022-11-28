// Given an integer x , return true if x is palindrome integer.
// An integer is a palindrome when it reads the same backward as forward.
// For example, 121 is a palindrome while 123 is not.
// Constraints:
// -231 <= x <= 231 - 1

#include<iostream>
using namespace std;
bool check_Pali(int x)
{
    int y = x;
    int res = 0;

    while(y>0)
    {
        res = res *10;
        res = res+ y%10;
        y = y/10;
    }

    if( res == x)
        return true;
    else 
        return false;
}

int main()
{
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<check_Pali(x);
    
    return 0;
}
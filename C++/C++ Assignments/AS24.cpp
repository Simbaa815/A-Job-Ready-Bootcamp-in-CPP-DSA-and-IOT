// 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
using namespace std;
void check_Prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "It is a prime number";
    }
    else
    {
        cout << "Not the prime number";
    }
}
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    check_Prime(n);
}
// 2. Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
void hig_val(int n)
{
    int max = 0;
    // for finding the size of the number
    int count = 0;
    while (n != 0)
    {
        count++;

        if (n % 10 > max)
        {
            max = n % 10;
            n = n / 10;
        }
        n = n / 10;
    }
    cout << max;
}
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    hig_val(n);
}
// 3. Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;

void power(int base, int pwr)
{
    int res = 1;
    for (int i = 1; i <= pwr; i++)
    {
        res = res * base;
    }
    cout << res;
}
int main()
{
    int x, y;
    cout << "Enter the number(base)\n";
    cin >> x;
    cout << "Enter the number(power)\n";
    cin >> y;
    power(x, y);
    return 0;
}
// 4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n)
        return n * fact(n - 1);
    else
        return 1;
}
int comb(int a, int b)
{
    return fact(a) / (fact(b) * fact(a - b));
}
void pas_tri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i; space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << comb(i, j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the triangle\n";
    cin >> n;
    pas_tri(n);
}
// 5. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include <iostream>
#include <math.h>
using namespace std;
int checkPersquare(int n)
{
    int a = sqrt(n);
    return (a * a == n);
}
int check_fibo_num(int n)
{
    return (checkPersquare(5 * n * n + 4) || checkPersquare(5 * n * n - 4));
}
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    check_fibo_num(n) ? cout << "Yes this is a fibonacci number" : cout << "Not the fibonacci number";
    return 0;
}
// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y;
}
int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;
    swap(a, b);
}
// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;
int add(int, int, int = 0);
int main()
{
    int a, b, c;
    cout << "Enter the two numbers\n";
    cin >> a >> b;
    cout << "Sum is " << add(a, b) << endl;
    cout << "Enter the three number\n";
    cin >> a >> b >> c;
    cout << "Sum is " << add(a, b, c);
    return 0;
}
int add(int a, int b, int c)
{
    return a + b + c;
}

// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include <iostream>
using namespace std;
int area(float);
int area(int, int);
int area();
int main()
{
    float r;
    cout << "Enter the radius" << endl;
    cin >> r;
    cout << "Area of the circle is " << area(r) << endl;

    int l, b;
    cout << "Enter the length and breadth of the rectangle\n";
    cin >> l >> b;
    cout << "Area of the rectangle is " << area(l, b) << endl;

    cout << "Area of the triangle is " << area();
}

int area(float rad)
{
    return (3.14 * rad * rad);
}
int area(int len, int bred)
{
    return (len * bred);
}
int area()
{
    int base, height;
    cout << "Enter the base and height of the triangle\n";
    cin >> base >> height;
    return (base * height) / 2;
}
// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include <iostream>
using namespace std;
int maxno(int, int);
float maxno(float, float);
int main()
{
    int a, b;
    cout << "Enter the two integral number\n";
    cin >> a >> b;
    cout << "Largest number is " << maxno(a, b) << endl;

    float x, y;
    cout << "Enter the two real number" << endl;
    cin >> x >> y;
    cout << "Largest number is " << maxno(x, y) << endl;
}

int maxno(int a, int b)
{
    return (a > b) ? a : b;
}

float maxno(float a, float b)
{
    return (a > b) ? a : b;
}
// 10. Write functions using function overloading to add two numbers having different data
// types.
#include <iostream>
using namespace std;
int sum(int, int);
float sum(float, float);

int main()
{
    int a, b;
    cout << "Enter the two number" << endl;
    cin >> a >> b;
    cout << "The sum of two number is " << sum(a, b);

    float x, y;
    cout << "Enter the two real number" << endl;
    cin >> x >> y;
    cout << "The sum of two real number is " << sum(x, y);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}

float sum(float a, float b)
{
    return (a + b);
}
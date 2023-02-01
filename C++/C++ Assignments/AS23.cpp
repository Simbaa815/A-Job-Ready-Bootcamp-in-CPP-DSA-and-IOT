// 1. Write a C++ program to print Hello MySirG on the screen.
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello MySirG";
    return 0;
}
// 2. Write a C++ program to print Hello on the first line and MySirG on the second line
// using endl.
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello" << endl
         << "MySirG";
    return 0;
}
// 3. Write a C++ program to calculate the sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two number you want to add\n";
    cin >> a >> b;
    cout << "The sum is " << a + b;
    return 0;
}

// 4. Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the radius\n";
    cin >> r;
    cout << "area of the circle is " << (22 / 7) * (r * r);
    return 0;
}
// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
    int l, b, h;
    cout << "Enter the length\n";
    cin >> l;
    cout << "Enter the breadth\n";
    cin >> b;
    cout << "Enter the height\n";
    cin >> h;
    cout << "volume of the cuboid is " << (l * b * h);
    return 0;
}
// 6. Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the three numbers\n";
    cin >> a >> b >> c;
    cout << "The avg of entered numbers is " << (a + b + c) / 2;
    return 0;
}
// 7. Write a C++ program to calculate the square of a number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number for finding the square\n";
    cin >> n;
    cout << "The square is " << n * n;
}
// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers\n";
    cin >> a >> b;
    cout << "\nBefore swapping " << a << " " << b;
    b = a + b;
    a = b - a;
    b = b - a;
    cout << "\nAfter swapping " << a << " " << b;
    return 0;
}
// 9. Write a C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers\n";
    cin >> a >> b;
    cout << "The maximum of two number is\n";
    if (a > b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
}
// 10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;
int main()
{
    int arr[10], sum = 0;
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "The sum is " << sum;

    return 0;
}
// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    void set(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print() /*(Complex c)*/
    {
        cout << real << " + " << imag << "i";
        // cout<<c.real<< "+" <<"i"<<c.imag;
    }
};
int main()
{
    Complex c;
    int r, i;
    cout << "Enter the real part" << endl;
    cin >> r;
    cout << "Enter the imaganary part" << endl;
    cin >> i;
    c.set(r, i);
    c.print();

    return 0;
}
// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include <iostream>
using namespace std;
class Time
{
private:
    int hr, min, sec;

public:
    void set(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void display()
    {
        cout << hr << "h r" << min << "min " << sec << "sec " << endl;
    }
};
int main()
{
    Time t;
    int h, m, s;
    cout << "Enter the hour" << endl;
    cin >> h;
    cout << "Enter the minute" << endl;
    cin >> m;
    cout << "Enter the second" << endl;
    cin >> s;
    t.set(h, m, s);
    t.display();

    return 0;
}

// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include <iostream>
using namespace std;
class Factorial
{
private:
    int fact;

public:
    int find_fact(int n)
    {
        if (n > 0)
        {
            return (n * (find_fact(n - 1)));
        }
        return 1;
    }
};

int main()
{
    Factorial f;
    int n, result;
    cout << "Enter the value" << endl;
    cin >> n;
    result = f.find_fact(n);
    cout << result << endl;
    return 0;
}

// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include <iostream>
using namespace std;
class LargestNumber
{
    public:
        void findlargest(int a, int b, int c)
        {
            if (a > b && a > c)
                cout << a << endl;
            else if (b > a && b > c)
                cout << b << endl;
            else
                cout << c << endl;
        }
};
int main()
{
    LargestNumber l;
    int a, b, c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"The largest number is"<<endl;
    l.findlargest(a, b, c);

    return 0;
}
// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber
{
    public:
        void revnum(int n)
        {
            while(n>0)
            {
                cout<<(n%10);
                n=n/10;
            }
        }
};
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    ReverseNumber r;
    cout<<"Reverse of given number is"<<endl;
    r.revnum(n);

    return 0;
}
// 6. Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include<iostream>
using namespace std;
int count;
class Square
{
    public:
        void sqr(int r)
        {
            r= r*r;
            cout<<"Square of the number is"<<r<<endl;
            count++;
            cout<<"Function is called "<<count<<" time"<<endl;
        }
};

int main()
{
    Square a, b;
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    a.sqr(num);
    b.sqr(num+1);
}

// 7. Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include <iostream>
using namespace std;
class LargestNumber
{
    public:
        void findlargest(int a, int b, int c)
        {
            if (a > b && a > c)
                cout << a << endl;
            else if (b > a && b > c)
                cout << b << endl;
            else
                cout << c << endl;
        }
};
int main()
{
    LargestNumber l;
    int a, b, c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"The largest number is"<<endl;
    l.findlargest(a, b, c);

    return 0;
}
// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    public:
        void rect_area(int l, int b)
        {
            cout<<(l*b)<<endl;
        }
};

int main()
{
    Rectangle r;
    int l, b;
    cout<<"Enter the length"<<endl;
    cin>>l;
    cout<<"Enter the width"<<endl;
    cin>>b;
    cout<<"Area of the rectangle is"<<endl;
    r.rect_area(l, b);

    return 0;
}
 
// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
#include<iostream>
using namespace std;
class Circle
{
    public:
        void cir_area(int r)
        {
            cout<<"Area of the circle is"<<endl;
            cout<<((3.14)*(r*r))<<endl;
        }
};
int main()
{
    Circle c;
    int r;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    c.cir_area(r);
    
    return 0;
}
// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class find_area
{
    public:
    void area()
    {

        int n;
        cout <<"Select any one of the following:\n";
        cout <<"1. Area of square.\n";
        cout <<"2. Area of rectangle.\n";
        cout <<"3. Area of circle.\n";
        cout <<"4. Exit.\n";
        cin >> n;

        switch (n)
        {
        case 1:
        {
            int side;
            cout<<"Enter the side"<<endl;
            cin>>side;
            cout<<(side*side);
            break;
        }
        case 2:
        {
            int len, wid;
            cout<<"Enter the length and width"<<endl;
            cin>>len>>wid;
            cout<<(len*wid)<<endl;
            break;
        }

        case 3:
        {
            int rad;
            cout<<"Enter the radius"<<endl;
            cin>>rad;
            cout<<3.14*(rad*rad)<<endl;
            break;
        }
        
        default:
            cout<<"No valid type"<<endl;
        }

    }

        
};

int main()
{
    find_area a;
    a.area();

    return 0;
}
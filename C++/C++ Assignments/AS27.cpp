// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a, b;
    public:
        void setdata(int x, int y)
        {
            a= x;
            b= y;
        }
        void showdata()
        {
            cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
        }

        Complex operator+(Complex c)
        {  
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

        Complex operator-(Complex c)
        {
            Complex temp;
            temp.a = a- c.a;
            temp.b = b - c.b;
            return temp;
        }

        Complex operator*(Complex c)
        {
            Complex temp;
            temp.a = a * c.a;
            temp.b = b * c.b;
            return temp;
        }

        bool operator==(Complex c)
        {
            if(a == c.a && b==c.b) 
                return true;
            else 
                return false;
        }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata(5,7);
    c2.setdata(6,8);
    c3 = c1+c2;
    c3.showdata();
    c3= c1-c2;
    c3.showdata();
    c3 = c1*c2;
    c3.showdata();
    if(c1 == c2)
        cout<<"Both are equal"<<endl;
    else
        cout<<"Not equal"<<endl;
}
// 2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Overload
{
    private:
        int a;
    public:

        void showdata()
        {
            cout<<a;
        }
        Overload(int x)
        {
            a =x; 
        }
        Overload operator++(int x)
        {
            return a++;
        }
        Overload operator--(int x)
        {
            cout<<a--;
        }
};
int main()
{
    Overload o1(7);
    o1++;
    o1.showdata();
}
// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a, b;
    public:
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        void showdata()
        {
            cout<<"( "<<a<<" "<<b<<" )"<<endl;
        }
        friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex x, Complex y)
{
    Complex temp(0,0);
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}

int main()
{
    Complex c1(4,6), c2(8,2);
    c1 = c1+c2;
    c1.showdata();
}
// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
// Output -

#include<iostream>
using namespace std;
class Time
{
    private:
        int hrs, min, sec;
    public:
        Time(int h = 0, int m = 0, int s= 0)
        {
            hrs = h;
            min =m;
            sec =s;
            
        }
        Time operator>>(Time t)
        {
            cout<<"Enter the hours"<<endl;
            cin>>t.hrs;
            cout<<"Enter the min"<<endl;
            cin>>t.min;
            cout<<"Enter the sec"<<endl;
            cin>>t.sec;
        }
        void operator<<(Time t)
        {
            cout<<"hrs = "<<t.hrs<<" min = "<<t.min<<" sec = "<<t.sec;
        }
};

int main()
{
    Time t1, t2;
    t2>>t1; 
    t2<<t1;
}
// 5. Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.
#include<iostream>
using namespace std;
class Numbers
{
    int x, y, z;
    public:
        Numbers(int a, int b, int c)
        {
            x = a; 
            y = b;
            z = c;
        }

        void operator-()
        {
            cout << "x = " << x * -1 << ", y = " << y * -1 << ", z = " << z * -1 << endl;
        }
};
int main()
{
    Numbers n(5, 7, 3);
    -n; 
}
// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include<iostream>
using namespace std;
class CString
{
    string s1;
    public:
        CString(string a)
        {
            s1 = a;
        }
        void operator+(CString s)
        {
            cout<<s1<<" "<<s.s1<<endl;
        }
};
int main()
{
    CString s1("Rohan"), s2("Balgotra");
    s1 + s2;
}
// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
// Output-
#include <iostream>
using namespace std;
class Fraction
{
private:
    long num, den;

public:
    Fraction(long n = 0, long d = 0)
    {
        num = n;
        den = d;
    }
    void show(string s)
    {
        cout << s << ": " << num << "/" << den << endl;
    }
    void setValue()
    {
        cout << "Numerator: ";
        cin >> num;
        cout << "Denominator: ";
        cin >> den;
    }
    void operator++(int n)
    {
        cout << "f1++ : " << ++num << "/" << ++den << endl;
    }
    void operator++()
    {
        cout << "++f1 : " << ++num << "/" << ++den << endl;
    }
    friend void operator>>(Fraction &f2, Fraction &f3)
    {
        cout << "Enter another fraction values: " << endl;
        cout << "Numerator : ";
        cin >> f2.num;
        cout << "Denominator : ";
        cin >> f2.den;
        cout << "\nNumerator : ";
        cin >> f3.num;
        cout << "Denominator : ";
        cin >> f3.den;
    }
    friend void operator<<(Fraction &f2, Fraction &f3)
    {
        cout << "f2 : " << f2.num << "/" << f2.den << endl;
        cout << "f3 : " << f3.num << "/" << f3.den << endl;
    }
};

int main()
{
    Fraction f1, f2, f3;
    f1.show("f1");
    f2.show("f2");
    cout << "Enter 1st Fraction value:\n";
    f1.setValue();
    f1++;
    ++f1;
    f2 >> f3;
    f2 << f3;
    return 0;
}
// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
// Output -
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
        void setdata()
        {
            cout<<"Enter the elements in the array(3x3)"<<endl;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cin>>a[i][j];
                }
            }
                        
        }

        void getvalue()
        {
            cout<<"Matrix is "<<endl;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                    cout<<a[i][j] *-1<<" ";

                cout<<endl;
             }   
        }
};
int main()
{
    Matrix a;
    a.setdata();
    a.getvalue();
}
// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
#include<iostream>
using namespace std;
class Mystring
{
    char str[100];
    public:
        void setdata()
        {
            cout<<"Enter the string"<<endl;
            fgets(str, 100, stdin);
        }
        void operator!()
        {
            for (int i = 0; str[i]; i++)
            {
                if (str[i] <= 90 && str[i] >= 65)
                    str[i] = str[i] + 32;
                else if (str[i] <= 121 && str[i] >= 97)
                    str[i] = str[i] - 32;
            }
            cout << "\nUpdated string is: " << endl;
            for (int i = 0; str[i]; i++)
                cout << str[i];
        }
};

int main()
{
    Mystring s;
    s.setdata();
    !s;
}
// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
// Output -
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
        void setdata()
        {
            cout<<"Enter the elements in the array"<<endl;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    cin>>a[i][j];
        }
        void getdata()
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }

        Matrix operator+(Matrix m)
        {
            Matrix temp;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    temp.a[i][j] = a[i][j] + m.a[i][j];

            return temp;
        }
};
int main()
{
    Matrix a, b, c;
    a.setdata();
    b.setdata();
    c= a+b;
    c.getdata();

}
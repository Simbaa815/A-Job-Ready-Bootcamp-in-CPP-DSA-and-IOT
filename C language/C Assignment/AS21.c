// 1. Define a structure Employee with member variables id, name, salary
#include <stdio.h>
struct Employee
{
    int varid;
    char name[20];
    int salary;
};
int main()
{
    struct Employee b = {1, "Rohan Balgotra", 2000};
}
// 2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include <stdio.h>
struct employee
{
    int varid;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee b1;
    printf("Enter the Id\n");
    scanf("%d", &b1.varid);
    printf("Enter your name\n");
    fflush(stdin);
    fgets(b1.name, 20, stdin);
    printf("Enter your salary\n");
    scanf("%d", &b1.salary);
}
int main()
{
    struct employee b1;
    input();

    return 0;
}
// 3. Write a function to display employee data. [ Refer structure from question 1 ]
#include <stdio.h>

struct Employee b1;

struct Employee
{
    int varid;
    char name[20];
    int salary;
};
struct Employee input()
{
    printf("Enter the Id\n");
    scanf("%d", &b1.varid);
    printf("Enter your name\n");
    fflush(stdin);
    fgets(b1.name, 20, stdin);
    printf("Enter your salary\n");
    scanf("%d", &b1.salary);
}
struct Employee output()
{
    printf("Your id is %d", b1.varid);
    printf("\nYour name is %s", b1.name);
    printf("\nYour salary is %d", b1.salary);
}
int main()
{
    input();
    printf("\n");
    output();
}
// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
void maxSal(struct Employee b[])
{
    struct Employee max = b[0];
    for (int i = 1; i < 4; i++)
    {
        if (b[i].salary > max.salary)
        {
            max = b[i];
        }
    }
    printf("%d", max.salary);
}
int main()
{

    struct Employee b[4];
    printf("Enter the employee's salary\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &b[i].salary);
    }
    maxSal(b);
}
// 5. Write a function to sort employees according to their salaries [ refer structure from
// question 1]
#include <stdio.h>
struct Emp
{
    char name[20];
    int sal;
};
void sortSal(struct Emp b[])
{
    struct Emp temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (b[j].sal > b[i].sal)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
        printf("%d ", b[i].sal);
    }
}

int main()
{
    struct Emp b[5];
    printf("Enter the Employee salary\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i].sal);
    }
    sortSal(b);
}

// 6. Write a function to sort employees according to their names [refer structure from
// question 1]
#include <stdio.h>
#include <string.h>
struct emp
{
    char name[20];
};
void sortByName(struct emp b[5][20])
{
    struct emp temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(b[i], b[j]) > 0)
            {
                strcpy(temp.name, b[i]);
                strcpy(b[i], b[j]);
                strcpy(b[j], temp.name);
            }
        }
        printf("%s", b[i]);
    }
}
int main()
{
    struct emp name[5][20];
    printf("Enter 5 names\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(name[i], 20, stdin);
    }
    printf("\n");
    sortByName(name);
}
// 7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
struct time
{
    int hour, min, sec;
};
void difference(struct time t1, struct time t2)
{
    struct time diff;
    if (t2.sec > t1.sec)
    {
        --t1.min;
        t1.sec += 60;
    }
    diff.sec = t1.sec - t2.sec;

    if (t2.min > t1.min)
    {
        --t1.hour;
        t1.min += 60;
    }
    diff.min = t1.min - t2.min;
    diff.hour = t1.hour - t2.hour;

    printf("differnce of the time is %d: %d: %d", diff.hour, diff.min, diff.sec);
}
int main()
{
    struct time start, end;
    printf("Enter the hour, min, sec for the starting time\n");
    scanf("%d%d%d", &start.hour, &start.min, &start.sec);
    printf("Enter the hour, min, sec for the end time\n");
    scanf("%d%d%d", &end.hour, &end.min, &end.sec);
    difference(start, end);
}
// 8. Write a program to store information of 10 students and display them using structure.
#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
};
void input(struct student s[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of the student\n");
        fgets(s[i].name, 20, stdin);
        printf("Enter the roll number\n");
        scanf("%d", &s[i].rollno);
        fflush(stdin);
    }
}
int main()
{
    struct student s[10];
    input(s);
}

// 9. Write a program to store information of n students and display them using structure
#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
};
void input(struct student s[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of the student\n");
        fgets(s[i].name, 20, stdin);
        printf("Enter the roll number\n");
        scanf("%d", &s[i].rollno);
        fflush(stdin);
    }
}
void display(struct student s[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("student name is %s and his/her rollno. is %d\n", s[i].name, s[i].rollno);
    }
}
int main()
{
    struct student s[10];
    input(s);
    printf("\n");
    display(s);
}
// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.
#include <stdio.h>
struct Marks
{
    int rollno;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
void percentage(struct Marks e[], int i)
{
    float preCen;
    preCen = ((e[i].chem_marks + e[i].maths_marks + e[i].phy_marks) * 100) / 300;
    printf("You got %f%%", preCen);
}

int main()
{
    struct Marks s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter rollno and name\n");
        scanf("%d", &s[i].rollno);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        printf("Enter your chemisty , maths, physic marks\n");
        scanf("%d%d%d", &s[i].chem_marks, &s[i].maths_marks, &s[i].phy_marks);
        percentage(s, i);
        printf("\n");
    }

    return 0;
}
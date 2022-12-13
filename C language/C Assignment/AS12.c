// 1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void print1toN(int n){
    if(n<=0){
        return ;
    }
    print1toN(n-1);
        printf("%d ", n);
    
}
int main(){
    print1toN(5);
}

// 2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
void printNto1(int n){
    if(n<=0){
        return ;
    }
    printf("%d ", n);
    printNto1(n-1);
}
int main(){
    printNto1(-1);
}

// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
void printOdd(int n){
    
    if(n>=1)
    {  
        printOdd(n-1);
        printf("%d ", 2*n-1);
    }

}
int main(){
    printOdd(5);
}


// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printOdd(int n){
    
    if(n>=1)
    {  
        printf("%d ", 2*n-1);
        printOdd(n-1);
    }

}
int main(){
    printOdd(5);
}

// 5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void printOdd(int n){
    
    if(n>=1)
    {  
        printOdd(n-1);
        printf("%d ", 2*n);
    }

}
int main(){
    printOdd(5);
}

// 6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void printOdd(int n){
    
    if(n>=1)
    {  
        printf("%d ", 2*n-1);
        printOdd(n-1);
    }

}
int main(){
    printOdd(5);
}

// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void printOdd(int n){
    
    if(n>=1)
    {  
        printOdd(n-1);
        printf("%d ", n*n);
    }

}
int main(){
    printOdd(5);
}

// 8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>
void DtoB(int n){
    if(n>=1){
        DtoB(n/2);
        printf("%d", n%2);
    }
}
int main(){
    DtoB(5);
}

// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>
void DtoO(int n){
    if(n>=1){
        DtoO(n/8);
        printf("%d", n%8);
    }
}
int main(){
    DtoO(210);
}

// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>
void reversenum(int n){
    if(n>0){
        printf("%d", n%10);
        reversenum(n/10);
    }
}
int main(){
    reversenum(1234);
}
#include<stdio.h>
int numLenght(int n){
    int count=0;
    while(n % 10 !=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    puts("entre nombre");
    scanf("%d",&n);
    printf("%d\n",numLenght(n));
    return 0;
}
Question:
Write a C program that asks the user
to enter an integer and calculates
the number of digits in it.
Use a function to count and
return the number of digits
in the entered number.
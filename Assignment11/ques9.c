//Write a function to find square of any number.
#include<stdio.h>
int square(int n)
{
   return n*n; 
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Square of %d is %d",num,square(num));
    return 0;
}

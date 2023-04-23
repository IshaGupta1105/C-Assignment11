//Write a function to print first N prime number(TSRN)
#include<stdio.h>
int isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
        else
         i++;
    }
    return 1;
}
void printPrime(int n)
{
    int count=0,num=2;
    while(count<n)
    {
        if(isPrime(num))
        {
            printf(" %d ",num);
            count++;
        }
        num++;
    }
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The first %d prime numbers are:",n);
    printPrime(n);
    return 0;
}

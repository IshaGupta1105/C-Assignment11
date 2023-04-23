//Write a function to check whether a given number is prime or not.(TSRS)
#include<stdio.h>
int checkPrime(int n)
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
int main()
{
    int n=5,prime;
    prime=checkPrime(n);
    if(prime==1)
       printf("Prime\n\n");
    else
       printf("Not Prime\n\n");
    return 0;
}
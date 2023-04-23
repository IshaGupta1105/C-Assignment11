//Write a function to find next prime number of a given number(TSRS).
#include<stdio.h>
int prime(int a)
{
    int i,j;
    for(i=a+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        return j;
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Next prime number is %d.",prime(n));
    return 0;
}
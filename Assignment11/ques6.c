//Write a function to print all prime number between two given number(TSRN)
#include<stdio.h>
void prime(int a,int b)
{
    int i,j;
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d\n",i);
    }
}
int main()
{
    int a,b;
    printf("Enter the two number:\n");
    scanf("%d %d",&a,&b);
    printf("The prime number between %d and %d are:\n",a,b);
    prime(a,b);
    return 0;
}
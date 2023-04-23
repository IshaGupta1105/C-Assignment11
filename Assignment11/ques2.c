//Write a function to calculate HCF of two numbers(TSRS).
#include<stdio.h>
int hcf(int x,int y)
{
    int i,HCF;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            HCF=(x*y)/i;
            break;
        }
    }
    return HCF;
} 
int main()
{
    int x=20,y=30;
    printf("HCF of x and y is %d",hcf(x,y));
    return 0;
}
//WAP TO FIND THE SUM OF THE SERIES 1!/1+2!/2+3!/3+4!/4+5!/5 USING THE FUNCTION.
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+fact(i)/i;
    }
    return sum;
}
int main()
{
    
    printf("SUM OF SERIES IS %d.",sum(5));
    return 0;
}
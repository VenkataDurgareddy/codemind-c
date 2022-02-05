#include<stdio.h>
int main()
{
    int n,sum=0,product=1,remainder;
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        product=product*remainder;
        n/=10;
        
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}


#include <stdio.h>
int main()
{
    int n,sum=0,rem=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp/=10;
    }  
    if(sum==n)  
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}
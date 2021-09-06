#include <stdio.h>
int isPrime(int);
int main() {
    int x;
    printf("Enter numbers : ");
    scanf("%d", &x);
    if (isPrime(x) == 1)
        printf("Prime number");
    else
        printf("Not Prime number");
    return 0;
}
int isPrime(int a) 
{
    int i,ck=1;
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    return 0;
    }
    {
    if(ck==1) 
    return 1;
    }
}

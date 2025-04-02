#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int comb(int n,int r);
int main()
{
    int n,r;
    printf("Enter the combination in the format nCr : ");
    scanf("%dC%d",&n,&r);
    if(n<=0 || r<0 || n<r)
    {
        printf("Invalid input");
        return 0;
    }
    printf("%dC%d : %lld",n,r,comb(n,r));
    return 0;

}
long long fact(int n)
{
    if(n<=1)
        return (long)1;
    else
        return (long)(n*fact(n-1));
}
long long comb(int n,int r)
{
    long long result=1;
    result*=(fact(n))/(fact(n-r)*fact(r));
    return result;
}

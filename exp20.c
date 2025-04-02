#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int prime(int n);
int main()
{
    int n=0,m,i=2,rows,cols, arr[30];
    printf("Enter the number of prime numbers : ");
    scanf("%d", &m);
    while(n<=m)
    {
        if(prime(i))
        {
            arr[n]=i;
            n++;
        }
        i++;
    }
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of cols : ");
    scanf("%d", &cols);
    if(rows*cols==n-1)
        matprime(arr,rows,cols);
    else
        printf("Invalid Format");

}

int prime(int n)
{
    int end=(int)sqrt(n);
    for(int j=2;j<=end;j++)
    {
        if(n%j==0)
            return 0;
    }
    return 1;
}
int matprime(int arr[], int a, int b)
{
    int k=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            printf("%d ", arr[k++]);
        printf("\n");
    }

}

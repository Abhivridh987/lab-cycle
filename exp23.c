#include <stdio.h>
#include <stdlib.h>

int binary(int n,int i,int bin[]);
int binary2(int n,int sum);
int binary3(int n);
int main()
{

    int list[30],n;
    printf("Enter the number of elements in the list : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(int i=0;i<n;i++)
        scanf("%d",&list[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        if(binary3(list[i])!=-1)
            printf("\nBinary Representation of %d : %d",list[i],binary3(list[i]));
        else
            printf("Binary Representation of %d : Invalid ( Please enter a integer greater than 0)",list[i]);
}


int binary1(int n,int i,int bin[])
{
    if(n<0)
        return -1;
    if(n==0)
    {
        i=i-1;
        int sum=0;
        for(;i>=0;i--)
            sum=sum*10+bin[i];
        return sum;


    }
    else{
        int rem=n%2;
        bin[i]=rem;
        i++;
        return binary1(n/2,i,bin);
    }
}
int binary2(int n,int sum)
{
    if(n==0)
    {
       int bin=0;
       while(sum!=0)
       {
           int dig=sum%10;
           bin=bin*10+dig;
           sum=sum/10;
       }


       return bin;
    }
    else{
        int rem=n%2;
        sum=sum*10+rem;
        return binary2(n/2,sum);
    }
}
int binary3(int n)
{
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    else
        return n%2+ 10*binary3(n/2);

}




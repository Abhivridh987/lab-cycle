#include <stdio.h>
#include <stdlib.h>
int len(char str[]);
int palin(char str[]);
int main()
{
    char str[20];
    printf("Enter a string : ");
    scanf("%[^\n]",str);

    if(palin(str)==1)
        printf("Palindrome");
    else if(palin(str)==0)
        printf("Not Palindrome");
    else
        printf("Invalid Input");



}

int len(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
        ;
    return i;
}
int palin(char str[])
{
    int palin=1, length=len(str);
    for(int i=0;i<=((length/2)-1);i++)
    {
        if(!(((str[i] >='A' && str[i]<='Z') || (str[i] >='a' && str[i]<='z')) && ((str[length-i-1] >='A' && str[length-i-1]<='Z') || (str[length-i-1] >='a' && str[length-i-1]<='z'))))
            return -1;
        if(str[i]!=str[length-i-1] && str[i]!=str[length-i-1]+32 && str[i]!=str[length-i-1]-32)
            return 0;
    }


    return 1;

}

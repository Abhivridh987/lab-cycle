#include <stdio.h>
#include <stdlib.h>

int stringlength(char *s1)
{
    int i=0;
    while(*(s1+i)!='\0')
        i++;
    return i;
}

void strcopy(char *s1, char *s2)
{
    int i=0;
    while(*(s2+i)!='\0')
    {
        *(s1+i)=*(s2+i);
        i++;
    }

    *(s1+i)='\0';
}

void strconcatenate(char *s1,char *s2)
{
    int i=0;
    int len=stringlength(s1);
    while(*(s2+i)!='\0')
    {
        *(s1+len+i)=*(s2+i);
        i++;
    }
    *(s1+len+i)='\0';


}

int strcompare(char *s1,char *s2)
{
    int i=0;
    while(i>=0)
    {
       if(*(s1+i)=='\0' && *(s2+i)=='\0')
            return 0;
       else if(*(s1+i)>*(s2+i))
            return -1;
       else if(*(s1+i)<*(s2+i))
            return 1;
       else
       {
           i++;
       }

    }
}

int compare(int a,int b)
{
    return (!(a==5) || (b==5));
}



int main()
{

    /*
    int length;
    char name[]="Abhivridh";
    length=stringlength(name);
    printf("Length is : %d",stringlength(name));
    */

    /*
    char name[]="x";
    char name2[]="y";
    printf("Before Copying \n\nString 1 : %s\nString 2 : %s\n\nCopying name2 into name1 // strcopy(name,name2)\n\n", name,name2);
    strcopy(name,name2);
    printf("After Copying \n\nString 1 : %s\nString 2 : %s", name,name2);
    */

    /*
    char full[]="Ab";
    char name[]="hi";
    strconcatenate(full,name);
    printf("Full name : %s",full);
    */
    
    /*
    char name[]="ABHI";
    char name2[]="ABHI";
    printf("%d ",strcompare(name,name2));
    */

}

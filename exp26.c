#include <stdio.h>
#include <stdlib.h>

struct students{
    int reg_no;
    int mark[4],total_mark;
    char name[20];
};
void readStudent(struct students student[])
{
    static int i=0;
    printf("\nStudent %d \n_________________________",i+1);
    printf("\nEnter the name : ");
    scanf(" %[^\n]",student[i].name);
    printf("Enter the register number : ");
    scanf("%d", &student[i].reg_no);
    printf("Enter mark 1 : ");
    scanf("%d",&student[i].mark[0]);
    printf("Enter mark 2 : ");
    scanf("%d",&student[i].mark[1]);
    printf("Enter mark 3 : ");
    scanf("%d",&student[i].mark[2]);
    printf("Enter mark 4 : ");
    scanf("%d",&student[i].mark[3]);
    student[i].total_mark=student[i].mark[0]+student[i].mark[1]+student[i].mark[2]+student[i].mark[3];
    i++;
    system("cls");
}
int main()
{
    int n;
    struct students student[30];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        readStudent(student);
    }

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(student[j].total_mark<student[j+1].total_mark)
            {
               struct students temp;
               temp=student[j];
               student[j]=student[j+1];
               student[j+1]=temp;
            }

    printf("\n\n\nStudents arranged in their decreasing order of marks \n_____________________________________\n\n");
    for(int i=0;i<n;i++)
        printf("%s : %d\n",student[i].name,student[i].total_mark);
}

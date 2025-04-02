#include <stdio.h>
#include <stdlib.h>

int read(int mat[][30], int rows,int cols);
int mulMat(int mat1[][30],int rows1,int cols1,int mat2[][30],int rows2,int cols2,int mat3[][30]);
int displayMat(int mat[][30],int rows,int cols);
int main()
{
    int mat1[30][30],mat2[30][30],mat3[30][30];
    readMat(mat1,2,3);
    readMat(mat2,2,2);
    mulMat(mat1,2,3,mat2,2,2,mat3);
    printf("\n");
    displayMat(mat3,2,2);


}
int readMat(int mat[][30],int rows,int cols)
{
    static int count =1;
    printf("Enter the matrix %d: \n",count);
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            scanf("%d",&mat[i][j]);
    count++;

}
int mulMat(int mat1[][30],int rows1,int cols1,int mat2[][30],int rows2,int cols2,int mat3[][30])
{
    if(cols1!=rows2)
        return -1;
    else
    {
        for(int i=0;i<rows1;i++)
            for(int j=0;j<cols2;j++)
                for(int k=0;k<cols1;k++)
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
        return mat3;
    }
}
int displayMat(int mat[][30],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }

}


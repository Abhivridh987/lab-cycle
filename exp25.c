#include <stdio.h>
#include <stdlib.h>

int readMat(int mat[][30],int rows,int cols);
int larginArr(int arr[],int len);
int main()
{
    int mat[30][30],rows,cols;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of cols : ");
    scanf("%d",&cols);
    readMat(mat,rows,cols);
    for(int i=0;i<rows;i++)
        printf("Largest in row %d : %d\n",i+1,larginArr(mat[i],cols));

}
int readMat(int mat[][30],int rows,int cols)
{
    printf("Enter the matrix : \n");
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            scanf("%d",&mat[i][j]);
}
int larginArr(int arr[],int len)
{
    int lar=arr[0];
    for(int i=0;i<len;i++)
        if(arr[i]>=lar)
            lar=arr[i];
    return lar;
}


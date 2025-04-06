#include<stdio.h>
int main()
{
    int a[20][20],b[20][20]; 
    int n,m;
    printf("Enter the rows and column");
    scanf("%d%d", &n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", a[i][j]);
            b[i][j]=a[i][j];
        }
        printf("\n");

    }
    printf("\n");
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<m-2;j++)
        {
        int sum=0,avg;
           for(int r=i;r<3+i;r++)
           {
            for(int c=j;c<3+j;c++)
            {
               sum+=a[r][c];
            }
           }
        avg=sum/9;
        b[i+1][j+1]=avg;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
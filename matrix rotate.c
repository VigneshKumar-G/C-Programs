#include<stdio.h>
int main()
{
    int n;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0;i<n;i++)
        {
        for(int j=0;j<n/2;j++)
            {
            swap(&a[i][j],&a[j][i]);
            }
        }
      for (int i=0;i<n;i++)
        {
        for(int j=0;j<n/2;j++)
            {
            swap(&a[i][j],&a[i][n-j-1]);
            }
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                printf("%d",true);
            }
    }
}

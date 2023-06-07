#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};

    int size=sizeof(a)/sizeof(a[0]);
     int max =a[0];
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(max<a[i]*a[j]*a[k])
                {
                    max=a[i]*a[j]*a[k];
                }
            }
        }
    }
    printf("%d",max);
}

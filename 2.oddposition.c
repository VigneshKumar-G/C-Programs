#include<stdio.h>
int main()
{
    int a[]={2,3,1,2,3};

    int size=sizeof(a)/sizeof(a[0]);

    for (int i=1;i<size;i++)
    {
        for (int j=i+1;j<i;j++)
        {
            if(a[i]=a[j])
            {
                printf("%d",a[j]);
            }
        }
    }
}

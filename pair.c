#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};

    int size=sizeof(a)/sizeof(a[0]);

    int sum=10;

    for (int i=1;i<size;i++)
    {
        for (int j=i;j<size;j++)
        {
            if (a[i]+a[j]==sum)
            {
                printf("%d %d \n",a[i],a[j]);
            }
        }
    }

}

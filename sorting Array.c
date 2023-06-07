#include<stdio.h>

int main()
{
    int a[]={1,0,1,0,1,0,1,0,1,0};

    int size=sizeof(a)/sizeof(a[0]);

    int k=10;

    int temp;

    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }

        for (0)
    }
}

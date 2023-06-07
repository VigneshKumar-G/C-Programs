#include<stdio.h>
int main()
{
    int a[]={1,2,4,3,5,6,7};

    int size=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++);
    {
        if(i==0 && a[i+1]<a[i])
        {
            printf("%d",a[i]);
        }
        else if(a[i-1]<a[i])
    }

}

#include<stdio.h>
int main()
{
   int a[]={3,2,7,6,5,1,2,3,4};
   int size=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<size-2;i++)
   {
       for(int j=1;j<size;j++)
        {
        if(a[i+1]>a[i] && a[i+1]>a[i+2])
         {
            a[i]=a[i+1];
         }
        if(a[i+2]>a[i] && a[i+2]>a[i+1])
         {
            a[i]=a[i+2];
         }
       }
   }
   for(int i=0;i<size-2;i++)
    {
    printf("%d",a[i]);
    }
   return 0;
}

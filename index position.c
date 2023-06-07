# include<stdio.h>
 int main()
{
    int a[]={2,3,1,1,4};
    int temp,i=1;
    int size=sizeof(a)/sizeof(a[0]);

   while(i<size)
   {
       if(a[i]=0){
        temp=0;
        break;
       }
       int j=a[i];
       i=i+j;
       temp=0;

       if(i==size-1)
       {
           a[i]=size;
           i++;
       }
   }
}

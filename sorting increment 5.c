
#include<stdio.h>
int main()
{
    int a[]={1,2,4,4,4,5};
    int j=0,i=1,count=0;
    int size= sizeof(a)/sizeof(a[0]);
    while(i<size){
        j=0;
        while(j<i){
            if (a[j]==a[i])
            {
                count++;
                a[j]++;
            }
            j++;
        }
        i++;
    }
    printf("%d",count);
}

#include <stdio.h>

int main()
{
    int a[]={
        1,2,2,3,3,4,6,5,7
    };
    int size=sizeof(a)/sizeof(a[0]);
    int num=9;
    for(int i=0;i<size;i++){

        for(int j=i;j<size;j++){
           if(a[i]+a[j]==num){
               printf("%d %d\n",a[i],a[j]);
           }
        }
    }
    return 0;
}
